#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i += 2) {
    int sum = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        sum++;
      }
    }
    if (sum == 8) {
      ans++;
    }
  }
  cout << ans << '\n';

  return 0;
}
