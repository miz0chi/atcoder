#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<vector<int>> x(n), y(n);
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    for (int j = 0; j < a; ++j) {
      int xx, yy;
      cin >> xx >> yy;
      x[i].push_back(--xx);
      y[i].push_back(yy);
    }
  }

  int ans = 0;
  for (int i = 0; i < (1 << n); ++i) {
    bool ok = true;
    for (int j = 0; j < n; ++j) {
      bool lie = false;
      if (!(i & (1 << j))) {
        lie = true;
      }
      for (int k = 0; k < x[j].size(); ++k) {
        // cerr << bitset<3>(i) << ": " << x[j][k] << "-"
        //      << (!(i & (1 << x[j][k]))) << "-" << (y[j][k] == lie) << " ";
        if ((!(i & (1 << x[j][k]))) != (y[j][k] == lie)) {
          ok = false;
          break;
        }
      }
      // cerr << '\n';
    }
    // cerr << '\n';
    if (ok == false) {
      continue;
    }
    ans = max(ans, __builtin_popcount(i));
  }
  cout << ans << '\n';

  return 0;
}
