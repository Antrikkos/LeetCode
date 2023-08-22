#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string prefix = "";
    bool common = true;
    int i = 0;

    while (i < strs[0].size() && common)
    {
        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                common = false;
                break;
            }
        }
        if (common)
            prefix += strs[0][i];
        i++;
    }

    return prefix;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}