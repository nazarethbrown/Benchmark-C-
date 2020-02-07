#include <iostream>
#include <ctime>
#include <cstdio>
#include <time.h>
#include <fstream>
using namespace std;




void integer_benchmark(){
  time_t start, stop;
  time(&start);
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
    time(&stop);
    double time;
    time = double(stop - start);
}
void float_benchmark(){
   time_t start, stop;
  time(&start);
  double double n = 0.0;
   for(double double i = 0; i < 100000000000; i++){
      n++;
    }
    double double m = 2.0;
    for(double double j = 0; j < 50000000000; j++){
      m = 6.0 * m;
    }
    double double p = 63748930239392034.90394458;
    for(double double k = 0; k < 20000000000; k++){
      p = p/2.0;
    }
    time(&stop);
    double time;
    time = double(stop - start);

}
void memory_benchmark(){

}
void file_benchmark(){
  
}
int main() {
  
  cout << "Hello World!\n";
}

