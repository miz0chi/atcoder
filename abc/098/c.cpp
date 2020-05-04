#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  string s;
  cin >> n >> s;

  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] == 'E') sum++;
  }
  int mins = sum;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'W') {
      sum++;
    }
    if (s[i] == 'E') {
      sum--;
      mins = min(mins, sum);
    }
  }

  cout << mins << '\n';

  return 0;
}
