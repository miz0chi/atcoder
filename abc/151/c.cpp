#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<bool> ok(n, false);
  int ac = 0, pen = 0;
  for (int i = 0; i < m; ++i) {
    int p;
    string s;
    cin >> p >> s;
    if (s == "WA") {
      if (!ok[p]) {
        ++pen;
      }
    } else {
      if (!ok[p]) {
        ++ac;
        ok[p] = true;
      }
    }
  }

  cout << ac << " " << pen << '\n';

  return 0;
}
