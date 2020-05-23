#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, r, n;
  cin >> a >> r >> n;
  --n;

  int64_t ans = a;
  for (int i = 0; i < n; ++i) {
    ans *= r;
    if (ans > 1000000000) {
      cout << "large" << '\n';
      return 0;
    }
  }
  cout << ans << '\n';

  return 0;
}
