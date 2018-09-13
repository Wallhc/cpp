#include<iostream>
#include<map>
#include<set>
#include<string>

using namespace std;

int main()
{
    map<string,size_t> word_count;
    string word;
    while(cin>>word)
        ++word_count[word];
    for(const auto &w : word_count)
    { 
        cout<<w.first<<" occurs "<<w.second<<" times "<<endl;
    }
    system("pause");
}