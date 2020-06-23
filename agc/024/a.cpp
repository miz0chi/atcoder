#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, b, c, k;
  cin >> a >> b >> c >> k;

  int64_t ans;
  if (k % 2 == 1) {
    ans = b - a;
  } else {
    ans = a - b;
  }
  if (ans > 1e18) {
    cout << "Unfair" << '\n';
    return 0;
  }

  cout << ans << '\n';

  return 0;
}
