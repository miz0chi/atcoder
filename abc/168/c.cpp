#include <bits/stdc++.h>

using namespace std;

// #define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
// #define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(20);

  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double rad = M_PI * 2.0 * (h / 12.0 + m / 720.0 - m / 60.0);

  // double mang, hang, ang, ans;
  // mang = m * 360.0 / 60.0;
  // hang = h * 360.0 / 12.0;
  // hang += m * 360.0 / 720.0;

  // ang = max(mang, hang) - min(mang, hang);
  // if (ang > 180) {
  //   ang = 360 - ang;
  // }
  // ang = deg_to_rad(ang);

  double ans = sqrt(a * a + b * b - 2.0 * a * b * cos(rad));
  cout << ans << '\n';

  return 0;
}
