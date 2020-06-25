#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
  }

  int ans = 0, cnt = 0;
  for (int i = 1; i < n; ++i) {
    // cerr << h[i] << " ";
    if (h[i - 1] >= h[i]) {
      ++cnt;
    } else {
      cnt = 0;
    }
    ans = max(ans, cnt);
    // cerr << cnt << '\n';
  }

  cout << ans << '\n';

  return 0;
}
