#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  if (s <= "2019/04/30") {
    cout << "Heisei" << endl;
  } else {
    cout << "TBD" << endl;
  }
}
