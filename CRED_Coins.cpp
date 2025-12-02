/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
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
        int x, y;
        cin >> x >> y;
        cout << (x * y) / 100 << endl;
    }
    return 0;
}