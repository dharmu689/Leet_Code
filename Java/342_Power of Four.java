//Question - https://leetcode.com/problems/power-of-four/

import java.util.Scanner;

class Solution {
    public boolean isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        return Integer.bitCount(n) == 1 && (n - 1) % 3 == 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        Solution sol = new Solution();
        boolean result = sol.isPowerOfFour(n);
        System.out.println(n + " is a power of four: " + result);
        scanner.close();
    }
}

/*
 
 class Solution {
    public boolean isPowerOfFour(int n) {
        if(n<=0)
        {
            return false;
        }
        return Integer.bitCount(n)==1 && (n-1)%3==0;
        
    }
}*/