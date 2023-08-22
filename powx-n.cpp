#include <iostream>

using namespace std;

double myPow(double x, int n)
{
    if (n == 0 || x == 1)
        return 1;
    if ((x == -1) && (n % 2 == 0))
        return 1;
    if ((x == -1) && (n % 2 != 0))
        return -1;
    double result = 1;
    bool isNegative = n < 0;
    long long exp = isNegative ? -(long long)n : (long long)n;

    while (exp != 0)
    {
        if (exp % 2 != 0)
            result *= x;

        x *= x;
        exp = exp / 2;
    }

    return isNegative ? 1.0 / result : result;
}

int main()
{
    cout << myPow(2, -2147483648);
    return 0;
}