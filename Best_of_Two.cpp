/*
Problem Link: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2
 Date:  09/01/26
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A[3], B[3];

        // Input Alice's rolls
        for (int i = 0; i < 3; i++)
            cin >> A[i];
        // Input Bob's rolls
        for (int i = 0; i < 3; i++)
            cin >> B[i];

        // Sort rolls to easily pick the top 2
        sort(A, A + 3);
        sort(B, B + 3);

        int aliceScore = A[1] + A[2]; // sum of top 2 rolls
        int bobScore = B[1] + B[2];   // sum of top 2 rolls

        if (aliceScore > bobScore)
            cout << "Alice" << endl;
        else if (aliceScore < bobScore)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }

    return 0;
}
