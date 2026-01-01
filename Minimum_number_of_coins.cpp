/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCOINS
 Date:  02/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        if (x % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int coins = x / 10;
            if (x % 10 == 5)
                coins++;
            cout << coins << endl;
        }
    }
    return 0;
}