/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int result = arr[i] + k;
            if (result % 7 == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}