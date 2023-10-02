#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first no:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    if(a>b){
        cout<<"here the first no is greater then second no";
    }
    else if(b>a){
        cout<<"here the second no is greater themn the first no";
    }
    else{
        cout<<"both are equal:";
    }
    return 0;
}
