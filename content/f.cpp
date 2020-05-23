#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  if (n == 1) {
    char ch;
    cin >> ch;
    cout << ch << '\n';
    return 0;
  }

  vector<vector<char>> a(n, vector<char>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }
  string ans(n, 's');
  int i = 0;

  while (i <= n - 1) {
    bool ok = false;
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        if (a[i][j] == a[n - 1][k]) {
          ans[i] = a[i][j];
          ans[n - 1] = a[i][j];
          ok = true;
          break;
        }
      }
      if (ok) {
        break;
      }
    }
    if (!ok) {
      cout << -1 << '\n';
      return 0;
    }
    ++i;
    --n;
  }
  cout << ans << '\n';

  return 0;
}
