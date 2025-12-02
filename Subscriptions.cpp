/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
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
        int n, x;
        cin >> n >> x;
        cout << ceil(n / 6.00) * x << endl;
    }
    return 0;
}