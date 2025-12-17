/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2
 Date:  16/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n, fact = 1;
        cin >> n;
        for (int i = n; i > 1; i--)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    return 0;
}