#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t h, w;
  cin >> h >> w;

  int64_t ans;
  ans = h * w / 2;
  if (h % 2 == 1 && w % 2 == 1) {
    ++ans;
  }
  cout << ans << '\n';

  return 0;
}
