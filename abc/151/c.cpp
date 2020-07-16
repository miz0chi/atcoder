#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<bool> y(n, true);
  int ac = 0, pen = 0;
  for (int i = 0; i < m; ++i) {
    int p;
    string s;
    cin >> p >> s;
    if (y[p]) {
      if (s == "WA") {
        ++pen;
      } else {
        ++ac;
        y[p] = false;
      }
    }
  }

  cout << ac << " " << pen << '\n';

  return 0;
}
