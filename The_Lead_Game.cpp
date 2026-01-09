/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG
 Date:  10/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    int sum1 = 0, sum2 = 0;
    int maxLead = 0;
    int winner = 0;

    while (tc--)
    {
        int x, y;
        cin >> x >> y;

        sum1 += x;
        sum2 += y;

        int lead = abs(sum1 - sum2);

        if (lead > maxLead)
        {
            maxLead = lead;
            winner = (sum1 > sum2) ? 1 : 2;
        }
    }

    cout << winner << " " << maxLead << endl;
    return 0;
}
