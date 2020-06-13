#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;

  map<char, int> mp;
  string ans = "yes";
  for (char c : s) {
    if (mp.count(c)) {
      ans = "no";
      break;
    } else {
      mp[c] = 1;
    }
  }
  cout << ans << '\n';

  return 0;
}
