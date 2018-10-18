#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

string encode(string s, int r){
  char c;
  string result="";
  for (int i ; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c<='z'){
      c  = c - 'a';
      c = (c + r)%26;
      c = c + 'a';
    }

    if (c >= 'A' && c<='Z'){
      c  = c - 'A';
      c = (c + r)%26;
      c = c + 'A';
    }
    
    
    result = result + c;
  }
  return result;
}

int main()
{
  string encoded = encode("Hello World a z A Z",3);
  cout << encoded << endl;
  return 0;
}
