// Question - https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int sum = 0;
        int maxi = 0;
        int n = cardPoints.size();
        for (int i = 0; i < k; i++)
        {
            sum += cardPoints[i];
        }
        maxi = sum;
        for (int i = 0; i < k; i++)
        {
            sum -= cardPoints[k - i - 1];
            sum += cardPoints[n - 1 - i];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};