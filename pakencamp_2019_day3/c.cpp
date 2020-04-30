#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N, vector<int>(M));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }

  int64_t smax = 0;
  for (int l = 0; l < M - 1; l++) {
    for (int i = 1; i + l < M; i++) {
      int64_t sum = 0;
      for (int j = 0; j < N; j++) {
        sum += max(A[j][l], A[j][l + i]);
        // cerr << A[j][l] << " " << A[j][l + i] << '\n';
      }
      // cerr << sum << '\n';
      smax = max(smax, sum);
    }
  }
  // cerr << smax << '\n';
  cout << smax << '\n';
  return 0;
}
