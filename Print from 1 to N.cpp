//Print from 1 to N
#include<iostream>
using namespace std;

int fun(int N){
    if(N==0){
        return;
    }
    return N;
    fun(N-1);
}
int main(){
    fun(5);
}