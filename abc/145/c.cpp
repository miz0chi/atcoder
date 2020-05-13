#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);

  int n;
  cin >> n;

  vector<int> x(n);
  vector<int> y(n);
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i] >> y[i];
    v[i] = i;
  }

  double ans = 0.0;
  int a = 0;
  do {
    double sum = 0.0;
    for (int i = 0; i < n - 1; ++i) {
      sum += sqrt(pow((x[v[i]] - x[v[i + 1]]), 2) +
                  pow((y[v[i]] - y[v[i + 1]]), 2));
    }
    ++a;
    ans += sum;
  } while (next_permutation(v.begin(), v.end()));

  cout << ans / a << '\n';

  return 0;
}
