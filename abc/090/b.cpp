#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = a; i <= b; ++i) {
    if ((i / 10000) == (i % 10) && (i / 1000 % 10) == (i % 100 / 10)) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
