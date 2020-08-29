#include <bits/stdc++.h>

using namespace std;
constexpr int MOD = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int64_t nsum = 0;

  vector<int64_t> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    nsum += a[i];
  }

  int64_t ans = 0;

  for (int i = 0; i < n; ++i) {
    nsum -= a[i];
    ans += (nsum * a[i]);
    ans %= MOD;
  }

  cout << ans << '\n';

  return 0;
}
