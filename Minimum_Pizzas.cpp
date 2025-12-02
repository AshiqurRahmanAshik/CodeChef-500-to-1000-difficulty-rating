/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
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
        int n, x;
        cin >> n >> x;
        cout << ceil((n * x) / 4.0) << endl;
    }
    return 0;
}