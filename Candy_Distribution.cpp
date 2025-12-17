/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
 Date:  17/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        if (n % m == 0 && (n / m) % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
