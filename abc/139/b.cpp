#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  cin >> a >> b;

  int ans = 0;

  if (b != 1) {
    b -= a;
    ++ans;
    while (b > 0) {
      ++b;
      b -= a;
      ++ans;
    }
  }

  cout << ans << '\n';

  return 0;
}
