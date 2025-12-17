/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
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
        int x, y, z;
        cin >> x >> y >> z;

        int travel_time = y / x;
        int shoot_time = max(0, z - travel_time);

        cout << shoot_time << endl;
    }
    return 0;
}
