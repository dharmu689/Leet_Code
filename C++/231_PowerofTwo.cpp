// Question - https://leetcode.com/problems/power-of-two/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        while (n > 1)
        {
            if (n % 2 != 0)
            {
                return false;
            }
            else
            {
                n /= 2;
            }
        }
        return true;
    }
};
int main()
{
    int t;
    cin >> t;
    Solution obj;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (obj.isPowerOfTwo(n) ? "true" : "false") << endl;
    }

    return 0;
}

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        while (n > 1) {
            if (n % 2 != 0) {
                return false;
            } else {
                n /= 2;
            }

        }
         return true;
    }
};
*/