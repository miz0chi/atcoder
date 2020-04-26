#include <bits/stdc++.h>

using namespace std;

#define deg_to_rad(deg) (((deg) / 360) * 2 * M_PI)
#define rad_to_deg(rad) (((rad) / 2 / M_PI) * 360)

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<string> vs;

typedef vector<vector<int>> vvi;
typedef vector<vector<ld>> vvd;
typedef vector<vector<ll>> vvl;

typedef vector<vector<vector<int>>> vvvi;
typedef vector<vector<vector<ld>>> vvvd;
typedef vector<vector<vector<ll>>> vvvl;

constexpr int MOD = 1000000007;
constexpr char nl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(15);

  string S;
  cin >> S;
  bool bo = true;
  vs test1 = {"dream", "erase"};

  string s2 = "ppap";
  string s3 = "ppap";
  for (int i = 0; i < S.size(); i++) {
    bo = false;
    if (S.at(i) != 'd' && S.at(i) != 'e' && S.at(i) != 'r') {
      bo = false;
      break;
    }
    for (int j = 0; j < test1.size(); j++) {
      string s1 = test1.at(j);
      s2 = S.substr(i, s1.size());
      if (s2 == s1) {
        i += s1.size() - 1;
        s3 = s2;
        bo = true;
      }
    }
    if (!bo && S.at(i) == 'r') {
      if (s3 == "erase") {
        bo = true;
        s3 = "r";
      } else {
        bo = false;
        break;
      }
    }
    if (!bo && S.substr(i, 2) == "er") {
      if (s3 == "dream") {
        bo = true;
        s3 = "er";
        i++;
      } else {
        bo = false;
        break;
      }
    }
    if (!bo) {
      break;
    }
  }
  if (!bo) {
    cout << "NO" << nl;
  } else {
    cout << "YES" << nl;
  }
}
