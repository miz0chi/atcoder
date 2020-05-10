#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m, x;
  cin >> n >> m >> x;

  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }

  int64_t ans = 92233720368547758L;
  for (int i = 0; i < (1 << n); ++i) {
    vector<int64_t> sum(m, 0);
    int64_t sumc = 0;
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        for (int k = 0; k < m; ++k) sum[k] += a[j][k];
        sumc += c[j];
      }
    }
    bool ok = true;
    for (int j = 0; j < m; ++j) {
      if (sum[j] < x) ok = false;
    }
    if (ok) ans = min(ans, sumc);
  }
  if (ans == 92233720368547758L) {
    cout << -1 << '\n';
  } else {
    cout << ans << '\n';
  }

  return 0;
}
