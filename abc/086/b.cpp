#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  cin >> a >> b;

  int c = b;
  while (b != 0) {
    a *= 10;
    b /= 10;
  }
  c += a;
  int rt = sqrt(c);
  if (rt * rt == c) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }

  return 0;
}
