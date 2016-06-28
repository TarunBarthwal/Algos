#include <iostream>
#include <vector>

using namespace std;

typedef int data_type;

struct item
{
        data_type value;
        data_type weight;
};

vector<data_type> knapsack(vector<data_type> itemPool, data_type limitWeight)
{
    data_type comb(vector<data_type>&, data_type, data_type);

    vector<data_type> finalKnapsack;
    data_type maxValue = 0, sumValue = 0;
    data_type sumWeight = 0;
    vector<data_type> buildKnapsack;

    comb(buildKnapsack, limitWeight, sumWeight, maxValue, sumValue);
    {

    }

}

data_type comb(vector<data_type> itemPool, data_type, position);
{
    if(position = itemPool.size()-1)
    {

    }
    data_type maxValue;
    for (int i = 0; i < itemPool.size(); i++)
    {
        maxValue =
    }
}

void comb(vector<data_type>&itemPool, vector<data_type*>&buildKnapsack,
        data_type& limitWeight, data_type& maxValue, data_type sumWeight,
        data_type sumValue, int position)
{
    if (sumWeight > limitWeight || position == itemPool.size() - 1)
        return;
    for (int i = position; i < itemPool.size(); i++)
    {
        buildKnapsack.push_back(&itemPool[i]);
        sumWeight += itemPool[i].weight;
        sumValue += itemPool[i].value;
        comb(itemPool, buildKnapsack, limitWeight, maxValue, sumWeight,
                sumValue, position + 1);
    if (maxValue>)

}
}
