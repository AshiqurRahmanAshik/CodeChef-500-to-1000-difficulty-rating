/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JASSIGNMENTS
 Date: 02/12/25
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
        if (x + 3 <= 10)
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