#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maximumLengthSubstring(string s)
    {
        int n = s.size();
        int ans = 0;
        vector<int> freq(26, 0);
        int left = 0;
        for(int right = 0; right < n; right++)
        {
            freq[s[right] - 'a']++;
            while(freq[s[right] - 'a'] > 2)
            {
                freq[s[left] - 'a']--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution obj;
    int result = obj.maximumLengthSubstring(s);
    cout<<result<<endl;
    return 0;
}