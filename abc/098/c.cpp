#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  int mins = n;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      if (i < j && s[j] != 'W')
        sum++;
      else if (i > j && s[j] != 'E')
        sum++;
    }
    mins = min(mins, sum);
  }

  cout << mins << '\n';

  return 0;
}
