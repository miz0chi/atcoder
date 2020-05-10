#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(1);

  int n;
  cin >> n;

  vector<int> x(n);
  vector<int> y(n);
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i] >> y[i];
    v[i] = i;
  }

  vector<vector<double>> dist(n, vector<double>(n, 0.0));
  for (int i = 0; i < n - 1; ++i)
    for (int j = i + 1; j < n; ++j) {
      double d = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
      dist[i][j] = d;
      dist[j][i] = d;
    }

  double sum = 0.0;
  do {
    for (int i = 0; i < n - 1; ++i) {
      sum += dist[v[i]][v[i + 1]];
      cerr << v[i] << " ";
    }
    cerr << '\n';
  } while (next_permutation(v.begin(), v.end()));

  int Factorial = 1;
  for (int i = 2; i <= n; ++i) Factorial *= i;
  cout << sum / Factorial << '\n';

  return 0;
}
