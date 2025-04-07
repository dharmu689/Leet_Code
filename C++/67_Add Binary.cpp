// Question - https://leetcode.com/problems/add-binary/description/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        string result = "";

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            result.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
int main()
{
    Solution obj;
    string a, b;
    cin >> a >> b;

    string result = obj.addBinary(a, b);
    cout << result << endl;
}

/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        string result = "";

        // Traverse both strings from the last character
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            // If there are still digits in 'a', add them
            if (i >= 0)
                sum += a[i--] - '0';

            // If there are still digits in 'b', add them
            if (j >= 0)
                sum += b[j--] - '0';

            // Append current bit to result (0 or 1)
            result.push_back((sum % 2) + '0');

            // Compute carry for next iteration
            carry = sum / 2;
        }

        // Reverse result since we processed from right to left
        reverse(result.begin(), result.end());
        return result;
    }
};

// Driver Code
int main() {
    Solution obj;
    string a, b;

    cout << "Enter first binary string: ";
    cin >> a;

    cout << "Enter second binary string: ";
    cin >> b;

    string result = obj.addBinary(a, b);
    cout << "Binary Sum: " << result << endl;

    return 0;
}
*/