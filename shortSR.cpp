#include <iostream>
#include <fstream>
#include <iomanip>
int main(){
  char s;
  std::ifstream in;
  in.open("shortSR.cpp");
  if (in){
      while (in.get(s)){
          std::cout << s;
        }
      in.close();
    }
  return 0;
}
