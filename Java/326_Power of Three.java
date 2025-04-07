//Question - https://leetcode.com/problems/power-of-three/description/

class Solution {
    public boolean isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        return Math.pow(3, 19) % n == 0;

    }
}