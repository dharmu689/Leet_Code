// Question - https://leetcode.com/problems/number-of-1-bits/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};
int main()
{
    int n;
    cin >> n;

    Solution obj;

    cout << obj.hammingWeight(n);
    return 0;
}
