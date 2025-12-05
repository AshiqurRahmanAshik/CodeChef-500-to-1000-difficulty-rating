/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY
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
        int x, a, b;
        cin >> x >> a >> b;
        if (a + b * 2 >= x)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }
    return 0;
}