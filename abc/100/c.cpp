#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int64_t> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  bool ok = false;
  int cnt = -1;
  while (!ok) {
    ok = true;
    ++cnt;
    for (int i = 0; i < n; ++i) {
      if (ok && a[i] % 2 == 0) {
        a[i] /= 2;
        ok = false;
      } else {
        a[i] *= 3;
      }
    }
  }

  cout << cnt << '\n';

  return 0;
}
