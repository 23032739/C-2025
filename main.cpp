#include <iostream> //iostsrem i and o stands for input and output character meaning its inside the library of stream
using namespace std;//this line of code allowes ask to have direct access to the standard library with resources for c++ console

int main()
{
    //we will start by declaring an int so that we can store whole numbers
    double Student_mark;

    //the total marks for the exam was 150
    double Total_mark=150;

    //declare a double because after calculations some marks will have decimal points
    double score;


    //we will use character ouput to write a string to ask the user to enter what is requared
    cout<<"Can you please enter your student marks (0-150):";

    //we are using character in to fetch the data given by the user
    cin>>Student_mark;

    //system will calculate percentage from the marks given the student
    score=(Student_mark/Total_mark)*100;

    //now we need to add conditions that needs to be followed  i will use boolean statement if and else
    if(score>=80){
        cout<<"Pass with distinction"<<endl;
        cout<<score<<"%";
    }
    else if(score>=65){
        cout<<"Merit pass"<<endl;
        cout<<score<<"%";
    }
    else if(score>=50){
        cout<<"Pass"<<endl;
        cout<<score<<"%";
    }
    else{
        cout<<"Fail"<<endl;
        cout<<"By "<<score<<"%";
    }
    return 0;
}

