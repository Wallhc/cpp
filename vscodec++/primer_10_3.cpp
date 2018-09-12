//用accumulate求一个vector<int>中的元素之和
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9 };
    vector<int> v(a,a+9);
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    system("pause");
}