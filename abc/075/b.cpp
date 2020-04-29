#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int H, W;
  cin >> H >> W;
  vector<vector<char>> s(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> s[i][j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (s[i][j] == '#') {
        cout << s[i][j];
      } else {
        int sum = 0;
        for (int k = -1; k <= 1; k++) {
          for (int l = -1; l <= 1; l++) {
            if (i + k >= 0 && i + k < H) {
              if (j + l >= 0 && j + l < W) {
                if (s[i + k][j + l] == '#') {
                  sum++;
                }
              }
            }
          }
        }
        cout << sum;
      }
    }
    cout << '\n';
  }

  return 0;
}
