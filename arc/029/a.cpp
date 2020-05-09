#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> t(n);

  for (int i = 0; i < n; ++i) {
    cin >> t[i];
  }

  int ans = 10000;
  for (int i = 0; i < (1 << n); ++i) {
    int x = 0, y = 0;
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j))
        x += t[j];
      else
        y += t[j];
    }
    ans = min(ans, max(x, y));
  }
  cout << ans << '\n';

  return 0;
}
