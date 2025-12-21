/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
 Date:  21/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p, q;
        cin >> p >> q;
        int total_point = p + q;
        if (total_point % 4 == 0 || total_point % 4 == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}