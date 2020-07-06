#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<tuple<string, int, int>> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> get<0>(p[i]) >> get<1>(p[i]);
    get<2>(p[i]) = i + 1;
  }
  sort(begin(p), end(p), [](const auto &x, const auto &y) {
    return get<0>(x) == get<0>(y) ? get<1>(x) > get<1>(y)
                                  : get<0>(x) < get<0>(y);
  });

  for (int i = 0; i < n; ++i) {
    cout << get<2>(p[i]) << '\n';
  }

  return 0;
}
