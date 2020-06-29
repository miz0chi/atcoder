#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  double a, b;
  cin >> a >> b;

  double ans = ceil(a / 2.0 * 25.0);
  if (floor(ans / 10.0) == b) {
    cout << (int)ans << '\n';
  } else {
    cout << "-1" << '\n';
  }

  return 0;
}
