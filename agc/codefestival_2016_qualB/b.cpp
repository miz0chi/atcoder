#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;

  int cnt = 0, bcnt = 1;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'c') {
      cout << "No" << '\n';
    } else if (s[i] == 'a') {
      if (cnt < a + b) {
        cout << "Yes" << '\n';
        ++cnt;
      } else {
        cout << "No" << '\n';
      }
    } else {
      if (cnt < a + b && bcnt <= b) {
        cout << "Yes" << '\n';
        ++cnt;
      } else {
        cout << "No" << '\n';
      }
      ++bcnt;
    }
  }

  return 0;
}
