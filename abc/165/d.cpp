#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t A, B, N;
  cin >> A >> B >> N;

  int64_t amax = 0, bmax = 0;
  for (int64_t i = 1; i <= N; i++) {
    amax = max(amax, (A * i / B));
    bmax = max(bmax, (i / B));
  }

  cout << amax - A * bmax << '\n';

  return 0;
}
