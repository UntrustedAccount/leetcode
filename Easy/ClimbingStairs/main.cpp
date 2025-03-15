#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n)
{
    vector<int> dp; // dp[n] gives the amount of ways to climb n stairs
    dp.assign(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    cout << climbStairs(3);
}