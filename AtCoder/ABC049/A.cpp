#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  char c;
  cin >> c;
  if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    cout << "vowel" << endl;
  else
    cout << "consonant" << endl;
}
