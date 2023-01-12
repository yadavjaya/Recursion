//Factorial of a number

#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
     return  n * fact(n-1);
    
}
int main(){
    int N;
    cout<<"Enter the number::";
    cin>>N;
    cout<<"Factorial of a number:: "<<fact(N);
    return 0;
}
