#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  cin >> n;

  int ans = 0;
  bool ok = false;
  for (unsigned int i = n.size() - 1; i > 0; --i) {
    ans += 9;
    if (n[i] != '9') {
      ok = true;
    }
  }
  if (ok) {
    ans += ((n[0] - '0') - 1);
  } else {
    ans += (n[0] - '0');
  }
  cout << ans << '\n';

  return 0;
}
