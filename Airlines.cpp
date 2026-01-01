/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2
 Date:  02/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, n;
        cin >> x >> n;
        int passenger = n - (x * 100);
        if (passenger < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (passenger + 99) / 100 << endl;
        }
    }
    return 0;
}