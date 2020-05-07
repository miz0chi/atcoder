#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string w;
  cin >> w;

  for (int i = 0; i < w.size(); i++) {
    if (w[i] != 'a' && w[i] != 'i' && w[i] != 'u' && w[i] != 'e' &&
        w[i] != 'o') {
      cout << w[i];
    }
  }
  cout << '\n';

  return 0;
}
