#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
    }

    sort(S.begin(), S.end());

    cout << S << endl;
    return 0;
}