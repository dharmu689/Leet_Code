// Question - https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int i = 0;
        int n = nums.size();
        while (i < n)
        {
            if (nums[i] < n && nums[i] != nums[nums[i]])
            {
                swap(nums[i], nums[nums[i]]);
            }
            else
            {
                i++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != j)
            {
                return j;
            }
        }
        return n;
    }
};

int main()
{
    vector<int> nums = {3, 0, 1};
    Solution obj;
    cout << obj.missingNumber(nums);
    return 0;
}