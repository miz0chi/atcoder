#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<int>> grf(n);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    grf[u].push_back(v);
    grf[v].push_back(u);
  }
  vector<int> c(n);
  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }

  for (int i = 0; i < q; ++i) {
    int op, x;
    cin >> op >> x;
    --x;
    cout << c[x] << '\n';
    if (op == 1) {
      for (int j = 0; j < grf[x].size(); ++j) {
        c[grf[x][j]] = c[x];
      }
    } else {
      int y;
      cin >> y;
      c[x] = y;
    }
  }

  return 0;
}
