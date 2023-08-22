#include <iostream>
#include <climits>

using namespace std;

int myAtoi(string s)
{
    int i = 0;
    bool isNegative = false;
    double num = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-')
    {
        isNegative = true;
        i++;
    }
    else if (s[i] == '+')
        i++;

    while (i < s.size() && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    if (isNegative)
        num = -num;

    if (num > INT_MAX)
        num = INT_MAX;
    else if (num < INT_MIN)
        num = INT_MIN;

    return int(num);
}

int main()
{
    cout << myAtoi("-91283472332");
    return 0;
}