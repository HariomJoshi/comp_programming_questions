#include <stdio.h>
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    char prev = str[0];
    long long len = 1, ans = INT_MIN;
    for (long long i = 1; i < str.size(); i++)
    {
        if (prev == str[i])
        {
            len++;
        }
        else
        {

            len = 1;
            prev = str[i];
        }
        ans = (len > ans) ? len : ans;
    }
    cout << ans << endl;
    return 0;
}