/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH
 Date:  09/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    int remain_runs = r - c;
    if ((20 - o) * 6 * 6 > remain_runs)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}