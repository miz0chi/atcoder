#include <bits/stdc++.h>

using namespace std;
constexpr int MOD = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int64_t> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int64_t ans = 0;

  for (int i = 0; i < n - 1; ++i) {
    int64_t nsum = 0;
    for (int j = i + 1; j < n; ++j) {
      nsum += a[j];
      nsum %= MOD;
    }
    ans += (nsum * a[i]);
    ans %= MOD;
  }

  cout << ans << '\n';

  return 0;
}
