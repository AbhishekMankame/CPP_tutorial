#include <bits/stdc++.h>
using namespace std;

// Speed up
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

// Typedefs
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// Macros
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second

// Debug (disable before submission)
#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << x << '\n';
#else
    #define dbg(x)
#endif

// Constants
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

// Modular arithmetic helpers (if needed)
ll mod_add(ll a, ll b, ll m = MOD) {
    return ((a % m + b % m) % m + m) % m;
}
ll mod_sub(ll a, ll b, ll m = MOD) {
    return ((a % m - b % m) % m + m) % m;
}
ll mod_mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
}
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = MOD) {
    return mod_pow(a, m - 2, m);  // Only works when m is prime
}

// Main
int main() {
    fast_io;

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) {
        // Solve each test case here
    }

    return 0;
}
