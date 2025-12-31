/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
 Date:  01/01/26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        int free = s - (x + y);

        if (free >= z)
            cout << 0 << endl;
        else if (free + x >= z || free + y >= z)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}
