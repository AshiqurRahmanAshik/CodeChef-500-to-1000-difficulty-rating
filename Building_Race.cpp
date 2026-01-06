/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE
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
        double a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a / x < b / y)
            cout << "Chef" << endl;
        else if (a / x > b / y)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}