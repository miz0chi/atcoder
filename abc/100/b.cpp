#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int d, n;
  cin >> d >> n;

  int ans = 1;
  for (int i = 0; i < d; ++i) {
    ans *= 100;
  }

  cout << ans * n << '\n';

  return 0;
}
