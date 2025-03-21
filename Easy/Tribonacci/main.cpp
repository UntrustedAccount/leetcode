#include <iostream>
#include <vector>
using namespace std;

int tribonacci(int n)
{
    vector<int> dp;
    dp.assign(n + 2, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    if (n == 0 || n == 1 || n == 2)
    {
        return dp[n];
    }
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}