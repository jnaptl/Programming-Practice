#include <iostream>
using namespace std;

int fib(int x);

int main() {
  int x;
  cout << "Enter number of Fibonacci terms you would like to see: " << endl;
  cin >> x;
  fib(x);
  return 0;
}

int fib(int x) {
  int first=0,
      second=1,
      temp=0,
      i=0;
      
  cout << first << " ";
  cout << second << " ";
  while(i!=x-2)
  {
    temp=second;
    second=first+second;
    cout<< second << " ";
    first=temp;
    i++;
  }
  cout << endl;
}

// A better way: use for loop instead of recursion to be more efficient because recursion involves function calls which uses stack 
// (to avoid stack overflow)
