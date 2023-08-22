#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> answer;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }
    answer.push_back(0);
    return answer;
}

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    vector<int> answer = twoSum(nums, 6);
    for (int x : answer)
        cout << x << " ";
}