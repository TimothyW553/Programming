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
ll mul(ll a,ll b, ll M){if(b==0)return 0;ll t=mul(a,b/2,M);if(b&1)return (t+t+a)%M;return (t+t)%M;}
ll fpow(ll a, ll b, ll M){if(b==0)return 1;ll t=fpow(a,b/2,M);if(b&1)return mul(mul(t,t,M),a,M)%M;return mul(t,t,M)%M;}
ll divmod(ll i, ll j, ll mod){i%=mod,j%=mod;return i*fpow(j,mod-2,mod)%mod;}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int ra, ca; cin >> ra >> ca;
    int a[ra][ca];
    for(int i = 0; i < ra; i++) {
        for(int j = 0; j < ca; j++) {
            cin >> a[i][j];
        }
    }
    int rb, cb; cin >> rb >> cb;
    int b[rb][cb];
    for(int i = 0; i < rb; i++) {
        for(int j = 0; j < cb; j++) {
            cin >> b[i][j];
        }
    }
    int res[101][101];
    for(int i = 0; i < ra; i++) {
        for(int j = 0; j < cb; j++) {
            res[i][j] = 0;
        }
    }
    for(int i = 0; i < ra; i++) {
        for(int j = 0; j < cb; j++) {
            for(int k = 0; k < ca; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < ra; i++) {
        for(int j = 0; j < cb; j++) {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
