//Question - https://leetcode.com/problems/number-of-good-pairs/

class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int n=nums.size();
            int count=0;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1 ;j<n;j++)
                {
                    if(nums[i]==nums[j])
                    {
                        count++;
                    }
                }
            }
            return count;
            
        }
    };