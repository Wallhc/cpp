#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void biggies6(vector<string> &words,vector<string>::size_type sz);
int main()
{
    vector<string> v = {"fds","fdsfsd","fdgdgfdsg","ds","vcx"};
    biggies6(v,6);
    system("pause");
}

void biggies6(vector<string> &words,vector<string>::size_type sz)
{
    auto tim = count_if(words.begin(),words.end(),[sz] (const string s) { return s.size()>sz; });
    cout<<tim<<endl;
}