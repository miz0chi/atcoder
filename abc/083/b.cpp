#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, A, B;
  cin >> N >> A >> B;

  int64_t ans = 0;
  for (int i = 1; i <= N; ++i) {
    int n = i;
    int sum = 0;
    while (n > 0) {
      sum += n % 10;
      n /= 10;
    }
    if (A <= sum && sum <= B) {
      ans += i;
    }
  }
  cout << ans << '\n';
}
