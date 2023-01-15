//Sum Of digits

#include<iostream>
using namespace std;

int sum(int N){
    if(N == 0){
        return 0;
    }
    return (N%10) + sum(N/10);
}

int main(){
    cout<<sum(1276);
    return 0;
}