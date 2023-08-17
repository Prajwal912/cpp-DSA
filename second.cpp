#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin>>n;
    // cout<< "prajwal" << endl;

    // if(n>0){
    //     cout << n << " " << "is +ve";
    // }else{
    //     cout << n << " "  << "is -ve";
    // }
    // a = cin.get();

    int a, b;

    cout << "Enter the value of a" << endl;

    cin>> a;

    // cout << "Enter a value of b" << endl;

    // cin>> b;


    // if(a>b){
    //    cout<< "a is grater than b";
    // }
    // if(a<b){
    //    cout<< "b is grater than a";
    // }

    if(a>0){
       cout<< "a is +ve";
    }
    else{ 
        if(a<0){
       cout<< "a is -ve";
    }else{
        cout << "a is 0";
    }
    }
}