#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, Y;
  cin >> N >> Y;

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j + i <= N; j++) {
      int k = N - i - j;
      if ((i * 10000) + (j * 5000) + (k * 1000) == Y) {
        cout << i << " "s << j << " "s << k << '\n';
        return 0;
      }
    }
  }
  cout << -1 << " "s << -1 << " "s << -1 << '\n';

  return 0;
}
