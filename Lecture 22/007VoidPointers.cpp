#include<iostream>

using namespace std;

void increment(void* pvoid, int size) {

  if (size == sizeof(int)) {

    // pvoid points to an integer
    int* pint = (int*)pvoid;
    (*pint)++; // precedence(*) < precedence(++)

  } else if (size == sizeof(char)) {

    // pvoid points to a character
    char* pchar = (char*)pvoid;
    (*pchar)++;

  } else if (size == sizeof(double)) {

    // pvoid points to a double-type variable
    double* pdouble = (double*)pvoid;
    (*pdouble)++;

  }
}

int main() {

  // char ch = 'a';
  // void* ptr = &ch;
  // cout << ptr << endl;

  int  x = 0;
  char y = 'a';
  double z = 3.14;

  increment(&x, sizeof(x));
  increment(&y, sizeof(y));
  increment(&z, sizeof(z));

  cout << x << '\n' << y << '\n' << z << endl;

  return 0;
}