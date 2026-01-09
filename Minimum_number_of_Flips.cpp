/*
Problem Link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS
 Date:  09/01/26
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        int count_pos = 0, count_neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                count_pos++;
            else
                count_neg++;
        }

        cout << abs(count_pos - count_neg) / 2 << endl;
    }

    return 0;
}
