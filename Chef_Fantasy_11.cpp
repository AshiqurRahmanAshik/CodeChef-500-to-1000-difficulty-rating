/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FIZZBUZZ2303
 Date:  06/01/26
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
        cout << n * (n - 1) << endl;
    }
    return 0;
}