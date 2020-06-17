#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string s;
  cin >> s;
  map<char, bool> alp;
  for (char c : s) {
    alp[c] = true;
  }

  if (alp.size() == 26) {
    cout << "None" << '\n';
  } else {
    for (char c = 'a'; c <= 'z'; ++c) {
      if (!alp.count(c)) {
        cout << c << '\n';
        break;
      }
    }
  }

  return 0;
}
