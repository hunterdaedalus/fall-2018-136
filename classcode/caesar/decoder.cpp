#include <iostream>
#include <string>
#include <math.h>
using std::string;
using std::cout;

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
    else if (c >= 'A' && c<='Z'){
      c  = c - 'A';
      c = (c + r)%26;
      c = c + 'A';
    }
    result = result + c;
  }
  return result;
}


double distance(double a[], double b[], int len){
  double sum = 0;
    for (int i = 0; i < len; ++i) {
      sum = sum + (b[i] - a[i]) * (b[i] - a[i]);
    }
    return sqrt(sum);
}

int count_letters(string s, char c){
  int count = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i]==c)
      count++;
  }
  return count;
}

string decode(string s, double freqs[]){
  string test_string;
  int total_letters;
  double test_vector[26];
  double min_dist = 1000;
  double min_index = 0;
  int i;
  double d;
  
  total_letters = s.length();
  int j = total_letters;
  for (i = 0; i < j; ++i) {
    if (s[i]==' ')
      total_letters--;
  }
  for (i = 0; i < 26; ++i) {
    test_string = encode(s,i);  
    for (j = 0; j < 26; j++) {
      d = 1.0*count_letters(test_string,'a'+j) / total_letters;
      test_vector[j] = d;
    }
    double test_distance = distance(freqs,test_vector,26);
    if (test_distance < min_dist){
      min_dist = test_distance;
      min_index = i;
    }
  }

  string decoded = encode(s,min_index);
  return decoded;
}

double freqs[] = {8.167,1.49,2.782,4.253,12.702,2.228,2.015,6.094,6.966,0.153,0.772,4.025,2.406,6.749,7.507,1.929,0.095,5.987,6.327,9.056,2.758,0.978,2.360,0.150,1.974,0.07};
int main()
{
  string source = "attack each day with an enthusiasm unkown to mankind";
  double a[3]= {10,20,30};
  double b[3]= {100,3,20};

  string encoded = encode(source,5);
  string decoded = decode(encoded,freqs);
  cout << source << "\n";
  cout << encoded << "\n";

  cout << decoded << "\n";

  source = "this is a test of";
  encoded = encode(source,5);
  decoded = decode(encoded,freqs);
  cout << source << "\n";
  cout << encoded << "\n";

  cout << decoded << "\n";
return 0;
}
