#include <iostream>


using std::cout;
using std::endl;
using std::string;

string line(int width, string c){
  string s = "";
  for (int i = 0; i < width; i++) {
    s = s + c;
  }
  return s;

}
string box(int width, int height){
  string s =  "";
  for (int r=0; r < height; r++) {
    s = s + line(width,"*");
    s = s + "\n";

  }

    return s;
}

string lower_triangle(int height){
  string s = "";
for (int row = 0; row <= height; row++) {
  s = s + line(row,"*");
  s = s + "\n";

 }

  return s;
}

string upper_triangle(int height){
  string s = "";
  for (int row=0; row < height; row++) {
    s = s + line(row,"_");
    s = s + line(height-row,"*")+"\n";
  }

  return s;
}


int main()
{
  string s = box(5,4);
  cout << s << endl;
  cout << "\n\n";
  s = lower_triangle(5);
  cout << s << endl << endl;
  s = upper_triangle(5);
  cout << s << endl << endl;
  return 0;
}
