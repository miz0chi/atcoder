#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, b, x;
  cin >> a >> b >> x;

  bool bo = false;
  if (a == 0) {
    bo = true;
  }
  a = (a - 1 + bo) / x;
  b = b / x + bo;
  b -= a;

  cout << b << '\n';

  return 0;
}
