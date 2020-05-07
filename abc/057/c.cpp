#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t n;
  cin >> n;

  int r = sqrt(n);
  for (int64_t i = r + 1; i >= 1; --i) {
    if (n % i == 0) {
      cout << to_string(n / i).size() << '\n';
      break;
    }
  }

  return 0;
}
