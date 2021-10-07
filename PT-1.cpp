//Name: Reymond Y. Calinog
//Activity: PT-1
//Description: Odd and Even number scheme program, that will tell if the number is odd or even number for a series of int inputs
//Date: 10/7/2021

#include <iostream>

using namespace std;

int main(){
    int range=0, a=0, b=0;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter range of numbers : ";
    cin >> range;
    cout << "Enter " << range << " consecutive numbers: ";

    while (b != range){
       cin >> a;
       b++;
    if (a % 2 == 0){
        cout << a << " is Even" << endl;
    }
    else{
        cout << a << " is Odd" << endl;
    }
}    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    return 0;
}