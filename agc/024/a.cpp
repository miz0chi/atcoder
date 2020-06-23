#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, b, c, k;
  cin >> a >> b >> c >> k;

  int64_t ans;
  unordered_map<int64_t, bool> m;
  for (int i = 0; i < k; ++i) {
    int64_t sa = b + c;
    int64_t sb = c + a;
    int64_t sc = a + b;
    a = sa;
    b = sb;
    c = sc;
    ans = a - b;
    if (m.count(ans)) {
      break;
    } else {
      m[ans] = true;
    }
    if (ans > 1000000000000000000) {
      cout << "Unfair" << '\n';
      return 0;
    }
  }
  ans = a - b;

  cout << ans << '\n';

  return 0;
}
