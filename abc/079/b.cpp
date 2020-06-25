#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int64_t ans = 1, bef = 2;
  for (int i = 1; i < n; ++i) {
    int64_t tmp = ans;
    ans += bef;
    bef = tmp;
  }

  cout << ans << '\n';

  return 0;
}
