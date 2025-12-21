/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
 Date:  21/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x = abs(x1 - x2);
        int y = abs(y1 - y2);

        cout << max(x, y) << endl;
    }
    return 0;
}