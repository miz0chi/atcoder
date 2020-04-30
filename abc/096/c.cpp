#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int H, W;
  cin >> H >> W;
  vector<vector<char>> s(H, vector<char>(W));
  vector<vector<bool>> sb(H, vector<bool>(W, false));
  vector<int> x = {0, 0, -1, 1}, y = {1, -1, 0, 0};

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> s[i][j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (sb[i][j] == true) {
        continue;
      } else if (s[i][j] == '.') {
        sb[i][j] = true;
      } else {
        for (int k = 0; k < 4; k++) {
          if (i + y[k] >= 0 && i + y[k] < W && j + x[k] >= 0 && j + x[k] < H) {
            if (s[i + y[k]][j + x[k]] == '#') {
              sb[i + y[k]][j + x[k]] = true;
              sb[i][j] = true;
            }
          }
        }
      }
      if (sb[i][j] == false) {
        cout << "No" << '\n';
        return 0;
      }
    }
  }
  cout << "Yes" << '\n';

  return 0;
}
