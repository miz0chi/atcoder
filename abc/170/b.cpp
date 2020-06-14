#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int x, y;
  cin >> x >> y;

  string ans = "No";
  for (int i = 0; i <= x; ++i) {
    if (y == (i * 2) + ((x - i) * 4)) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << '\n';

  return 0;
}
