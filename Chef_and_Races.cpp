/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
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
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        int count = 0;

        if (a != x && a != y)
            count++;

        if (b != x && b != y)
            count++;

        cout << count << endl;
    }
    return 0;
}
