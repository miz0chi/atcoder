#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen, hb;

void dfs(const Graph &r, const vector<int64_t> &h, int v) {
  seen[v] = true;
  for (auto next_v : r[v]) {
    if (h[v] <= h[next_v]) hb[v] = false;
    if (seen[next_v]) continue;
    dfs(r, h, next_v);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n, m;
  cin >> n >> m;

  vector<int64_t> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  Graph r(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    r[a - 1].push_back(b - 1);
    r[b - 1].push_back(a - 1);
  }

  seen.assign(n, false);
  hb.assign(n, true);
  dfs(r, h, 0);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (hb[i] == true) sum++;
    cerr << hb[i] << '\n';
  }

  cout << sum << '\n';

  return 0;
}
