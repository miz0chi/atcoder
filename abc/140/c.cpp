#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> b(n - 1);
  int64_t ans = 0;
  for (int i = 0; i < n - 1; ++i) {
    cin >> b[i];
    if (i == 0) {
      ans += b[i];
    } else {
      ans += min(b[i], b[i - 1]);
    }
  }
  ans += b[n - 2];

  cout << ans << '\n';

  return 0;
}
