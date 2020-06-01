#include <bits/stdc++.h>

// #include <boost/multiprecision/cpp_int.hpp>

using namespace std;
// namespace mp = boost::multiprecision;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  // mp::int128_t ans = 0;
  // bool ok = true;
  // for (int i = 0; i < n; ++i) {
  //   mp::int128_t a;
  //   cin >> a;
  //   if (a == 0) {
  //     ans = 0;
  //     break;
  //   }
  //   if (ok) {
  //     if (i == 0) {
  //       ans += a;
  //     } else {
  //       ans *= a;
  //     }
  //     if (ans > 1000000000000000000) {
  //       ans = -1;
  //       ok = false;
  //     }
  //   }
  // }

  int64_t ans = 0;
  bool ok = true;
  for (int i = 0; i < n; ++i) {
    int64_t a;
    cin >> a;
    if (a == 0) {
      ans = 0;
      break;
    }
    if (ok) {
      if (ans > 1000000000000000000 / a) {
        ans = -1;
        ok = false;
      } else {
        if (i == 0) {
          ans += a;
        } else {
          ans *= a;
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
