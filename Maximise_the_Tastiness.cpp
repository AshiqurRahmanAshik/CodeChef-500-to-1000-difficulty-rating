/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
 Date:  05/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int t1 = a + c;
        int t2 = a + d;
        int t3 = b + c;
        int t4 = b + d;

        int ans = t1;
        if (t2 > ans)
            ans = t2;
        if (t3 > ans)
            ans = t3;
        if (t4 > ans)
            ans = t4;

        cout << ans << endl;
    }
    return 0;
}