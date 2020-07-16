#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<bool> y(n, true);
  vector<int> x(m, 0);
  int ac = 0, pen = 0;
  for (int i = 0; i < m; ++i) {
    int p;
    string s;
    cin >> p >> s;
    --p;
    if (y[p]) {
      if (s == "WA") {
        ++x[p];
      } else {
        ++ac;
        y[p] = false;
        pen += x[p];
      }
    }
  }

  cout << ac << " " << pen << '\n';

  return 0;
}
