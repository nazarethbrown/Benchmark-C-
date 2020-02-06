#include <iostream>
using namespace std;

void integer_benchmark(){
   long n = 0;
   for(long i = 0; i < 100000000000; i++){
      n++;
    }
   long m = 6;
   for(long j = 0; j < 50000000000; j++){
      m = 6 * m;
    }
}

int main() {
  
  cout << "Hello World!\n";
}
