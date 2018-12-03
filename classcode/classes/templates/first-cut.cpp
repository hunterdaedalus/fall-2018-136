#include <iostream>
template <class T>
class Three{
public:
  Three(T a, T b, T c){
    data[0]=a;
    data[1]=b;
    data[2]=c;
  }
  void printem(){
    for (int i = 0; i < 3; i++) {
      std::cout << data[i] << " ";
    }
    std::cout << "\n";
}
private:
  T data[3];
  
  
};

int main()
{
  Three<int> t(5,2,3);
  Three<double> t2(5,2,3);
  Three<std::string> t3("Hello","World","!");
    t.printem();
  t2.printem();
  t3.printem();
return 0;
}
