#include <vector>
#include <iostream>

using namespace std;

long long totalCost(vector<int> &costs, int k, int candidates)
{
    long long total = 0;
    int lowestcost, lowestcostindex;

    for (int i = 0; i < k; i++)
    {
        lowestcost = costs[0];
        lowestcostindex = 0;

        for (int k = costs.size() - 1; k > costs.size() - candidates - 1; k--)
        {
            if (costs[k] < lowestcost)
            {
                lowestcost = costs[k];
                lowestcostindex = k;
            }
        }

        for (int k = candidates - 1; k > 0; k--)
        {
            if (costs[k] < lowestcost)
            {
                lowestcost = costs[k];
                lowestcostindex = k;
            }
        }

        total += lowestcost;
        costs.erase(costs.begin() + lowestcostindex);
    }

    return total;
}

int main()
{
    vector<int> costs = {17, 12, 10, 2, 7, 2, 11, 20, 8};
    int k = 8;
    int candidates = 4;
    cout << totalCost(costs, k, candidates);
    return 0;
}