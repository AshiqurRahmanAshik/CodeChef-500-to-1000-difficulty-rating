/*
Problem Link:
 Date:  05/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, p;
        cin >> n >> x >> p;
        int mark = x * 3 - (n - x);
        if (mark >= p)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
    return 0;
}