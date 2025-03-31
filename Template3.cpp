//today we will explore the use of template function were we return different argument *auto
#include <iostream>
using namespace std;
template<class T,class Z> //we have two class T and Z because we want to return two arguments of diffent datatype
auto compare(T x, Z y)//we use auto because we have two classes T and Z 
{
return (x>y)? x : y;
}

int main()
{
    cout<<compare(2.1,6)<<endl;//that is the power of template and auto returning different arguments
    cout<<compare(9,9.5);
    return 0;
}