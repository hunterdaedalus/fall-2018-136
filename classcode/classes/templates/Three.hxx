
template <class T>
Three<T>::Three(T a, T b, T c){
    data[0]=a;
    data[1]=b;
    data[2]=c;
  }
template <class T>
void Three<T>::printem(){
    for (int i = 0; i < 3; i++) {
      std::cout << data[i] << " ";
    }
    std::cout << "\n";
}
