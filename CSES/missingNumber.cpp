#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == -1)
        {
            cout << i << endl;
        }
    }
    return 0;
}