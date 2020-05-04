#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;

  vector<vector<int>> A(2, vector<int>(n));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
      // cerr << A[i][j] << " ";
    }
    cerr << '\n';
  }

  int maxa = 0;
  for (int i = 0; i < n; i++) {
    int sw = 0;
    int adda = 0;
    for (int j = 0; j < n; j++) {
      adda += A[sw][j];
      if (sw == 0 && j == i) {
        sw++;
        j--;
      }
    }
    maxa = max(maxa, adda);
  }

  cout << maxa << '\n';

  return 0;
}
