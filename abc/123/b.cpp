#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  vector<int> a(5);
  int mi = 10, ans = 0;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
    if (a[i] == 0) {
      ans += 10;
    } else {
      ans += ((a[i] - 1) / 10 + 1) * 10;
    }
    cerr << ans << '\n';

    a[i] %= 10;
    if (a[i] != 0) {
      mi = min(mi, a[i]);
    }
  }
  if (mi != 10) {
    ans -= (10 - mi);
  }

  cout << ans << '\n';

  return 0;
}
