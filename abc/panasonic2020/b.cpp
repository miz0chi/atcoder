#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t h, w;
  cin >> h >> w;

  if (h == 1 || w == 1) {
    cout << 1 << '\n';
    return 0;
  }

  int64_t ans = h * w;
  if (ans % 2 == 1) {
    ++ans;
  }
  cout << ans / 2 << '\n';

  return 0;
}
