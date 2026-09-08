class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = 0;
        int first = gain[0];
        for (int i = 1; i < n; i++) {
            int maxi = gain[i - 1] + gain[i];
            gain[i] = maxi;
            ans = max(ans, maxi);
        }
        ans = max(ans, first);
        return ans;
    }
};