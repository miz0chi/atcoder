#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int a, b, h, m;
  cin >> a >> b >> h >> m;

  double mang, hang, ang, ans;
  mang = m * 360 / 60;
  hang = h * 360 / 12;
  hang += m * 360 / 720;

  mang = deg_to_rad(mang);
  hang = deg_to_rad(hang);

  ang = max(mang, hang) - min(mang, hang);

  ans = sqrt((a * a) + (b * b) - (2 * a * b * cos(ang)));

  cout << ans << '\n';

  return 0;
}
