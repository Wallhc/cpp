#include<iostream>
#include<map>
#include<set>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main()
{
    map<string,size_t> word_count;
    string word;
    while(cin>>word)
    {
        string::iterator it = word.begin();
        while(it!=word.end())
        {
            *it = tolower(*it);
            it++;
        }
        word.erase(remove_if(word.begin(),word.end(),ispunct),word.end());
        ++word_count[word];
    }
    for(const auto &w : word_count)
    { 
        cout<<w.first<<" occurs "<<w.second<<" times "<<endl;
    }
    system("pause");
}