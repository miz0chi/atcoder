#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t x, k, d;
  cin >> x >> k >> d;

  bool even = true;
  if (k % 2 == 1) {
    even = false;
  }

  int64_t ans = abs(x);
  if (even == false) {
    ans = abs(x - d);
    --k;
  }

  for (int i = 0; i < k; ++i) {
    int64_t absa = abs(ans - d);
    if (even) {
      absa = abs(absa - d);
    }
    if (absa < ans) {
      ans = absa;
    } else {
      break;
    }
  }

  cout << ans << '\n';

  return 0;
}
