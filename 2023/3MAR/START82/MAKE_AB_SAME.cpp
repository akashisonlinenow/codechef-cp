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
const ll mod = 1e9 + 7;

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
void ak()
{
    ll n;
    cin >> n;

    int a[n];
    fl(i, n)
    {
        cin >> a[i];
    }

    int b[n];
    fl(i, n)
    {
        cin >> b[i];
    }

    if (a[0] != b[0])
    {
        cout << "NO"
             << "\n";
        return;
    }
    if (a[n - 1] != b[n - 1])
    {
        cout << "NO"
             << "\n";
        return;
    }

    int arr = 0, brr = 0;
    fl(i, n)
    {
        if (a[i] == 0)
        {
            arr++;
        }
        else
        {
            brr++;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] != b[i] && a[i] == 0 && brr == 0)
        {
            cout << "NO"
                 << "\n";
            return;
        }
        if (a[i] != b[i] && a[i] == 1)
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";

    return;

    // int flag = 1;
    // for (int j = 1; j < n - 1; j++)
    // {
    //     if (a[j] == 1 || a[j - 1] == 1 || a[j + 1] == 1)
    //     {
    //         if (b[j] == 1)
    //         {
    //             flag = 1;
    //         }
    //         if (b[j] == 0)
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     // else if (a[j] == 0 || a[j - 1] == 0 || a[j + 1] == 0)
    //     // {
    //     //     if (b[j] == 1)
    //     //     {
    //     //         flag == 1;
    //     //         break;
    //     //     }
    //     //     if (b[j] == 0)
    //     //     {
    //     //         flag = 0;
    //     //         continue;
    //     //     }
    //     // }
    // }

    // if (n == 3)
    // {
    //     int j = 1;
    //     if (a[j] == 0 && a[j - 1] == 0 && a[j + 1] == 0)
    //     {
    //         if (b[j] == 1)
    //         {
    //             flag = 0;
    //         }
    //         if (b[j] == 0)
    //         {
    //             flag = 1;
    //         }
    //     }
    // }

    // if (flag == 0)
    // {
    //     cout << "NO"
    //          << "\n";
    // }
    // if (flag == 1)
    // {
    //     cout << "YES"
    //          << "\n";
    // }
}

// Main
int main()
{
    Code By AK // Speed is applied here...
        ll t;
    cin >> t;
    while (t--)
    {
        ak();
    }
    // ak();
    // fl(i,t) {//Kickstart
    //     cout<<"Case #"<<i+1<<": ";
    //     ak();
    //     cout<<"\n";
    return 0;
}
