/*
Problem Link:
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
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == x || w == y || w == z)
            cout << "YES" << endl;
        else if (w == x + y || w == y + z || w == z + x)
            cout << "YES" << endl;
        else if (w == x + y + z)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}