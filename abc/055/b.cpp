#include <bits/stdc++.h>

using namespace std;

constexpr int MOD = 1000000007;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N;
  cin >> N;

  int64_t p = 1;

  for (int i = 2; i <= N; i++) {
    p = (p * i) % MOD;
  }

  cout << p << '\n';

  return 0;
}
