#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, b, x;
  cin >> a >> b >> x;

  a = (a - 1) / x;
  b /= x;
  b -= a;

  cout << b << '\n';

  return 0;
}
