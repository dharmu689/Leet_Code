//Question - https://leetcode.com/problems/maximum-product-of-three-numbers/
class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
         
        int op1 = (nums[0] * nums[1] * nums[n - 1]);
        int op2 = (nums[n - 1] * nums[n - 2] * nums[n - 3]);

        if(op1>op2)
        return op1;

        else
        return op2;

    }
}