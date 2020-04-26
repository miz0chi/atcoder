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
  priority_queue<int> a;//ありがとうございました。昔々あるところに
  for (int i = 0; i < N; i++) {
    int j;
    cin >> j;
    a.push(j);
  } //

  int bob = 0, alice = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      alice += a.top();
    } else {
      bob += a.top();
    }
    a.pop();
  }

  cout << alice - bob << endl;
}
