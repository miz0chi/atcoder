#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<vector<string>> num(n, vector<string>(5, "..."));
  for (int i = 0; i < 5; ++i) {
    string li;
    cin >> li;
    for (int j = 0; j < n; ++j) {
      num[j][i][0] = li[4 * j + 1];
      num[j][i][1] = li[4 * j + 2];
      num[j][i][2] = li[4 * j + 3];
    }
  }
  vector<vector<string>> list = {
      {"###", "#.#", "#.#", "#.#", "###"},

      {".#.", "##.", ".#.", ".#.", "###"},

      {"###", "..#", "###", "#..", "###"},

      {"###", "..#", "###", "..#", "###"},

      {"#.#", "#.#", "###", "..#", "..#"},

      {"###", "#..", "###", "..#", "###"},

      {"###", "#..", "###", "#.#", "###"},

      {"###", "..#", "..#", "..#", "..#"},

      {"###", "#.#", "###", "#.#", "###"},

      {"###", "#.#", "###", "..#", "###"},
  };
  for (int i = 0; i < n; ++i) {
    // for (int j = 0; j < 5; ++j) {
    //   cerr << num[i][j] << '\n';
    // }
    // cerr << '\n';

    if (num[i] == list[0]) {
      cout << 0;
    } else if (num[i] == list[1]) {
      cout << 1;
    } else if (num[i] == list[2]) {
      cout << 2;
    } else if (num[i] == list[3]) {
      cout << 3;
    } else if (num[i] == list[4]) {
      cout << 4;
    } else if (num[i] == list[5]) {
      cout << 5;
    } else if (num[i] == list[6]) {
      cout << 6;
    } else if (num[i] == list[7]) {
      cout << 7;
    } else if (num[i] == list[8]) {
      cout << 8;
    } else if (num[i] == list[9]) {
      cout << 9;
    }
  }
  cout << '\n';

  return 0;
}
