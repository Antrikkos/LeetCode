#include <iostream>

using namespace std;

int fib(int n)
{
    int fib1 = 0, fib2 = 1, sum;

    if (n < 1)
        return 0;

    if (n == 1)
        return 1;

    for (int i = 1; i < n; i++)
    {
        sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = sum;
    }
    return sum;
}

int main()
{
    cout << fib(6);
    return 0;
}