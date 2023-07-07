// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;

//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }

//     int isPalindrome = 1;
//     int middle = N / 2;

//     for (int i = 0; i < middle; i++)
//     {
//         int j = N - i - 1;

//         if (A[i] != A[j])
//         {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int isPalindrome = 1;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {

        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}