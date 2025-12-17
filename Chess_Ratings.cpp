/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
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
        int x, y;
        cin >> x >> y;
        cout << ((y - x) + 7) / 8 << endl;
    }
    return 0;
}