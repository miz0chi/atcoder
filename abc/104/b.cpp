#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  string ans = "AC";

  if (s[0] != 'A') {
    ans = "WA";
  } else {
    bool ok = false;
    for (unsigned int i = 1; i < s.size(); ++i) {
      if (s[i] < 'a' || s[i] > 'z') {
        if (ok || s[i] != 'C' || i == 1 || i == s.size() - 1) {
          ans = "WA";
          break;
        }
        ok = true;
      }
    }
    if (!ok) {
      ans = "WA";
    }
  }

  cout << ans << '\n';

  return 0;
}
