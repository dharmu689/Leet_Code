class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right =0;
        int index = -1;
        int total = 0;
        for(int x : nums)
        {
            total += x;
        }
        for(int i=0;i<nums.size();i++)
        {

            right = total - left - nums[i];

            if(right == left)
            {
                index = i;
                break;
            }
            left += nums[i];
        }
        return index;
    }
};