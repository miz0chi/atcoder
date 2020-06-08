#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int A, B, M;
  cin >> A >> B >> M;

  vector<int> a(A), b(B);
  for (int i = 0; i < A; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < B; ++i) {
    cin >> b[i];
  }
  int ans = *min_element(a.begin(), a.end()) + *min_element(b.begin(), b.end());

  for (int i = 0; i < M; ++i) {
    int x, y, z;
    cin >> x >> y >> z;
    ans = min(ans, (a[x - 1] + b[y - 1] - z));
  }

  cout << ans << '\n';

  return 0;
}
