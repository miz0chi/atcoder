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

  int64_t goal = 0;
  unordered_set<int64_t> c;
  c.insert(goal);
  int64_t csize = c.size();
  bool ng = true;
  for (int64_t i = 0; i < k; ++i) {
    goal = a[goal];
    c.insert(goal);
    if (csize == c.size() && ng) {
      int64_t loop = csize - *c.find(goal);
      cerr << csize << " " << *c.find(goal) << " " << loop << '\n';
      k %= loop;
      i = 0;
      ng = false;
    } else {
      csize = c.size();
    }
  }

  cout << goal + 1 << '\n';

  return 0;
}
