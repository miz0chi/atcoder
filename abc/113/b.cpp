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
  int ans = 0;
  double absa = 10e5;
  for (int i = 0; i < n; ++i) {
    double x;
    cin >> x;
    double h = abs(a - (t - (x * 0.006)));
    cerr << h << '\n';
    if (absa > h) {
      absa = h;
      ans = i + 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
