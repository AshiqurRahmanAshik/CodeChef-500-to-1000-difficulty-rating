/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
 Date: 05/12/25
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
        if (x * 10 > y * 5)
        {
            cout << "FIRST" << endl;
        }
        else if (x * 10 < y * 5)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}