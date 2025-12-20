/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
 Date:  20/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int capacity = k * m;
        cout << (n + capacity - 1) / capacity << endl;
    }
    return 0;
}
