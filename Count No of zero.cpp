//Count No of zero 

#include<iostream>
using namespace std;

int zeros(int N,int count){
    if(N==0){
        return count;
    }
    int rem= N%10;
    if(rem==0){
        return zeros(N/10,count+1);
    }
    return zeros(N/10 , count);
}
int main(){
    int N;
    cout<<"Enter digits for counting zeros::";
    cin>>N;
    cout<<"\nFinding Zeros in digits::"<<zeros(N,0);
}