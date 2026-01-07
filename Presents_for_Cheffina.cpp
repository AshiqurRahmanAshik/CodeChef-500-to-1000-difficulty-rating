/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS
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
        long long int n;
        cin >> n;
        cout << n - (n / 5) << endl;
    }
    return 0;
}