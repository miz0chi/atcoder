#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> pi(n), pj(n);

  for (int i = 0; i < n; ++i) {
    cin >> pi[i];
    cerr << pi[i] << " ";
  }
  cerr << '\n';
  for (int i = 0; i < n; ++i) {
    pj[i] = pi[pi[i] - 1];
    cerr << pj[i] << " ";
  }
  cerr << '\n';

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    bool ok = true;
    for (int j = 0; j < n; ++j) {
      if (i != j && pi[i] >= pi[j]) {
        if (pj[i] > pj[j]) {
          ok = false;
          break;
        }
      }
    }
    if (ok) {
      ++cnt;
    }
  }

  cout << cnt << '\n';

  return 0;
}
