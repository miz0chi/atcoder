// WAc

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << '\n';
    return 0;
  }

  vector<int> a(n), ag(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  ag = a;
  sort(a.begin(), a.end());
  sort(ag.begin(), ag.end(), greater<int>());

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    bool ok = true;
    if (ag[i] == ag[i + 1]) {
      ok = false;
      while (ag[i] == ag[i + 1]) {
        ++i;
      }
      break;
    }
    for (int j = 0; a[j] <= (int)(ag[i] / 2); ++j) {
      // cerr << "i:" << ag[i] << " j:" << a[j] << '\n';
      if (ag[i] % a[j] == 0) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ++cnt;
      // cerr << "ok" << '\n';
    }
  }

  cout << cnt << '\n';

  return 0;
}
