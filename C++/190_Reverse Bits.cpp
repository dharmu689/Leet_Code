//Question - https://leetcode.com/problems/reverse-bits/
/*
1st 

class Solution {
    public:
        uint32_t reverseBits(uint32_t n) {
            int ans = 0;
            for (int i = 0; i <= 31; i++) {
                if (n & (1 << i)) {
                    ans = ans | (1 << (31 - i));
                }
            }
            return ans;
        }
    };


    2nd 

    class Solution {
        public:
            uint32_t reverseBits(uint32_t n) {
                int ans = 0;
                int index = 31;
                while (n != 0) {
                    if (n & 1) {
                        ans = ans | (1 << index);
                    }
                    index--;
                    n = n >> 1;
                }
                return ans;
            }
        };*/