// // CP template in cpp by Akash Shridharan

// #include <iostream>
// #include <bits/stdc++.h>
// // #include <sys/resource.h>
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// // using namespace chrono;
// // using namespace __gnu_pbds;

// // def
// //  #define AkashShridharan 1

// // Speed  ---> write "Code By AK" to take this piece of code
// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define AK cout.tie(NULL);

// // Aliases
// using ll = long long;
// using lld = long double;
// using ull = unsigned long long;

// // Constants
// const lld pi = 3.141592653589793238;
// const ll INF = LONG_LONG_MAX;
// const ll mod = 1e9 + 7;

// // TypeDEF
// typedef pair<ll, ll> pll;
// typedef vector<ll> vll;
// typedef vector<pll> vpll;
// typedef vector<string> vs;
// typedef unordered_map<ll, ll> umll;
// typedef map<ll, ll> mll;

// // Macros
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define fl(i, n) for (int i = 0; i < n; i++)
// #define rl(i, m, n) for (int i = n; i >= m; i--)
// #define py cout << "YES\n";
// #define pm cout << "-1\n"; // print minus 1
// #define pn cout << "NO\n";
// #define vr(v) v.begin(), v.end()
// #define rv(v) v.end(), v.begin()

// // Debug
// #ifdef AkashShridharan
// #define debug(x)       \
//     cerr << #x << " "; \
//     cerr << x << " ";  \
//     cerr << endl;
// #else
// #define debug(x) ;
// #endif

// // Operator overloads

// // Sorting  the elements in a pair according to the second element
// bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

// // Code
// void ak()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     vector<int> v;

//     fl(i, n)
//     {
//         if (s[i] != '0')
//         {
//             v.pb(i); // pushing indexes of all operators present in string
//         }
//     }

//     if (v.size() == 1) // if there is only one operator present
//     {
//         cout << 0 << "\n";
//     }
//     if (v.size() == 0) // if there is no operator only 0s present in string
//     {
//         cout << n << "\n";
//     }

//     int count = 0;
//     for(int i=0;i<v.size()-1;i++)
//     {
//         if (s[v[i]] != s[v[i + 1]])
//         {
//             int x = v[i + 1] - v[i] - 1; // no. of 0 between s[v[i+1]] and s[v[i]]
//             if (x % 2 != 0)
//             {
//                 count += 1;
//             }
//         }
//     }

//     cout << count << "\n";
// }

// // Main
// int main()
// {
//     Code By AK // Speed is applied here...
//         ll t;
//     cin >> t;
//     while (t--)
//     {
//         ak();
//     }
//     // ak();
//     // fl(i,t) {//Kickstart
//     //     cout<<"Case #"<<i+1<<": ";
//     //     ak();
//     //     cout<<"\n";
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
#define fin for (ll i = 0; i < n; i++)
#define J ios_base::sync_with_stdio(false);
#define N cin.tie(NULL);
#define B cout.tie(NULL);
#define tc    \
    ll T;     \
    cin >> T; \
    while (T--)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int
#define inpv                   \
    vector<ll> v;              \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    J N B
        tc
    { // referred from DCC NITA
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c = 0, k = 0, zc = 0;
        fin
        {
            if (s[i] == '+' || s[i] == '-')
            {
                k = 1;
                break;
            }
        }

        if (k == 0)
        {
            cout << n << endl;
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == '+' && s[i + 1] == '0')
            {
                for (ll j = i + 1; j < n; j++)
                {
                    if (s[j] == '+')
                    {
                        i = j - 1;
                        zc = 0;
                        break;
                    }
                    if (s[j] == '-')
                    {
                        i = j - 1;
                        if (zc % 2 != 0)
                            c++;
                        zc = 0;
                        break;
                    }
                    zc++;
                }
            }

            if (s[i] == '-' && s[i + 1] == '0')
            {
                // cout<<"sdxs";
                for (ll j = i + 1; j < n; j++)
                {
                    if (s[j] == '-')
                    {
                        i = j - 1;
                        zc = 0;
                        break;
                    }
                    if (s[j] == '+')
                    {
                        // cout<<"--=";
                        i = j - 1;
                        if (zc % 2 != 0)
                            c++;
                        zc = 0;
                        break;
                    }
                    zc++;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
