#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<pair<int, int>> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  double ans = 0.0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int d =
          pow(a[i].first - a[j].first, 2) + pow(a[i].second - a[j].second, 2);
      ans = max(ans, sqrt((double)d));
    }
  }

  cout << ans << '\n';

  return 0;
}
