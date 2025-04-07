// Question - https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // O(nlogn)
        return max((nums[0] * nums[1] * nums[nums.size() - 1]),
                   (nums[nums.size() - 1] * nums[nums.size() - 2] *
                    nums[nums.size() - 3]));
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = obj.maximumProduct(nums);
    cout << result << endl;
    return 0;
}
