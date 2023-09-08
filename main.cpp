
#include <iostream>

using namespace std;

int sum (int n);

int main() {
  int n;
  cout << "Please enter a number." << endl;
  cin >> n;
  cout << sum(n) << endl;
  
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
