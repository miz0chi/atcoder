#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int s;
  cin >> s;

  set<int> ai;

  int bsi = -1, si = 0;
  int cnt = 1;
  while (si != bsi) {
    bsi = si;
    if (s % 2) {
      s = s * 3 + 1;
    } else {
      s /= 2;
    }
    ai.insert(s);
    si = ai.size();
    ++cnt;
  }

  cout << cnt << '\n';

  return 0;
}
