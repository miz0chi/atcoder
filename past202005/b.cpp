#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m, q;
  cin >> n >> m >> q;

  vector<int> sco(m, n);
  vector<vector<bool>> cor(n, vector<bool>(m, false));
  for (int i = 0; i < q; ++i) {
    int op, nr, mr;
    cin >> op;
    if (op == 1) {
      cin >> nr;
      int64_t score = 0;
      for (int j = 0; j < m; ++j) {
        if (cor[nr - 1][j]) {
          score += sco[j];
        }
      }
      cout << score << '\n';
    } else {
      cin >> nr >> mr;
      cor[nr - 1][mr - 1] = true;
      --sco[mr - 1];
    }
  }

  return 0;
}
