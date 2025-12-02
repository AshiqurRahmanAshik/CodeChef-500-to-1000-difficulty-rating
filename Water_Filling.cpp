/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
 Date: 03/12/25
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
        if (x == 1 && y == 1)
        {
            cout << "Not now" << endl;
        }
        else if (x == 1 && z == 1)
        {
            cout << "Not now" << endl;
        }
        else if (y == 1 && z == 1)
        {
            cout << "Not now" << endl;
        }
        else
        {
            cout << "Water filling time" << endl;
        }
    }
    return 0;
}