#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missingInteger(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int num = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == num)
            {
                num++;
            }
        }
        return num;
    }
};

int main()
{
    Solution obj;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int result = obj.missingInteger(nums);
    cout<<result<<endl;
    return 0;

}