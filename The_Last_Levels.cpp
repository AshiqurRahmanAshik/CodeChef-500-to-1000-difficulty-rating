/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
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
        int x, y, z;
        cin >> x >> y >> z;
        if (x <= 3)
        {
            cout << x * y << endl;
        }
        else if (x % 3 != 0)
        {
            cout << (x * y) + (x / 3) * z << endl;
        }
        else
        {
            cout << (x * y) + (x / 3) * z - z << endl;
        }
    }
    return 0;
}