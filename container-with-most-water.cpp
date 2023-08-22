#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> &height)
{
    int maxArea = 0, area, i = 0, j = height.size() - 1;

    while (i < j)
    {
        if (height[i] < height[j])
        {
            area = height[i] * (j - i);
            i++;
        }

        else
        {
            area = height[j] * (j - i);
            j--;
        }

        if (area > maxArea)
            maxArea = area;
    }

    return maxArea;
}

int main()
{
    vector<int> height = {3774, 1959, 5134, 5543, 1519, 4152, 6780, 9277, 1660, 3889};
    cout << maxArea(height);
    return 0;
}