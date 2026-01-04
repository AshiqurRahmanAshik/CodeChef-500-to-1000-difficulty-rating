/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017
 Date:  04/01/26
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
        cout << a + b + c - max({a, b, c}) - min({a, b, c}) << endl;
    }
    return 0;
}
