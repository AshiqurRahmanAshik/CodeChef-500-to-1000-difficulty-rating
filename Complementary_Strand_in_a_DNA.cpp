/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND
 Date:  17/12/25
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
        string s;
        cin >> s;
        string ans = "";
        for (char c : s)
        {
            if (c == 'A')
                ans += 'T';
            else if (c == 'T')
                ans += 'A';
            else if (c == 'C')
                ans += 'G';
            else if (c == 'G')
                ans += 'C';
        }
        cout << ans << endl;
    }
    return 0;
}