/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS
 Date:  03/01/26
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
        int floor_chef = (x - 1) / 10 + 1;
        int floor_chefina = (y - 1) / 10 + 1;
        cout << abs(floor_chef - floor_chefina) << endl;
    }
    return 0;
}