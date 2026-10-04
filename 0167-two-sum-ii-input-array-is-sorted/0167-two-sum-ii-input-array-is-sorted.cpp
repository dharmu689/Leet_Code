class Solution {
public:
    vector<int> twoSum(vector<int>& num, int T) {
        int left = 0;
        int right = num.size() - 1;

        while (left < right) {
            int sum = num[left] + num[right];

            if (sum == T) {
                return {left + 1, right + 1};
            } else if (sum < T) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};