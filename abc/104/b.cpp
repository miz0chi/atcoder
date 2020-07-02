#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  string s;
  cin >> s;

  if ((s[0] != 'A') || (s[1] < 'a' || s[1] > 'z') ||
      (s[s.size() - 1] < 'a' || s[s.size() - 1] > 'z')) {
    cout << "WA" << '\n';
    return 0;
  }

  bool ok = false;
  for (unsigned int i = 2; i < s.size() - 1; ++i) {
    if (s[i] < 'a' || s[i] > 'z') {
      if (!ok && s[i] == 'C') {
        ok = true;
      } else {
        cout << "WA" << '\n';
        return 0;
      }
    }
  }
  if (ok) {
    cout << "AC" << '\n';
  } else {
    cout << "WA" << '\n';
  }
  return 0;
}
