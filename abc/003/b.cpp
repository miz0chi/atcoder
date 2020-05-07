#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s, t;
  cin >> s >> t;
  string a = "atcoder@";

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != t[i]) {
      if (s[i] == '@') {
        bool x = false;
        for (int j = 0; j < a.size(); ++j) {
          if (t[i] == a[j]) {
            x = true;
            break;
          }
        }
        if (x == false) {
          cout << "You will lose"s << '\n';
          return 0;
        }
      } else if (t[i] == '@') {
        bool x = false;
        for (int j = 0; j < a.size(); ++j) {
          if (s[i] == a[j]) {
            x = true;
            break;
          }
        }
        if (x == false) {
          cout << "You will lose"s << '\n';
          return 0;
        }
      } else {
        cout << "You will lose"s << '\n';
        return 0;
      }
    }
  }
  cout << "You can win"s << '\n';

  return 0;
}
