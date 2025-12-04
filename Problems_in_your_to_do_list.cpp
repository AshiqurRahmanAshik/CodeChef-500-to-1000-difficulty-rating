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
        int count = 0; 
        while (x--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a >= 1000)
                count++;
            if (b >= 1000)
                count++;
            if (c >= 1000)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}
