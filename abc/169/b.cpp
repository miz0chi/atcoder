#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int64_t a;
  cin >> a;
  int64_t ans = a;
  bool ok = true;
  for (int i = 1; i < n; ++i) {
    cin >> a;
    if (a == 0) {
      ans = 0;
      break;
    }
    if (ok) {
      ans *= a;
      if (ans > 1000000000000000000) {
        ans = -1;
        ok = false;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
