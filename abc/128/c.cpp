#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  // input 1
  int n, m;
  cin >> n >> m;
  // input 2
  vector<vector<int>> ms(m);
  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    for (int j = 0; j < x; ++j) {
      int y;
      cin >> y;
      ms[i].push_back(y - 1);
    }
  }
  // input 3
  vector<int> p(m);
  for (int i = 0; i < m; ++i) {
    cin >> p[i];
  }

  int ans = 0;
  for (int i = 0; i < (1 << n); ++i) {
    bool ok = true;
    for (int j = 0; j < m; ++j) {
      int x = 0;
      for (int k : ms[j]) {
        if (i & (1 << k)) {
          x ^= 1;
        }
      }
      if (x != p[j]) {
        ok = false;
      }
    }
    if (ok) {
      ++ans;
    }
  }
  cout << ans << '\n';

  return 0;
}
