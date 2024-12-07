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
vector<vector<int>> grid = {
    {8, 2, 22, 97, 38, 15, 0, 40, 0, 75, 4, 5, 7, 78, 52, 12, 50, 77, 91, 8},
    {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 4, 56, 62, 0},
    {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 3, 49, 13, 36, 65},
    {52, 70, 95, 23, 4, 60, 11, 42, 69, 24, 68, 56, 1, 32, 56, 71, 37, 2, 36, 91},
    {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
    {24, 47, 32, 60, 99, 3, 45, 2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
    {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
    {67, 26, 20, 68, 2, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21},
    {24, 55, 58, 5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
    {21, 36, 23, 9, 75, 0, 76, 44, 20, 45, 35, 14, 0, 61, 33, 97, 34, 31, 33, 95},
    {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 3, 80, 4, 62, 16, 14, 9, 53, 56, 92},
    {16, 39, 5, 42, 96, 35, 31, 47, 55, 58, 88, 24, 0, 17, 54, 24, 36, 29, 85, 57},
    {86, 56, 0, 48, 35, 71, 89, 7, 5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
    {19, 80, 81, 68, 5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 4, 89, 55, 40},
    {4, 52, 8, 83, 97, 35, 99, 16, 7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
    {88, 36, 68, 87, 57, 62, 20, 72, 3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
    {4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36},
    {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 4, 36, 16},
    {20, 73, 35, 29, 78, 31, 90, 1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 5, 54},
    {1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 1, 89, 19, 67, 48}};
int explore(int row, int col)
{
    int val = 0;

    // up
    if (col >= 3)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row][col - i];
        }
        val = max(prod, val);
    }

    // down
    if (col <= 16)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row][col + i];
        }
        val = max(prod, val);
    }

    // left
    if (row >= 3)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row - i][col];
        }
        val = max(prod, val);
    }

    // right
    if (row <= 16)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row + i][col];
        }
        val = max(prod, val);
    }

    // diagonal top-left to bottom-right
    if (row <= 16 && col <= 16)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row + i][col + i];
        }
        val = max(prod, val);
    }

    // diagonal bottom-left to top-right
    if (row >= 3 && col <= 16)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row - i][col + i];
        }
        val = max(prod, val);
    }

    // diagonal bottom-right to top-left
    if (row >= 3 && col >= 3)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row - i][col - i];
        }
        val = max(prod, val);
    }

    // diagonal top-right to bottom-left
    if (row <= 16 && col >= 3)
    {
        int prod = 1;
        for (int i = 0; i < 4; i++)
        {
            prod *= grid[row + i][col - i];
        }
        val = max(prod, val);
    }

    return val;
}

void solve()
{
    int ans = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            ans = max(ans, explore(i, j));
        }
    }
    cout<<ans<<endl;
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