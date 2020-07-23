#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  bool ok = true;
  int cnt = 0;
  while (ok) {
    ok = false;
    for (int i = 0; i < n; ++i) {
      if (a[i] % 2 == 0) {
        a[i] /= 2;
        ok = true;
        ++cnt;
        break;
      }
    }
  }

  cout << cnt << '\n';

  return 0;
}
