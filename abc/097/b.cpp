#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;

  int ans = 1;
  for (int i = 2; i < 32; ++i) {
    int a = i * i;
    while (a <= x) {
      ans = max(ans, a);
      a *= i;
    }
  }

  cout << ans << '\n';

  return 0;
}
