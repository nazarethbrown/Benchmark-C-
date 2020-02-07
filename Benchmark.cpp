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
  double n = 0.0;
   for(double i = 0; i < 100000000000; i++){
      n++;
    }
    double m = 2.0;
    for(double j = 0; j < 50000000000; j++){
      m = 6.0 * m;
    }
    double p = 63748930239392034.90394458;
    for(double k = 0; k < 20000000000; k++){
      p = p/2.0;
    }
    time(&stop);
    double time;
    time = double(stop - start);

}
void memory_benchmark(){
  time_t start, stop;
  time(&start);
  long long list[100000];
  for(long long i = 0; i < 50000; i++){
    for(long long j = 0; j < 100000; j++){
      list[i] = 2;
    }
  for(long long n = 0; n < 50000; n++){
    for(long long m = 0; m < 100000; m++){
      long long read = list[m];
    }
  }

  }
 time(&stop);
 double time;
 time = double(stop - start);
}
void file_benchmark(){
  time_t start, stop;
  time(&start);

  ofstream file;

file.open("new.txt");

for(long long i = 0; i < 1000000000; i++){
  file << "joey" << endl;
}

string line;
string count;

ifstream readfile("text.txt");
if (readfile.is_open()){
  while(getline(readfile,line)){
    count = line;
  }
  readfile.close();
}

}
int main() {
  
  cout << "Hello World!\n";
}

