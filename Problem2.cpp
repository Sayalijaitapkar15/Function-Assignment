#include<iostream>
using namespace std ;
// Function of area of a circle 
float Area(int radius){

    float area = 3.14 * radius * radius ;
    return area ;
}
// Function of circumference of a circle 
void Circum(int radius){

        cout<<2 * 3.14 * radius ;
}
int main(){
    int r ;
    cout<<"r = " ;
    cin>>r ;

    float area = Area(r);
    cout<<"Area : "<<area <<endl;
    cout<<"Circumference : ";
    Circum(r);
    return 0 ;
}