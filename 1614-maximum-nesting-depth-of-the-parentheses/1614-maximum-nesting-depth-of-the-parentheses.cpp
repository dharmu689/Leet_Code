class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcount = 0;
        for(int i =0 ; i<s.size();i++)
        {
            if(s[i] == '(')
            {
                count++;
                maxcount = max(maxcount, count);
            }
            if(s[i] == ')')
            {
                count--;
            }
        }
        return maxcount;
        
    }
};