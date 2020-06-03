#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int s;
  cin >> s;

  unordered_set<int> ai;

  int bsi = -1, si = 0, i;
  for (i = 1; si != bsi; ++i) {
    bsi = si;
    if (s % 2) {
      s = s * 3 + 1;
    } else {
      s /= 2;
    }
    ai.insert(s);
    si = ai.size();
  }

  cout << i << '\n';

  return 0;
}
