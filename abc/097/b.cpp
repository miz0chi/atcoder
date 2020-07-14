#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;

  int ans = 1;
  for (int i = 2; i < 32; ++i) {
    int j = 2;
    int a = pow(i, j);
    while (a < x) {
      ans = max(ans, a);
      ++j;
      a = pow(i, j);
    }
  }

  cout << ans << '\n';

  return 0;
}
