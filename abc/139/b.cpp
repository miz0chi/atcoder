#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  cin >> a >> b;

  int ans = 1;

  if (b - a > 0) {
    b -= a;
    --a;
    if (b % a == 0) {
      ans += b / a;
    } else {
      ans += b / a + 1;
    }
  }

  cout << ans << '\n';

  return 0;
}
