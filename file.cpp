

#include <iostream>

using namespace std;


int sum(int n);

int main() {


  int n = 0; 
  cout << "enter a number: ";
  cin >> n;

  cout << sum(n); 

  return 0;

} 


int sum(int n) {

  int total = 0;
  
  for(int i = 0; i <= n; i++){
    total += i;
  }

  return total; 
} 
