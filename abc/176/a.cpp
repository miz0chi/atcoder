#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x, t;
  cin >> n >> x >> t;

  int ans = ((n - 1) / x + 1) * t;

  cout << ans << '\n';

  return 0;
}
