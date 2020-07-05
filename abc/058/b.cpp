#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(10);
  cerr << fixed << setprecision(10);

  string o, e;
  cin >> o >> e;

  for (unsigned int i = 0; i < e.size(); ++i) {
    cout << o[i] << e[i];
  }
  if (o.size() != e.size()) {
    cout << o[o.size() - 1] << '\n';
  } else {
    cout << '\n';
  }

  return 0;
}
