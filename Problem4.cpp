#include<iostream>
using namespace std ;

void oddNumber(int a, int b){

    for(int i=a ; i<=b ; i++){

        if(i%2 != 0){
            cout<<i ;
        }
        cout<<" ";
    }

}
int main(){
    int a , b ;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    
    oddNumber(a, b);
    return 0 ;

}