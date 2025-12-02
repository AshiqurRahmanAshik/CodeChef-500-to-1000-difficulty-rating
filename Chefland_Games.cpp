/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
    return 0;
}