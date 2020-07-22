#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t n;
  cin >> n;

  int64_t rtn = sqrt(n);
  int64_t ans = 0;
  for (int i = 1; i <= rtn; ++i) {
    if (n % i == 0) {
      ans = n / i + i - 2;
    }
  }

  cout << ans << '\n';

  return 0;
}
