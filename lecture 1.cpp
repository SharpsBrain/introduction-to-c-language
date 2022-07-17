#include <iostream> // header file to get all input output and basic C++ functions
#include <string> // additional header file for strings

using namespace std; // std is a reference variable to call methods/ functions

int main()
{ // code will start from here and will be confined inside a main function

    // hellow world
   // cout << "Hello world!" << endl;

    // variable declaration and initialization
    int a = 10;
    char b = 'A';
    float c = 22.7;
    bool d = false;
    double e = 124.564121;
    string f = "Fatima Zulfiqar";

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"f = "<<f<<endl;

    // sizeof function to find the size of each datatype that can be hold

    cout<<"\n\n";
    cout<<"size of a = "<<sizeof(a)<<endl;
    cout<<"size of b = "<<sizeof(b)<<endl;
    cout<<"size of c = "<<sizeof(c)<<endl;
    cout<<"size of d = "<<sizeof(d)<<endl;
    cout<<"size of e = "<<sizeof(e)<<endl;

// simple arithmatic operation

int num1=10, num2=20;
int sum;
sum = num1 + num2;
cout<<"\n\n";
cout<< "Sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
cout<< "Sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
// print shape using *

// using multiple cout statements
    cout<<"\n\n";
    cout<<"Using Multiple cout statements\n\n";
    cout<<"  *  "<<endl;
    cout<<" *** "<<endl;
    cout<<"*****"<<endl;
    cout<<" *** "<<endl;
    cout<<"  *  "<<endl;
    cout<<"\n\n";
    //using single cout statement

    cout<<"Using single cout statement\n\n";
    cout<<"  *  \n *** \n*****\n *** \n  *  \n";

    return 0; // zero will be returned at the end of the main
} // code ends here

// this is a single line comment

/* this
is
a
multi-line
comment */
