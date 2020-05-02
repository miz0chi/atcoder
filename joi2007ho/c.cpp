#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<pair<int, int>> cod(n);

  for (int i = 0; i < n; i++) {
    cin >> cod[i].first >> cod[i].second;
  }
  cerr << '\n';
  sort(cod.begin(), cod.end());

  int area = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (cod[i].second >= cod[j].second) {
        int xd = cod[i].first - cod[j].first;
        int yd = cod[i].second - cod[j].second;
        if (area >= xd * xd + yd * yd) {
          continue;
        }
        bool b3 = false, b4 = false;
        for (int k = 0; k < n; k++) {
          if (cod[k].first == cod[j].first + yd &&
              cod[k].second == cod[j].second - xd) {
            b3 = true;
          }
          if (cod[k].first == cod[i].first + yd &&
              cod[k].second == cod[i].second - xd) {
            b4 = true;
          }
          if (b3 && b4) {
            area = xd * xd + yd * yd;
            break;
          }
        }
      }
    }
    // cerr << cod[i].first << " " << cod[i].second << '\n';
  }
  cout << area << '\n';

  return 0;
}
