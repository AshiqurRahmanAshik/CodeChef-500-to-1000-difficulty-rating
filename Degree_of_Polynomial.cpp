/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY
 Date:  10/01/26
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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Find degree
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
