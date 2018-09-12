//10.13 
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

bool isBigger(string s);
int main()
{
    vector<string> v = {"fsdfsd","wertetre","fsd","hgf","fgdhgfv","vcvxzz","iouoikml"};
    vector<string>::iterator vi = partition(v.begin(),v.end(),isBigger);
    while(vi!=v.end())
    {
        cout<<*vi<<" ";
        vi++;
    }
    system("pause");
}

bool isBigger(string s)
{
    return s.size()<5;
}