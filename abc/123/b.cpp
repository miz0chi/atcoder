#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  vector<int> a(5);
  int rem = 0, ans = 0;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
    int aa = (a[i] + 9) / 10 * 10;
    ans += aa;
    // cerr << ans << '\n';

    rem = max(rem, aa - a[i]);
  }
  ans -= rem;

  cout << ans << '\n';

  return 0;
}
