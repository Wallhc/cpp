#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    Person() = default;
    Person(const string n,const string ad): name(n),address(ad){}
    string name;
    string address;
    private:
    string GetName() const { return name;}
    string GetAddress() const {return address;}
    void PrintName() const { cout<<name<<endl; }
    void PrintAddress() const { cout<<address<<endl; }
};

int main{
    Person p = new Person();

}