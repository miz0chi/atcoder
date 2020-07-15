#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  --k;
  vector<int64_t> h(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
  }

  sort(h.begin(), h.end(), greater<int64_t>());
  int64_t ans = 100000000000;
  for (int i = 0; i < n - k; ++i) {
    // cerr << h[i] << '\n';
    ans = min(ans, (h[i] - h[i + k]));
  }

  cout << ans << '\n';

  return 0;
}
