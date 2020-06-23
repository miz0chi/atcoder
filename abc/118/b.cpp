#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m;
  cin >> n >> m;

  // vector<bool> ok(m, true);

  // for (int i = 0; i < n; ++i) {
  //   int k;
  //   cin >> k;
  //   vector<bool> a(m, false);
  //   for (int j = 0; j < k; ++j) {
  //     int idx;
  //     cin >> idx;
  //     a[idx - 1] = true;
  //   }
  //   for (int j = 0; j < m; ++j) {
  //     ok[j] = ok[j] && a[j];
  //     // cerr << ok[j] << " ";
  //   }
  //   // cerr << '\n';
  // }

  // int cnt = 0;
  // for (int i = 0; i < m; ++i) {
  //   if (ok[i]) {
  //     ++cnt;
  //   }
  // }

  vector<int> cnt(m, 0);
  for (int i = 0; i < n; ++i) {
    int k;
    cin >> k;
    for (int j = 0; j < k; ++j) {
      int a;
      cin >> a;
      ++cnt[a - 1];
    }
  }

  int ans = 0;
  for (int i = 0; i < m; ++i) {
    if (cnt[i] == n) {
      ++ans;
    }
  }

  cout << ans << '\n';

  return 0;
}
