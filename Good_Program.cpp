/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE
 Date: 05/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Not Good" << endl;
        }
    }
    return 0;
}