#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  int64_t k;
  cin >> s >> k;

  char ans = '1';
  if (k == 1) {
    ans = s[0];
  } else {
    for (char c : s) {
      if (c != '1') {
        ans = c;
        break;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
