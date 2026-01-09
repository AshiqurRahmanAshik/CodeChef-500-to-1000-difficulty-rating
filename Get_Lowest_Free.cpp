/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE
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
        int a, b, c;
        cin >> a >> b >> c;
        int minimum = min({a, b, c});
        cout << a + b + c - minimum << endl;
    }
    return 0;
}