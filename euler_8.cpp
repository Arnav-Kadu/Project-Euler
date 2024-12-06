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
#define w(t)  \
    int t;    \
    cin >> t; \
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
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// vector<vector<int>> vec( n , vector<int> (m, 0));
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
inline int ceil(int a, int b)
{
    int ans = a / b;
    if ((b * ans) != a)
        ans += (a < 0) ^ (b > 0);
    return ans;
}
inline int floor(int a, int b)
{
    int ans = a / b;
    if ((b * ans) != a)
        ans -= (a > 0) ^ (b > 0);
    return ans;
}
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
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
int compute(string s){
    int ans=1;
    for(auto i:s){
        ans*=(i-'0');
    }
    return ans;
}
void solve()
{
    
string ans = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

    int val=0;
   
    for(int i=0;i<ans.size()-13;i++){
        val=max(val,compute(ans.substr(i,13)));
    }
    cout<<val<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fast
  //  w(t)
    {
        solve();
    }
}