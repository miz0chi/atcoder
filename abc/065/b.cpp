#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int p = 1;
  for (int i = 1; i <= N; i++) {
    if (a[p - 1] == 2) {
      cout << i << '\n';
      return 0;
    }
    p = a[p - 1];
  }
  cout << -1 << '\n';

  return 0;
}
