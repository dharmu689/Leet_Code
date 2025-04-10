// Question - https://leetcode.com/problems/palindrome-number/

#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false; // Negative or ends with 0 (but not 0 itself)
    }

    int reversed = 0;
    while (x > reversed)
    {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }

    // Check for both even and odd digit lengths
    return (x == reversed) || (x == reversed / 10);
}

int main()
{
    int x;
    cin >> x;

    if (isPalindrome(x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
