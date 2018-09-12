#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void biggies(vector<string> &words,vector<string>::size_type sz);

int main()
{
    vector<string> v = { "a","asd","asdf","asdfgh","sadfghhh","fdgfdgdfhdf","fdsfsfsd" };
    biggies(v,5);
    system("pause");
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
    stable_sort(words.begin(),words.end(),[] (const string &a,const string &b) { return a.size()<b.size(); });
    vector<string>::iterator vb = partition(words.begin(),words.end(),[sz] ( const string s ) { return s.size()>sz; } );
    while(vb!=words.end())
    {
        cout<<*vb<<" ";
        vb++;
    }
}