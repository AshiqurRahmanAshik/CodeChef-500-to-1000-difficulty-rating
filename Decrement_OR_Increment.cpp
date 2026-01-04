/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC
 Date:  04/01/26
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4==0)
    {
        cout << ++n << endl;
    }
    else
    {
        cout << --n << endl;
    }
    return 0;
}