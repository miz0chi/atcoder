#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  vector<vector<int>> a(3, vector<int>(3));
  vector<vector<bool>> chc(3, vector<bool>(3, false));
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < n; ++k) {
        if (a[i][j] == b[k]) {
          chc[i][j] = true;
          break;
        }
      }
    }
  }
  string ans = "No";
  for (int i = 0; i < 3; ++i) {
    if ((chc[i][0] && chc[i][1] && chc[i][2]) ||
        (chc[0][i] && chc[1][i] && chc[2][i])) {
      ans = "Yes";
    }
  }
  if ((chc[0][0] && chc[1][1] && chc[2][2]) ||
      (chc[0][2] && chc[1][1] && chc[2][0])) {
    ans = "Yes";
  }
  cout << ans << '\n';

  return 0;
}
