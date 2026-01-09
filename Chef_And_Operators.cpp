/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT
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
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << ">" << endl;
        else if (b > a)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}