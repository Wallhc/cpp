#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void biggies(vector<string> &words,vector<string>::size_type sz);
int main()
{
    vector<string> v = {"sadfghhh","fdgfdgdfhdf","fdsfsfsd", "a","asd","asdf","asdfgh", };
    biggies(v,5);
    cout<<endl;
    vector<string>::iterator vi = v.begin();
    while(vi!=v.end())
    {
        cout<<*vi<<" ";
        vi++;
    }
    system("pause");
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
    stable_sort(words.begin(),words.end(),[] (const string a,const string b) { return a.size()<b.size(); });
    vector<string>::iterator vb =  stable_partition(words.begin(),words.end(),[sz] (const string s) { return s.size()<sz; } );
    while(vb!=words.end())
    {
        cout<<*vb<<" ";
        vb++;
    }
}