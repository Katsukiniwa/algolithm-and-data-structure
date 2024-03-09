#include <iostream>
using namespace std;

// TODO: やり直す
int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < 26; ++i)
  {
    string a = "";
    // iが0の場合は「a」のASCIIコード、1の場合は「b」のASCIIコード、2の場合は「c」のASCIIコードとなります。
    a += 'a' + i;
    if (s.find(a) == string::npos)
    {
      cout << a << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
