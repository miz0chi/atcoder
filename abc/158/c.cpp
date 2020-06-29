#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  int a, b;
  cin >> a >> b;

  int minb = b * 10;
  int maxb = (b + 1) * 10;
  for (int i = minb; i < maxb; ++i) {
    if ((int)(i / 12.5) == a) {
      cout << i << '\n';
      return 0;
    }
  }
  cout << "-1" << '\n';

  return 0;
}
