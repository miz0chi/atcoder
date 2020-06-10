#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t n, a, b;
  cin >> n >> a >> b;

  int64_t ans;

  ans = (n * a / (a + b)) + min(n % (a + b), a);

  cout << ans << '\n';

  return 0;
}
