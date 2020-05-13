#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<int> p(n), q(n), v(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> q[i];
    v[i] = i + 1;
  }

  int a = 0, b = 0, j = 0;
  do {
    if (p == v) {
      a = j;
    }
    if (q == v) {
      b = j;
    }
    ++j;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(a - b) << '\n';

  return 0;
}
