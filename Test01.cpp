//program a logic that will print the following pattern multiplication of two numbers
// 1*1=1
#include <iostream>
using namespace std;
int multiplication(int a, int b){
    int answer =a*b;
    return answer;
}
int main()
{
  int a,b;
  cout<<"Enter num1 :";
  cin>>a;
  cout<<"Enter num2 :" ;
  cin>>b;
  // now i need to create an instance of return valve
  int results= multiplication(a,b);
  cout<<"Your answer :"<<results;
  return 0;
}