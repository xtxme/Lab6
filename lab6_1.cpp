#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int x = 0;
    int y = 0;
    
    while ( i!=0){
        cout << "Enter an integer: ";
        cin >> i;
        
        if ( i%2==0 and i!=0 ){
            x = x+1;
        } else if( i%2!=0){
            y = y+1;
        }

    }
    cout << "#Even numbers = "<< x << endl;
    cout << "#Odd numbers = "<< y << endl;
    return 0;
}