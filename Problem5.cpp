#include<iostream>
using namespace std ;
void primeNo(int num1 , int num2){
    int  temp=0 ;
    while(num1 <= num2){
        temp =0 ;
        for(int i=2 ; i<=(num1/2) ; i++){
            if(num1 % i == 0){
                temp = 1 ;
                break;
            }
        }
        if(temp == 0)
        cout<<num1<<"\n";
        num1++;
    }
}
int main(){
    int num1 , num2 ;
    cout<<"Enter a range to find prime numbers : ";
    cin>>num1>>num2 ;
     primeNo(num1,num2);
    return 0 ;
}