// CP template in cpp by Akash Shridharan

#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

// def
//  #define AkashShridharan 1

// Speed  ---> write "Code By AK" to take this piece of code
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define AK cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// Constants
const lld pi = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
// const ll mod = 1e9 + 7;
const int MOD = 998244353;

// TypeDEF
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n"; // print minus 1
#define pn cout << "NO\n";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

// Debug
#ifdef AkashShridharan
#define debug(x)       \
    cerr << #x << " "; \
    cerr << x << " ";  \
    cerr << endl;
#else
#define debug(x) ;
#endif

// Operator overloads

// Sorting  the elements in a pair according to the second element
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

// Code

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_cnt = 0;

    i = left, j = mid, k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_cnt = inv_cnt + (mid - 1);
        }
    }
    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return inv_cnt;
}

int ms(int arr[], int temp[], int left, int right)
{
    int mid, inv_cnt = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        inv_cnt += ms(arr, temp, left, mid);
        inv_cnt += ms(arr, temp, mid + 1, right);

        inv_cnt += merge(arr, temp, left, mid + 1, right);
    }
    return inv_cnt;
}

void ak()
{
    ll x;
    cin >> x;

    ll lim = 1e6;

    if (x == 1)
        cout << -1 << "\n";
    else
    {
        if (x <= lim)
            cout << 1 << " " << 1 << " " << x - 1 << "\n";
        else
        {
            ll a = lim, b = x / a, c = x % a;
            if (c == 0)
                cout << a << " " << b - 1 << " " << lim << "\n";
            else
                cout << a << " " << b << " " << c << "\n";
        }
    }
}

// Main
int main()
{
    Code By AK // Speed is applied here...
        ll t;
    cin >> t;
    while (t--)
    {
        // int x;
        // cin >> x;
        ak();
    }
    // ak();
    // fl(i,t) {//Kickstart
    //     cout<<"Case #"<<i+1<<": ";
    //     ak();
    //     cout<<"\n";
    return 0;
}
