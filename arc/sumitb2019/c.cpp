#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;

  int ans = 1;
  if ((x / 100) * 5 < (x % 100)) {
    ans = 0;
  }

  cout << ans << '\n';

  return 0;
}
