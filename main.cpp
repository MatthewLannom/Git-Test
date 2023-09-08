
#include <iostream>

using namespace std;

int sum (int n);

int product (int n);

int main() {
  int n;
  cout << "Please enter a number." << endl;
  cin >> n;
  cout << sum(n) << endl;
  cout << product(n) << endl;
  
  return 0;
}

int sum (int n){
  int count = 1; int sum = 0;
  while (count <= n){
    sum += count;
    count ++;
  }
  return sum;
}

int product (int n){
  int count = 1; int product = 1;
  while (count <= n){
    product = product*count;
    count ++;
  }
  return product;
}
