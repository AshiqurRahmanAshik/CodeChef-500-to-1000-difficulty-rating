/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT
 Date:  09/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else
        {

            cout << (n - 2) / 7 + 1 << endl;
        }
    }
    return 0;
}