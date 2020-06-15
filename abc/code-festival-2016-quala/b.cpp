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

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    // cerr << "i:" << i << " a[i]:" << a[a[i] - 1] << '\n';
    if (i + 1 == a[a[i] - 1]) {
      ++cnt;
    }
  }

  cout << cnt / 2 << '\n';

  return 0;
}
