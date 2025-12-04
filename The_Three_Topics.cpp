/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS
 Date: 04/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (a == x || b == x || c == x)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}