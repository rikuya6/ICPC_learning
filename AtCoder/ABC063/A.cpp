#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int a, b;
  cin >> a >> b;
  if (a + b >= 10) cout << "error" << endl;
  else cout << a + b << endl;
  return 0;
}
