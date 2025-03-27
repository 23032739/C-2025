// code that gives an output value of a multiplication but with a void return type
#include <iostream>
using namespace std;

void multiplication(int a, int b){
    int answer=a*b;
    cout<<"Your answer :" <<answer;
    // no returning of values due to void return type
}
int main(){
    //no need to create a return valve due to void
    int a,b;
    cout <<"Enter num1 :";
    cin>>a;
    cout<<"Enter num2 :";
    cin>>b;
    multiplication(a,b);
    return 0;
}