/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
 Date:  17/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int bottles = min(n, k / x);
        cout << bottles << endl;
    }
    return 0;
}
