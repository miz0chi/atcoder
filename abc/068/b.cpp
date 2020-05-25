#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int ans = 1, mcnt = 0;
  for (int i = 1; i <= n; ++i) {
    int j = i, cnt = 0;
    while (j % 2 != 1) {
      j /= 2;
      ++cnt;
    }
    if (mcnt < cnt) {
      mcnt = cnt;
      ans = i;
    }
  }

  cout << ans << '\n';

  return 0;
}
