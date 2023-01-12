//Print Name 5 times
#include<iostream>
using namespace std;

void fun(int N){
    if(N==0){
        return;
    }
    cout<<"Jaya ";
    fun(N-1);
}
int main(){
  fun(5);
  return 0;  
}