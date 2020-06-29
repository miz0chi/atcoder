#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  int n;
  double t, a;
  cin >> n >> t >> a;
  int ans = -1;
  double absa = 1000.0;
  for (int i = 0; i < n; ++i) {
    double x;
    cin >> x;
    x = t - (x * 0.006);
    // cerr << x << '\n';
    if (absa > abs(a - x)) {
      absa = abs(a - x);
      ans = i + 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
