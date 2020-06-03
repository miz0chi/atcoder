#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int s;
  cin >> s;

  unordered_map<int, int> ai;

  int i;
  for (i = 1; !ai.count(s); ++i) {
    ai[s];
    if (s % 2) {
      s = s * 3 + 1;
    } else {
      s /= 2;
    }
  }

  cout << i << '\n';

  return 0;
}
