/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
 Date: 05/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, count = 0;
        cin >> n >> x;
        while (n--)
        {
            int a;
            cin >> a;
            if (a >= x)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}