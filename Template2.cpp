// a template is a type of a function that can return so many datatypes at the very same time 
// its compatible for any datatype no need to declare so many function all at once
// we use header template<class T || typename T>
#include <iostream>

using namespace std;

template<class T>
T compare(T x,T y){
// ternary operation
    return (x>y) ? x:y;
}
int main(){

    cout<< compare(4.2,4.1)<<endl;
    cout<< compare(5,4)<<endl;
    cout<< compare('D','A')<<endl;
    /*that is the power the template function u can return as much different datatype you want 
    but the only limitation if that u can not return return arguments that are different or have a different datatype
    i will explain and give an example on the next file called Template3.cpp*/

    return 0;

}