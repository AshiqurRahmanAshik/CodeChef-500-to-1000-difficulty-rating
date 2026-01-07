/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ
 Date:  06/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int extra_sticks = r / 30;
        int total_sticks = x + extra_sticks;
        int plates = (total_sticks + y - 1) / y;
        cout << plates << endl;
    }
    return 0;
}