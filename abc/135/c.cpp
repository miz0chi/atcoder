#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int64_t> a(n + 1);
  vector<int64_t> b(n);
  for (int i = 0; i < n + 1; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  int64_t ans = 0;
  int64_t x = 0, y = 0;
  for (int i = 0; i < n; ++i) {
    x = min(a[i], b[i]);
    b[i] -= x;
    y = min(a[i + 1], b[i]);
    a[i + 1] -= y;
    ans += x;
    ans += y;
  }

  cout << ans << '\n';

  return 0;
}
