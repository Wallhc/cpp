//重写统计长度小于等于6的单词数量的程序
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;


bool biggies6(string &words,vector<string>::size_type sz);
int main()
{
    vector<string> v = { "fdf","fdf","ffds","dsfcvx","fsxcvxe","cxvewgrc","nggreq","grgffggfd" };
    sort(v.begin(),v.end());
    auto end_unique = unique(v.begin(),v.end());
    v.erase(end_unique,v.end());
    stable_sort(v.begin(),v.end(),[] (const string &a,const string &b) { return a.size()<b.size(); });
    vector<string>::iterator vi = v.begin();
    while(vi!=v.end())
    {
        cout<<*vi<<" ";
        vi++;
    }
    cout<<endl;

    auto b6  = find_if(v.begin(),v.end(),bind(biggies6,_1,6));
    while(b6!=v.end())
    {
        cout<<*b6<<" ";
        b6++;
    }
    system("pause");
}

bool biggies6(string &words,vector<string>::size_type sz)
{
    return words.size()>sz;
}