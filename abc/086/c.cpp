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

  int N;
  cin >> N;
  vi t(N), x(N), y(N);
  for (int i = 0; i < N; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }

  bool bo = true;
  for (int i = 0; i < N; i++) {
    if (t.at(i) < x.at(i) + y.at(i) || (x.at(i) + y.at(i)) % 2 != t.at(i) % 2) {
      bo = false;
      break;
    }
  }

  if (!bo) {
    cout << "No" << nl;
  } else {
    cout << "Yes" << nl;
  }
}
