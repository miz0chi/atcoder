#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int h, w;
  cin >> h >> w;
  h += 2;
  w += 2;

  vector<vector<char>> a(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (i == 0 || j == 0 || i == h - 1 || j == w - 1) {
        a[i][j] = '#';
      } else {
        cin >> a[i][j];
      }
      cout << a[i][j];
    }
    cout << '\n';
  }

  return 0;
}
