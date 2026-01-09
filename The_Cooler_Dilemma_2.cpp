/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2
 Date:  10/01/26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long X, Y;
        cin >> X >> Y;

        cout << (Y - 1) / X << endl;
    }
    return 0;
}
