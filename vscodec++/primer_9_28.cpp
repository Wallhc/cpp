#include<iostream>
#include<string>
#include<forward_list>
using namespace std;
void insertStr(forward_list<string> &fl,string s,string i);
int main()
{
    forward_list<string> fl = { "fsd","asd","gfd","flower","fd" };
    string s = "flowers";
    string i = "small";
    insertStr(fl,s,i);
    forward_list<string>::iterator fli = fl.begin();
    while(fli!=fl.end())
    {
        cout<<*fli<<" ";
        fli++;
    }
    system("pause");
}

void insertStr(forward_list<string> &fl,string s,string i)
{
    forward_list<string>::iterator fli1 = fl.begin();
    forward_list<string>::iterator fli2 = fl.before_begin();
    while(fli1!=fl.end())
    {
        if(*fli1==s) 
        {
            fl.insert_after(fli1,i);
            return;
        }
        fli1++;
        fli2++;
    }
    fl.insert_after(fli2,i);
    return;
}