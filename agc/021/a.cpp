#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;

  int ans = 9 * (n.size() - 1);
  ans += ((n[0] - '0') - 1);

  cout << ans << '\n';

  return 0;
}
