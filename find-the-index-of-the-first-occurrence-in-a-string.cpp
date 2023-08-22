#include <iostream>

using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.length() > haystack.length())
        return -1;

    bool match;
    for (int i = 0; i <= haystack.length() - needle.length(); i++)
    {
        match = true;
        for (int j = 0; j < needle.length(); j++)
        {
            if (haystack[i + j] != needle[j])
                match = false;
        }
        if (match)
            return i;
    }

    return -1;
}

int main()
{
    string haystack = "sadbutsad", needle = "sad";
    cout << strStr(haystack, needle);
    return 0;
}