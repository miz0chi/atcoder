#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t h;
  cin >> h;

  int cnt = 0;
  int64_t ans = 1;
  while (h != 1) {
    h /= 2;
    ++cnt;
    ans += pow(2, cnt);
  }

  cout << ans << '\n';

  return 0;
}
