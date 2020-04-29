#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

constexpr int MOD = 1000000007;
constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, K;
  cin >> N >> K;
  ll sum = 0;
  for (ll k = K; k <= N + 1; k++) {
    ll min_sum = (k - 1) * k / 2;
    ll max_sum = (N - (k - 1) + N) * k / 2;
    sum += max_sum - min_sum + 1;
    // cerr << max_sum << ":" << min_sum << nl;
  }
  cout << sum % MOD << nl;
  return 0;
}
