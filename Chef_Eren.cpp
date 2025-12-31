/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
 Date:  01/01/26
*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int odd = (n + 1) / 2; 
        int even = n / 2;      

        cout << odd * b + even * a << endl;
    }

    return 0;
}
