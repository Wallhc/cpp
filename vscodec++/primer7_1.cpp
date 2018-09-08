#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;


int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    forward_list<int> fl(ia,ia+11);

    forward_list<int>::iterator flbi = fl.before_begin();
    forward_list<int>::iterator fli = fl.begin();
    while(fli!=fl.end())
    {
        if((*fli)%2)
        {
            fli = fl.erase_after(flbi);
        }
        else
        {
            fli++;
            flbi++;
        }
        
    } 
    fli = fl.begin();
    while(fli!=fl.end())
    {
        cout<<*fli<<" ";
        fli++;
    }

    system("pause");
}   