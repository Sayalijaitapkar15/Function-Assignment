#include<iostream>
using namespace std ;

void eligibleOrNot(int age){

    (age>=18) ?  cout<<"Yes" : cout<<"No" ;

}
int main(){
    int age ;
    cout<<"Enter age of a person :  ";
    cin>>age ;
    eligibleOrNot(age);
    return 0 ;
}