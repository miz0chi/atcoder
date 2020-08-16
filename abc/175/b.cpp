#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int64_t> l(n);
  for (int i = 0; i < n; ++i) {
    cin >> l[i];
  }
  sort(l.begin(), l.end());

  int ans = 0;
  for (int i = 0; i < n - 2; ++i) {
    for (int j = i + 1; j < n - 1; ++j) {
      if (l[i] == l[j]) {
        continue;
      }
      for (int k = j + 1; k < n; ++k) {
        if (l[j] != l[k] && l[i] + l[j] > l[k]) {
          ++ans;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
