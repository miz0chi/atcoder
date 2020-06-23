#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string w;
  cin >> w;

  unordered_map<char, int> cnt;

  for (char c : w) {
    if (cnt.count(c)) {
      ++cnt[c];
    } else {
      cnt[c] = 1;
    }
  }

  string ans = "Yes";
  for (char c : w) {
    if (cnt[c] % 2 == 1) {
      ans = "No";
    }
  }

  cout << ans << '\n';

  return 0;
}
