/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
 Date: 03/12/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    if (even_count > odd_count)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }

    return 0;
}