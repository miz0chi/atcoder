#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b, c, k;
  cin >> a >> b >> c >> k;

  int sum = 0;
  for (int i = 0; i < k; ++i) {
    if (a > 0) {
      ++sum;
      --a;
    } else if (b > 0) {
      --b;
    } else {
      --sum;
    }
  }
  cout << sum << '\n';

  return 0;
}
