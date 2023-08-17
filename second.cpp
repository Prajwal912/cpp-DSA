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

    // int a, b;

    // cout << "Enter the value of a" << endl;

    // cin>> a;

    // cout << "Enter a value of b" << endl;

    // cin>> b;

    // if(a>b){
    //    cout<< "a is grater than b";
    // }
    // if(a<b){
    //    cout<< "b is grater than a";
    // }

    // if(a>0){
    //    cout<< "a is +ve";
    // }
    // else if(a<0){
    //    cout<< "a is -ve";
    // }else{
    //     cout << "a is 0";
    // }

    // int a = 9;
    // if(a==9){
    //     cout<< "NINEY";
    // }
    //  if(a > 0){
    //     cout<< "+ve";
    // }else{
    //      cout<< "-ve";
    // }

    // int a = 2;
    // int b = a + 1;

    // if ((a = 3) == b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << a+7;
    // }

    // int a = 24;
    // if (a > 20)
    // {
    //     cout << "greater";
    // }
    // else if (a == 24)
    // {
    //     cout << "equal";
    // }else{
    //      cout << "dont know";
    // }

    char ch;
    cout<<"enter your desired input"<<endl;
    cin>>ch;
    if (ch >= 'a' && ch <= 'z'){
        cout<< "lower";
    }else if(ch >= 'A' && ch <= 'Z'){
        cout<<"upper";
    }else if(ch >= '0' && ch <= '9'){
        cout<<"number";
    }else{
        cout<<"please write any valid output";
    }



}