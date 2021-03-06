#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pb push_back
#define FILL(a, b) memset(a, b, sizeof(a))

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

ll gcd(ll a, ll b){return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
ll fpow(ll b, ll exp, ll mod){if(exp == 0) return 1;ll t = fpow(b,exp/2,mod);if(exp&1) return t*t%mod*b%mod;return t*t%mod;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}

vector<string> strings;
void scramble(string str, int l, int r) {
    if(l == r) { strings.push_back(str); }
    else {
        for(int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            scramble(str, l+1, r);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    scramble(str, 0, str.length()-1);
    sort(strings.begin(), strings.end());
    for(string x : strings) {
        cout << x << "\n";
    }
    return 0;
}
