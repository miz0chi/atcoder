#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int64_t a, ans;
  mp::cpp_dec_float_50 b;
  cin >> a >> b;

  b *= a;
  ans = (int64_t)b;

  cout << ans << '\n';

  return 0;
}
