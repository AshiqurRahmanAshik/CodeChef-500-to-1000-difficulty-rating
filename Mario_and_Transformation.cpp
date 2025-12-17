/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
 Date:  17/12/25
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

        if (x % 3 == 0)
        {
            cout << "NORMAL" << endl;
        }
        else if (x % 3 == 1)
        {
            cout << "HUGE" << endl;
        }
        else
        {
            cout << "SMALL" << endl;
        }
    }
    return 0;
}