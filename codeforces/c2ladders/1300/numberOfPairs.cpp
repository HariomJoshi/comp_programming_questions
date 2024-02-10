#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> vect(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> vect[i];
        }
        sort(vect.begin(), vect.end());
        ll ans = 0;
        for (int i = 0; i <n; i++) 
        {
            int high = upper_bound(vect.begin(), vect.end(), r-vect[i]) -vect.begin(); 
            int low = lower_bound(vect.begin(), vect.end(), l-vect[i]) - vect.begin();
            cout<< "high "<< high<< " low "<< low<< endl;
            // ans += upper_bound(vect.begin(), vect.end(), r-vect[i]) -vect.begin();
            // ans -= lower_bound(vect.begin(), vect.end(), l-vect[i]) - vect.begin();
            if (l <= 2*vect[i] && 2*vect[i] <= r) ans--;
        }
        cout << ans/2 << '\n';
    }
    return 0;
}