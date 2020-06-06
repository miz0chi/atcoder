#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, d, x;
  cin >> n >> d >> x;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int ans = x;
  for (int i = 0; i < n; ++i) {
    int cnt = 1;
    for (int j = 1; j <= d; ++j) {
      if (d < a[i] * j + 1) {
        break;
      }
      ++cnt;
    }
    ans += cnt;
  }

  cout << ans << '\n';

  return 0;
}
