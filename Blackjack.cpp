/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
 Date:  20/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        if (x + y <= 10)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << 21 - (x + y) << endl;
        }
    }
    return 0;
}