/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01
 Date:  10/01/26
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        if (isPrime(n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
