#include <vector>
#include <iostream>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    vector<int> answer = {};

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
            answer.push_back(nums[i]);
    }

    nums = answer;
    return answer.size();
}

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    cout << removeElement(nums, val);
}