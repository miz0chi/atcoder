#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t n;
  cin >> n;

  int r = sqrt(n);
  for (int i = r; i <= n; ++i) {
    if (n % i == 0) {
      cout << to_string(i).size() << '\n';
      break;
    }
  }

  return 0;
}
