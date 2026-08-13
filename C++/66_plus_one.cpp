#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> digits(n);
    for(int i=0;i<n;i++)
    {
        cin>>digits[i];
    }
    Solution obj;
    vector<int> result = obj.plusOne(digits);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}