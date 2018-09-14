//11.8 编写一个程序，在一个vector而不是一个set中保存不重复的单词。使用set的优点是什么。
//set会自动忽略重复的关键字
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> words;
    string s;
    while(cin>>s)
    {
        if(find(words.begin(),words.end(),s)==words.end()) words.push_back(s);

    }

    auto it = words.begin();
    while(it!=words.end())
    {
        cout<<*it<<endl;
        it++;
    }
    system("pause");
}
