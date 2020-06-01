#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  long double a, b;
  int64_t ans;
  cin >> a >> b;

  a *= b;
  ans = (int64_t)a;

  cout << ans << '\n';

  return 0;
}
