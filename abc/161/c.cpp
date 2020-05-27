#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t n, k;
  cin >> n >> k;

  int64_t ans;
  if (n > k) {
    n %= k;
  }
  if (n == 0 || n == k) {
    ans = 0;
  } else if (n < k - n) {
    ans = n;
  } else {
    ans = k - n;
  }

  cout << ans << '\n';

  return 0;
}
