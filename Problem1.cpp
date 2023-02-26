#include<iostream>
using namespace std ;
void print_square(){

    for(int i=1 ; i<=5 ; i++){

        int square = i* i ;
        cout<<square<<" " ;
    }
}

int main(){

    print_square();
    return 0 ;
}