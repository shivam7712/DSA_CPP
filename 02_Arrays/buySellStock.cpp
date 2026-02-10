#include <iostream>
using namespace std;

int main()
{
    int stock[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(stock) / sizeof(int);

    int bestBuy[6];
    bestBuy[0] = INT_MAX;

    for(int i=1; i<n; i++)
    {
        bestBuy[i] = min(bestBuy[i-1], stock[i-1]);
    }

    int maxProfit = 0;

    for(int i=0; i<n; i++)
    {
        int currentProfit = stock[i] - bestBuy[i];
        maxProfit = max(currentProfit, maxProfit);
    }

    cout << maxProfit << endl;


    return 0;
}

// stockBuySell
// TC, O(n+n) =  O(2n)
// ignore constant TC: O(n)