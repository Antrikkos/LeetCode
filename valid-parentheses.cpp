#include <iostream>
#include <stack>
#define brkopen2close(c) ((c == '(') ? ')' : (c == '[') ? ']' \
                                         : (c == '{')   ? '}' \
                                                        : '-')

using namespace std;

bool isValid(string s)
{
    stack<char> brackets;

    for (auto c : s)
    {
        if (c == '(' || c == '[' || c == '{')
            brackets.push(c);
        else
        {
            if (brackets.empty())
                return false;

            if (brkopen2close(brackets.top()) != c)
                return false;

            brackets.pop();
        }
    }

    if (brackets.empty())
        return true;
    else
        return false;
}

int main()
{
    string s = "({}[(])])";
    cout << isValid(s);
    return 0;
}