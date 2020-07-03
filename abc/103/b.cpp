#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s >> t;

  string ans = "No";
  for (unsigned int i = 0; i < s.size() - 1; ++i) {
    // cerr << s << '\n';
    if (s == t) {
      ans = "Yes";
      break;
    }
    char tmp = s[0];
    for (unsigned int i = 0; i < s.size() - 1; ++i) {
      s[i] = s[i + 1];
    }
    s[s.size() - 1] = tmp;
  }

  cout << ans << '\n';

  return 0;
}
