#include <bits/stdc++.h>
using namespace std;

#define ll long long

// x^y%p
ll power(ll x, ll y, ll p)
{
    ll res = 1; // Initialize result

    // Update x if it is more than or
    // equal to p
    x = x % p;

    while (y > 0)
    {

        // If y is odd, multiply x
        // with the result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        vector<int> pref(n), suff(n);
        int mx = 0;

        // max vlaue in range [0,i]
        for (int i = 0; i < n; ++i)
        {
            mx = max(mx, A[i]);
            pref[i] = mx;
        }

        // min value in range [i,n-1]
        int mn = INT_MAX;
        for (int i = n - 1; i >= 0; --i)
        {
            mn = min(mn, A[i]);
            suff[i] = mn;
        }

        int d = 0;
        for (int i = 0; i < n; ++i)
        {
            if (pref[i] == A[i] && suff[i] == A[i])
            {
                d++;
            }
        }
        long long mod = 998244353;
        long long ans = power(2, d, mod);

        // when d == n , answer is 2^n - 1
        if (d == n)
            ans--;
        cout << ans << "\n";
    }
}