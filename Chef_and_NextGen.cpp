/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (x * y >= a * b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}