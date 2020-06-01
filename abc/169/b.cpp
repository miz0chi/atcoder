#include <bits/stdc++.h>

using namespace std;

constexpr int MOD = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int64_t ans = 0;
  bool ok = true;
  for (int i = 0; i < n; ++i) {
    int64_t a;
    cin >> a;
    if (a == 0) {
      ans = 0;
      break;
    }
    if (ok) {
      if (i == 0) {
        ans += a;
      } else {
        ans *= a;
      }
      if (ans > 1000000000000000000) {
        ans = -1;
        ok = false;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
