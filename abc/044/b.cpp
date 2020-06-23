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
    // cerr << cnt[c] << " ";
    if (cnt[c] % 2 == 1) {
      ans = "No";
      break;
    }
  }
  // cerr << '\n';

  cout << ans << '\n';

  return 0;
}
