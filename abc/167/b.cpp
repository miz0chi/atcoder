#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b, c, k;
  cin >> a >> b >> c >> k;

  int ans = 0;

  // for (int i = 0; i < k; ++i) {
  //   if (a > 0) {
  //     ++ans;
  //     --a;
  //   } else if (b > 0) {
  //     --b;
  //   } else {
  //     --ans;
  //   }
  // }

  int xa = min(a, k);
  k -= xa;
  int xb = min(b, k);
  k -= xb;
  int xc = k;

  ans = xa - xc;

  cout << ans << '\n';

  return 0;
}
