#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long N, K;
  cin >> N >> K;
  long long sum = 0;
  for (long long k = K; k <= N + 1; k++) {
    long long min_sum = (k - 1) * k / 2;
    long long max_sum = (N - (k - 1) + N) * k / 2;
    sum += max_sum - min_sum + 1;
    // cout << max_sum << ":" << min_sum << endl;
  }
  cout << sum % 1000000007 << endl;
}
