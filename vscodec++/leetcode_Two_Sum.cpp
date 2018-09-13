#include<iostream>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int> &nums,int target);
int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = TwoSum(nums,target);
    vector<int>::iterator vi = res.begin();
    while(vi!=res.end())
    {
        cout<<*vi<<" ";
        vi++;
    } 
    system("pause");
}

vector<int> TwoSum(vector<int> &nums,int target)
{
    vector<int> res;
    vector<int>::iterator v1b = nums.begin();
    vector<int>::iterator v2b = nums.begin();
    while(v1b!=nums.end())
    {
        while(v2b!=nums.end())
        {
            if(((*v1b)+(*v2b))==target&&v1b!=v2b)
            {
                res.push_back(v1b-nums.begin());
                res.push_back(v2b-nums.begin());
                break;
            }
            v2b++;
        }
        if(res.size()==2) break;
        v1b++;
        v2b=nums.begin();
    }
    return res;
}