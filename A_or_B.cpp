/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB
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
        int x, y;
        cin >> x >> y;
        int a_then_b = 1500 - (x * 2) - (x + y) * 4;
        int b_then_a = 1500 - (x + y) * 2 - y * 4;

        cout << max(a_then_b, b_then_a) << endl;
    }
    return 0;
}