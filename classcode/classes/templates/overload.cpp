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

  T &get(int i){
    return data[i];
  }
  
  T &operator[] (int i){
      return data[i];
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

  std::cout << t2.get(1) << "\n";
  std::cout << t3.get(1) << "\n";

  std::cout << t2[1] << "\n";
  std::cout << t3[1] << "\n";

  // never do it this way
  t3.get(2)="SOMETHIGN";
  t2.get(2)=10000;
  t2.printem();
  t3.printem();

  t2[2]=100;
  t3[2]="A new string with lots of stuff";
  t2.printem();
  t3.printem();
  
return 0;
}
