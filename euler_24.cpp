// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define inf 1e18
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define no cout << "no" << endl
#define ll long long int
#define int long long
#define ld long double
#define mp make_pair
#define loop(a, b, i) for (int i = a; i < b; i++)
#define loop1(a, b, i) for (int i = a; i > b; i--)
#define For(i, n) loop(0, n, i)
#define Fori(i, n) loop1(n, -1, i)
#define w(t) \
int t;\
cin >> t;\
while (t--)
#define mod 1000000007
#define cbn cout << endl;
#define len(a) a.size()
#define pb push_back
#define vi vector<int>
#define vit vector<int>::iterator
#define viit vector<int>::iterator
#define pii pair<int, int>
#define PI 3.1415926535897932384626
#define vll vector<int>
#define vvll vector<vll>
#define fast
#define dsort(a) sort(a, a + n, greater<int>())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(a) (int)a.size()
#define vpi vector<pair<int, int>> // make_pair(x,y);
#define ma map<int, int>
#define ss second
#define ff first
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
//vector<vector<int>> vec( n , vector<int> (m, 0));
inline void read(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
inline void read(vector<int> &a)
{
    for (auto &x : a)
        cin >> x;
}
inline int  ceil  (int a, int b){int ans = a / b; if ((b * ans) != a) ans += (a < 0) ^ (b > 0); return ans;}
inline int  floor (int a, int b){int ans = a / b; if ((b * ans) != a) ans -= (a > 0) ^ (b > 0); return ans;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


vector<int> factors(int n)
{
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 1)
        v.push_back(n);
    return v;
}
int binary_expo(int base, int exponent)
{
    int result = 1;
    base %= mod;
    while (exponent)
    {
        if (exponent % 2)
            result = (result * 1LL * base) % mod;
        base = (base * 1LL * base) % mod;
        exponent /= 2;
    }
    return result;
}
// void sieve_of_eratosthenes(int n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= n; p++)
//         if (prime[p] == true)
//             v.push_back(p);
// }
template <class T>
void print(T x)
{
    cerr << x;
}
template <class T, class V>
void print(pair<T, V> x)
{
    print(x.ff);
    cerr << ':';
    print(x.ss);
}
template <class T>
void print(vector<T> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T>
void print(set<T> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T>
void print(set<T, greater<T>> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T>
void print(multiset<T> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T>
void print(multiset<T, greater<T>> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T>
void print(unordered_set<T> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T, class V>
void print(vector<pair<T, V>> &a)
{
    cerr << '[' << ' ';
    for (auto x : a)
    {
        print(x.ff);
        cerr << ':';
        print(x.ss);
        cerr << ' ';
    }
    cerr << ']';
}
template <class T, class V>
void print(map<T, V> &a)
{
    cerr << "[ ";
    for (auto i : a)
    {
        print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void print(unordered_map<T, V> &a)
{
    cerr << "[ ";
    for (auto i : a)
    {
        print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void print(vector<vector<T>> &a)
{
    cerr << "[ ";
    for (auto i : a)
    {
        print(i);
        cerr << " ";
    }
    cerr << "]";
}
void local()
{
#define debug(x)        \
    cerr << #x << "  "; \
    print(x);
    cerr << '\n';
}
/****************************************YAHA HAI ASLI MAAL***************************************/
void solve()
{
    // string check = "0123456789"; 
    // string store=check;
    // int k = 1000000 - 1;
    // int count=0;
    // while (k--) {
    //     next_permutation(check.begin(), check.end());
    //     if(check==store){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
    // cout << check << endl; 
     int n = 10;
    int k = 1000000;
    k--;
    vector<int> factorials(n);
    factorials[0] = 1;
    for (int i = 1; i < n; i++) {
        factorials[i] = factorials[i - 1] * i;
    }

    vector<int> digits;
    for (int i = 0; i < n; i++) {
        digits.push_back(i);
    }

    string result = "";
    for (int i = n - 1; i >= 0; i--) {
        int index = k / factorials[i];
        result += to_string(digits[index]);
        digits.erase(digits.begin() + index);
        k %= factorials[i];
    }
    cout<<result<<endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fast
   // w(t)
    {
        solve();
    }
}