/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF
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
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int age;
            cin >> age;

            if (age >= 10 && age <= 60)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
