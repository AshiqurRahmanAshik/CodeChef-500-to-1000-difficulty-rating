/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST
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
        int a, b, k;
        cin >> a >> b >> k;
        int diff = abs(a - b);
        if (diff == 0)
            cout << 0 << endl;
        else
        {
            cout << (diff + k - 1) / k << endl;
        }
    }
    return 0;
}