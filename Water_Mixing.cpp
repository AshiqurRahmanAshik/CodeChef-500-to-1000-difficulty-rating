/* Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
   Date: 21/12/25
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int diff = abs(a - b);

        if (diff == 0)
        {

            cout << "YES" << endl;
        }
        else if (a > b && diff <= y)
        {

            cout << "YES" << endl;
        }
        else if (b > a && diff <= x)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}