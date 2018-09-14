#include<iostream>
using namespace std;

int reverse(int x);

int main()
{
    int x;
    cin>>x;
    x = reverse(x);
    cout<<x<<endl;
    system("pause");
}

int reverse(int x)
{
    int res=0,pop;
    while(x)
    {
        pop = x%10;
        x/=10;
        if(res>INT_MAX/10||(res==INT_MAX/10&&pop==7)) return 0;
        if(res<INT_MIN/10||(res==INT_MIN/10&&pop==-8)) return 0;
        res = res*10+pop;
    }
    return res;
}