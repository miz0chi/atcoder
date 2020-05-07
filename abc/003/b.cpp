#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s, t;
  cin >> s >> t;
  string a = "atcoder@";
  unordered_map<char, int> m{{'a', 1}, {'t', 1}, {'c', 1}, {'o', 1},
                             {'d', 1}, {'e', 1}, {'r', 1}, {'@', 10}};

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != t[i]) {
      if (m[s[i]] + m[t[i]] < 11) {
        cout << "You will lose"s << '\n';
        return 0;
      }
    }
  }
  cout << "You can win"s << '\n';

  return 0;
}
