/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
 Date:  10/01/26
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

        int start = 0, ltime = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            if (s == "START38")
                start++;
            else
                ltime++;
        }

        cout << start << " " << ltime << endl;
    }
    return 0;
}
