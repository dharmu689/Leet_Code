//Question - https://leetcode.com/problems/reverse-bits/
/* 
public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int ans = 0;
        for (int i = 0; i <= 31; i++) {
            if ((n & (1 << i)) != 0) {
                ans = ans | (1 << (31 - i));
            }
        }
        return ans;

    }
}*/