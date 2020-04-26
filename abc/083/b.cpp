#include <bits/stdc++.h>

using namespace std;

#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<string> vs;

typedef vector<vector<int>> vvi;
typedef vector<vector<ld>> vvd;
typedef vector<vector<ll>> vvl;

typedef vector<vector<vector<int>>> vvvi;
typedef vector<vector<vector<ld>>> vvvd;
typedef vector<vector<vector<ll>>> vvvl;

constexpr int MOD = 1000000007;
constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, A, B;
  cin >> N >> A >> B;

  ll ans = 0LL;
  for (int i = 1; i <= N; i++) {
    int n = i;
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }
    if (A <= sum && sum <= B) {
      ans += i;//
      // cout << sum << ":";
    }
  }
  cout << ans << endl;
}
