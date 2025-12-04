/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT
 Date: 12/05/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        if (x - 1 < 100 - x)
        {
            cout << "LEFT" << endl;
        }
        else
        {
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}