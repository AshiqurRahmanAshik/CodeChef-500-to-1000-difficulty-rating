/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
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
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        float Alice = a / x;
        float Bob = b / y;
        if (Alice > Bob)
            cout << "Alice" << endl;
        else if (Alice < Bob)
            cout << "Bob" << endl;
        else
            cout << "Equal" << endl;
    }
    return 0;
}