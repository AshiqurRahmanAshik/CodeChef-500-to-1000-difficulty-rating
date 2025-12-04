/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
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
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max(a, c);
        if (maxi <= b)
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