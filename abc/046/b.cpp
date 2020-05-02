#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, K;
  cin >> N >> K;

  int64_t pat = K;
  for (int i = 2; i <= N; i++) {
    pat *= (K - 1);
  }

  cout << pat << '\n';

  return 0;
}
