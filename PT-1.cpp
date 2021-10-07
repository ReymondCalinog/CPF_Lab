#include <iostream>

using namespace std;

int main(){
    int range, num1, num2, num3, num4, num5;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter range of numbers : ";
    cin >> range;
    
    if (range == 5){
        cout << "\nPlease input 5 numbers" << endl;
        cout << "Enter first number  : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        cout << "Enter third number  : ";
        cin >> num3;
        cout << "Enter fourth number : ";
        cin >> num4;
        cout << "Enter fifth number  : ";
        cin >> num5;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        if (num1 % 2 == 0){
            cout << num1 << " is Even" << endl;
        }
        else{
            cout << num1 << " is Odd" << endl;
        }
        if (num2 % 2 == 0){
            cout << num2 << " is Even" << endl;
        }
        else{
            cout << num2 << " is Odd" << endl;
        }
        if (num3 % 2 == 0){
            cout << num3 << " is Even" << endl;
        }
        else{
            cout << num3 << " is Odd" << endl;
        }
        if (num4 % 2 == 0){
            cout << num4 << " is Even" << endl;
        }
        else{
            cout << num4 << " is Odd" << endl;
        }
        if (num5 % 2 == 0){
            cout << num5 << " is Even" << endl;
        }
        else{
            cout << num5 << " is Odd" << endl;
        }
    }
    else if (range == 4){
        cout << "\nPlease input 4 numbers" << endl;
        cout << "Enter first number  : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        cout << "Enter third number  : ";
        cin >> num3;
        cout << "Enter fourth number : ";
        cin >> num4;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        if (num1 % 2 == 0){
            cout << num1 << " is Even" << endl;
        }
        else{
            cout << num1 << " is Odd" << endl;
        }
        if (num2 % 2 == 0){
            cout << num2 << " is Even" << endl;
        }
        else{
            cout << num2 << " is Odd" << endl;
        }
        if (num3 % 2 == 0){
            cout << num3 << " is Even" << endl;
        }
        else{
            cout << num3 << " is Odd" << endl;
        }
        if (num4 % 2 == 0){
            cout << num4 << " is Even" << endl;
        }
        else{
            cout << num4 << " is Odd" << endl;
        }
    }
    else if (range == 3){
        cout << "\nPlease input 3 numbers" << endl;
        cout << "Enter first number  : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        cout << "Enter third number  : ";
        cin >> num3;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        if (num1 % 2 == 0){
            cout << num1 << " is Even" << endl;
        }
        else{
            cout << num1 << " is Odd" << endl;
        }
        if (num2 % 2 == 0){
            cout << num2 << " is Even" << endl;
        }
        else{
            cout << num2 << " is Odd" << endl;
        }
        if (num3 % 2 == 0){
            cout << num3 << " is Even" << endl;
        }
        else{
            cout << num3 << " is Odd" << endl;
        }
    }
    else if (range == 2){
        cout << "\nPlease input 2 numbers" << endl;
        cout << "Enter first number  : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        if (num1 % 2 == 0){
            cout << num1 << " is Even" << endl;
        }
        else{
            cout << num1 << " is Odd" << endl;
        }
        if (num2 % 2 == 0){
            cout << num2 << " is Even" << endl;
        }
        else{
            cout << num2 << " is Odd" << endl;
        }
    }
    else if (range == 1){
        cout << "\nPlease input a number" << endl;
        cout << "Enter first number : ";
        cin >> num1;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        if (num1 % 2 == 0){
            cout << num1 << " is Even" << endl;
        }
        else{
            cout << num1 << " is Odd" << endl;
        }
    }
    else{
        cout << "Invalid Input! Please put range numbers between 1 to 5 only" << endl;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    return 0;
}