#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s >> t;

  string ans = "No";
  for (unsigned int i = 0; i < s.size(); ++i) {
    // cerr << s << '\n';
    if (s == t) {
      ans = "Yes";
      break;
    }
    s = s.back() + s.substr(0, s.size() - 1);
  }

  cout << ans << '\n';

  return 0;
}
