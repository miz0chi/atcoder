#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    bool ok = true;
    for (int j = i + 1; j < n; ++j) {
      // cerr << "i:" << a[i] << " j:" << a[j] << '\n';
      if (a[i] % a[j] == 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ++cnt;
    }
  }
  if (a[n - 1] == a[n - 2]) {
    --cnt;
  }

  cout << cnt << '\n';

  return 0;
}
