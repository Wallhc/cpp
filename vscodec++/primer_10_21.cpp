//10.21 编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0。一旦变量变为
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a = 1;
   // auto r = [&a] () ->bool { if(a>0) { --a; return false; } else return true; }; //引用捕获
    auto r = [a] () mutable ->bool { if(a>0) { --a; return false; } else return true; };
    int j = r();
    cout<<j<<endl;
    cout<<a<<endl;
    system("pause");
}


    