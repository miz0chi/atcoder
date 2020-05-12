#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  int64_t k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  vector<int> s;
  vector<int> ord(n + 1, -1);

  int c = 1, l = 0;
  int v = 1;
  while (ord[v] == -1) {
    // cerr << v << " ";
    ord[v] = s.size();
    s.push_back(v);
    v = a[v - 1];
  }
  cerr << '\n';
  c = s.size() - ord[v];
  l = ord[v];
  // cerr << "c: " << c << '\n';
  // cerr << "l: " << l << '\n';

  if (k < l) {
    cout << s[k] << '\n';
  } else {
    k -= l;
    k %= c;
    cout << s[l + k] << '\n';
  }
  // unordered_set<int64_t> c;
  // int64_t goal = 0;
  // c.insert(goal);
  // cerr << goal << '\n';
  // for (int64_t i = 1; i <= k; ++i) {
  //   goal = a[goal];
  //   auto itc = c.find(goal);
  //   if (itc == c.end()) {
  //     c.insert(goal);
  //     cerr << goal << '\n';
  //   } else {
  //     int64_t loop = distance(itc, c.end());
  //     cerr << *itc << " " << loop << '\n';
  //     int64_t kk = (k - i) % loop;
  //     cout << *next(itc, kk) + 1 << '\n';
  //     break;
  //   }
  // }

  return 0;
}
