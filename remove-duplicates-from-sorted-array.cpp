#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 1;
    vector<int> arr;

    arr.push_back(nums[0]);

    if (nums.size() == 1)
        return k;

    for (int i = 0; i < nums.size() - 1; i++)
        if (nums[i] != nums[i + 1])
        {
            arr.push_back(nums[i + 1]);
            k++;
        }

    for (int i = 0; i < k; i++)
        nums[i] = arr[i];

    return k;
}

int main()
{
    vector<int> nums = {0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6, 6, 7, 8};
    int k = removeDuplicates(nums);

    cout << k << endl;

    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}