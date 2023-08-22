#include <iostream>
#include <vector>

using namespace std;

vector<string> letterCombinations(string digits)
{
    vector<string> answer, temp, letters;

    for (int i = 0; i < digits.size(); i++)
    {
        temp = answer;
        answer.clear();
        letters.clear();

        switch (digits[i])
        {
        case '2':
            letters.insert(letters.end(), {"a", "b", "c"});
            break;
        case '3':
            letters.insert(letters.end(), {"d", "e", "f"});
            break;
        case '4':
            letters.insert(letters.end(), {"g", "h", "i"});
            break;
        case '5':
            letters.insert(letters.end(), {"j", "k", "l"});
            break;
        case '6':
            letters.insert(letters.end(), {"m", "n", "o"});
            break;
        case '7':
            letters.insert(letters.end(), {"p", "q", "r", "s"});
            break;
        case '8':
            letters.insert(letters.end(), {"t", "u", "v"});
            break;
        case '9':
            letters.insert(letters.end(), {"w", "x", "y", "z"});
            break;
        default:
            letters.clear();
            break;
        }

        if (temp.empty())
        {
            for (int j = 0; j < letters.size(); j++)
                answer.push_back(letters[j]);
        }
        else
        {
            for (int k = 0; k < temp.size(); k++)
            {
                for (int j = 0; j < letters.size(); j++)
                {
                    answer.push_back(temp[k] + letters[j]);
                }
            }
        }
    }

    return answer;
}

int main()
{
    string digits = "23";
    vector<string> comb = letterCombinations(digits);

    for (int i = 0; i < comb.size(); i++)
        cout << comb[i] << " ";
}