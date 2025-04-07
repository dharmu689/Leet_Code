// Question - https://leetcode.com/problems/minimum-bit-flips-to-make-the-binary-string-alternating/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int diff = start ^ goal;
        int count = 0;
        while (diff != 0)
        {
            if (diff & 1)
            {
                count++;
            }
            diff = diff >> 1;
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int start, goal;
    cin >> start >> goal;
    cout << obj.minBitFlips(start, goal) << endl;
}