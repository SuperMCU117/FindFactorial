#include "solution.h"
#include "iostream"
std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n){
  int temp=1;
  if (n == 0) return temp;
  else if (n<0) return -1;
  else {
    while (n>0){
      temp*=n;
      n--;
    }
  }
  return temp;

}

int Solution::FactorialRecursive(int n){
  if (n == 0 || n == 1) return 1;
  else if (n<0) return -1;
  else {
    
    return n*FactorialRecursive(n-1);
  }



}


