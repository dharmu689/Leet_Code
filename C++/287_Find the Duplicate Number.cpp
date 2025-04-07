// Question - https://leetcode.com/problems/find-the-duplicate-number/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int i = 0;
        int n = nums.size();
        while (i < n)
        {
            int corr = nums[i] - 1;
            if (nums[i] != nums[corr])
            {
                swap(nums[i], nums[corr]);
            }
            else
            {
                i++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != j + 1)
            {
                return nums[j];
            }
        }
        return -1;
    }
};
int main()
{
    Solution obj1;
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << obj1.findDuplicate(nums) << endl;
    return 0;
}