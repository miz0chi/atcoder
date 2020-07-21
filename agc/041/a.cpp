#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t n, a, b;
  cin >> n >> a >> b;

  int64_t dist = b - a;
  int64_t ans = 0;
  if (dist % 2 == 0) {
    ans = dist / 2;
  } else {
    ans = a;
    ans += (dist - 1) / 2;
  }

  cout << ans << '\n';

  return 0;
}
