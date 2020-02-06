#include <iostream>
using namespace std;

void integer_benchmark(){
  long long n = 0;
   for(long long i = 0; i < 100000000000; i++){
      n++;
    }
    long long m = 2;
    for(long long j = 0; j < 50000000000; j++){
      m = 6 * m;
    }
    long long p = 63748930239392034;
    for(long long k = 0; k < 20000000000; k++){
      p = p/2;
    }
}

int main() {
  
  cout << "Hello World!\n";
}

