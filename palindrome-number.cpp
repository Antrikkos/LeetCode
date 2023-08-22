#include <iostream>

using namespace std;

bool isPalindrome(int x)
{
    string num = to_string(x);
    for (int i = 0; i < num.size() / 2; i++)
    {
        if (num[i] != num[num.size() - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int a = 123455321;
    cout << isPalindrome(a);
    return 0;
}