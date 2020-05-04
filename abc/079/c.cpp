#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;

  for (int i = 0; i < (1 << 3); i++) {
    int ans = (s[0] - '0');
    for (int j = 0; j < 3; j++) {
      if (i & (1 << j)) {
        ans += (s[j + 1] - '0');
      } else {
        ans -= (s[j + 1] - '0');
      }
    }
    if (ans == 7) {
      cout << s[0];
      for (int j = 0; j < 3; j++) {
        if (i & (1 << j)) {
          cout << "+" << s[j + 1];
        } else {
          cout << "-" << s[j + 1];
        }
      }
      cout << "=7" << '\n';
      break;
    }
  }

  return 0;
}
