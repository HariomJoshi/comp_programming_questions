#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n, k, x;
        cin >> n >> k >> x;
        bool bigger = false;
        int sum = 0;
        if (k>n || k-x >1) cout << -1 << endl;
        else{
            for (int j = 0; j <= n; j++)
            {
                if (j == k)
                    continue;
                if (j >= k){
                    if (k == x){
                        sum += x - 1;
                    }else{
                        sum += x;
                    }
                }else{
                    sum += j;
                }
            }
            cout << sum << endl;

        }
            
    }
}