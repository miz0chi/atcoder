#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2;

  x3 = x2 + (y1 - y2);
  y3 = y2 - (x1 - x2);
  x4 = x1 + (y1 - y2);
  y4 = y1 - (x1 - x2);

  cout << x3 << " " << y3 << " " << x4 << " " << y4 << '\n';

  return 0;
}
