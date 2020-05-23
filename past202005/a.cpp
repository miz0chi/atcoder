#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s, t;
  cin >> s >> t;

  if (s == t) {
    cout << "same" << '\n';
    return 0;
  } else {
    bool ok = true;
    for (int i = 0; i < s.size(); ++i) {
      if (isupper(s[i])) {
        s[i] = tolower(s[i]);
      }
      if (isupper(t[i])) {
        t[i] = tolower(t[i]);
      }
      if (s[i] != t[i]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "case-insensitive" << '\n';
      return 0;
    }
  }
  cout << "different" << '\n';

  return 0;
}
