/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT
 Date:  09/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b, count = 0;
        cin >> n >> a >> b;
        while (n != 1)
        {
            count++;
            n /= 2;
        }
        cout << (count * a) + (count - 1) * b << endl;
    }
    return 0;
}