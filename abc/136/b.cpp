#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  int64_t sum = 0;

  for (int64_t i = 1; i <= n; ++i) {
    // int cnt = 0;
    // int64_t j = i;
    // while (j) {
    //   j /= 10;
    //   ++cnt;
    // }
    // if (cnt % 2 == 1) {
    //   ++sum;
    // }
    if (to_string(i).size() % 2 == 1) {
      ++sum;
    }
  }
  cout << sum << '\n';

  return 0;
}
