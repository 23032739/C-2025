#include <iostream>
using namespace std;
int addition(int a,int b){
int answer = a*b;
return answer;
}

int main(){
    int a,b;
    cout <<"enter num1: ";
    cin >>a;
    cout <<"enter num2: ";
    cin>>b;
    int results = addition(a,b);//this is return valve storing answer after multiplication 
    cout<<"Your answer: "<< results;

   return 0;

}
