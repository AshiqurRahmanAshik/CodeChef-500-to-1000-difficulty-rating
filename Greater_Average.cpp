/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
 Date:   02/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        float a, b, c;
        cin >> a >> b >> c;
        if ((a + b) / 2 > c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}