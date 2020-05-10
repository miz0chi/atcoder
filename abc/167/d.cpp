#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t n, k;
  cin >> n >> k;

  vector<int64_t> a(n);
  for (int64_t i = 0; i < n; ++i) {
    cin >> a[i];
    --a[i];
  }

  unordered_set<int64_t> c;
  int64_t goal = 0;
  c.insert(goal);
  cerr << goal << '\n';
  bool ng = true;
  for (int64_t i = 1; i <= k; ++i) {
    goal = a[goal];
    c.insert(goal);
    cerr << goal << '\n';
    auto itc = c.find(goal);
    if (*itc && ng) {
      int64_t loop = distance(itc, c.end());
      cerr << *itc << " " << loop << '\n';
      k %= loop;
      i = 0;
      ng = false;
    }
  }

  cout << goal + 1 << '\n';

  return 0;
}
