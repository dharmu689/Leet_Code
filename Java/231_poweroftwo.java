class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        return Integer.bitCount(n) == 1; // Correct method name
    }

    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] testCases = {1, 2, 4, 8, 16, 3, 5, 10};

        for (int n : testCases) {
            System.out.println(n + " is power of two: " + obj.isPowerOfTwo(n));
        }
    }
}



/*class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
       return Integer.bitCount(n) == 1;
        

    }
}*/