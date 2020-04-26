#include <bits/stdc++.h>

using namespace std;

/*int main() {
  string s;
  cin >> s;
  vector<int> nums(s.size());
  transform(s.begin(), s.end(), nums.begin(), [](char ch) { return ch - '0'; });

  int b;
  for (int a : nums) {
    cout << a << endl;
    if (a % 3 == 0 && a % 5 == 0) {
      b += a;
    }
  }
  cout << b << endl;
  return 0;
}*/

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a;
  cin >> a;

  int b = 0;
  for (int i = 1; i < a + 1; i++) {
    if (i % 3 != 0 && i % 5 != 0) {
      b += i;
    }
  }
  cout << b << endl;
  return 0;
}
