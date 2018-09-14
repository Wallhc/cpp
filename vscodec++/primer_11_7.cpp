//11.7 定义一个map，关键字是家庭的姓，值是一个vector，保存家中孩子们的名。编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子。
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    map<string,vector<string>> family = { {"liu",{"1_1","1_2"}},{"song",{"2_1","2_2"}} };
    //auto &w = family["liu"];  下标访问
    auto &w = family.begin()->second;
    w.push_back("1_3");
    vector<string>::iterator it = family.begin()->second.begin();
    while(it!=w.end())
    {
        cout<<*it<<" ";
        ++it;
    }
    system("pause");
}