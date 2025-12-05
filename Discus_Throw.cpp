/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
 Date:  05/12/25
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
        cout << max({a, b, c}) << endl;
    }
    return 0;
}