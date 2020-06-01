#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  // int64_t a, ans;
  // mp::cpp_dec_float_50 b;
  // cin >> a >> b;

  // b *= a;
  // ans = (int64_t)b;

  int64_t a, ans;
  double b;
  cin >> a >> b;
  ans = (int64_t)(b * 100.0);
  ans = ans * a / 100;

  cout << ans << '\n';

  return 0;
}
