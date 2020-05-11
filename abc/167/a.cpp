#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s, t;
  cin >> s >> t;

  // for (int i = 0; i < s.size(); ++i) {
  //   if (s[i] != t[i]) {
  //     cout << "No" << '\n';
  //     return 0;
  //   }
  // }
  // cout << "Yes" << '\n';

  t.pop_back();
  if (s == t)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';

  return 0;
}
