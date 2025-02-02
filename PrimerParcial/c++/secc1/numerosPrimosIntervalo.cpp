#include <iostream>
using namespace std;

int check_prime(int);

int main() {

  int n1, n2;
  bool flag;

  cout << "Ingresa 2 numeros enteros: ";
  cin >> n1 >> n2;

  if (n1 > n2) {
    n2 = n1 + n2;
    n1 = n2 - n1;
    n2 = n2 - n1;
  }

  cout << "numeros primos entre " << n1 << " y " << n2 << " son:\n";

  for(int i = n1+1; i < n2; ++i) {
    flag = check_prime(i);

    if(flag)
      cout << i << ", ";
  }

  return 0;
}


int check_prime(int n) {
  bool is_prime = true;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for(int j = 2; j <= n/2; ++j) {
    if (n%j == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
