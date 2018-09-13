//10.42使用list代替vector重新实现10.2.3中的去除重复单词的程序
#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<string> l = { "flower","flowers","flower","Wallhc","cxvcbr","Wallhc","cvcbrde","vcxvew"};
    l.sort();
    l.unique();
    list<string>::iterator li = l.begin();
    while(li!=l.end())
    {
        cout<<*li<<" ";
        li++;
    }
    cout<<endl;
    system("pause");
}