#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  // cerr << fixed << setprecision(10);

  int n, d;
  cin >> n >> d;

  vector<vector<int>> x(n, vector<int>(d));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < d; ++j) {
      cin >> x[i][j];
    }
  }

  int cnt = 0;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      double dist = 0.0;
      for (int k = 0; k < d; ++k) {
        dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      dist = sqrt(dist);
      // cerr << floor(dist) << "=" << dist << ", ";
      if (floor(dist) == dist) {
        ++cnt;
      }
    }
    // cerr << '\n';
  }

  cout << cnt << '\n';

  return 0;
}
