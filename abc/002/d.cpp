#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m;
  cin >> n >> m;

  vector<vector<bool>> r(n, vector<bool>(n, false));
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    r[a][b] = true;
    r[b][a] = true;
  }

  int ans = 0;
  for (int i = 1; i < (1 << n); ++i) {
    int cnt = __builtin_popcount(i);
    if (cnt <= ans) continue;
    bool ok = true;
    for (int j = 0; j < n; ++j)
      if (i & (1 << j))
        for (int k = j + 1; k < n; ++k)
          if (i & (1 << k))
            if (!r[j][k]) ok = false;
    if (ok) ans = cnt;
  }
  cout << ans << '\n';

  return 0;
}
