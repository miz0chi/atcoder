#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t x, k, d;
  cin >> x >> k >> d;

  x = abs(x);
  int64_t def = min(x / d, k);
  k -= def;
  x -= (def * d);

  bool even = true;
  if (k % 2 == 1) {
    even = false;
  }

  int64_t ans = x;
  if (even == false) {
    ans = abs(x - d);
  }

  cout << ans << '\n';

  return 0;
}
