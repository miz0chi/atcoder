#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, b, c;
  cin >> a >> b >> c;

  int64_t a0 = a, b0 = b, c0 = c;
  int i = 0;
  while (!(a % 2) && !(b % 2) && !(c % 2)) {
    ++i;
    int64_t bc = (b + c) / 2, ca = (c + a) / 2, ab = (a + b) / 2;
    a = bc;
    b = ca;
    c = ab;
    if (a == a0 && b == b0 && c == c0) {
      cout << -1 << '\n';
      return 0;
    }
  }
  cout << i << '\n';

  return 0;
}
