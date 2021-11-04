//Name: Reymond Y. Calinog
//Activity: OE-5
//Description: A decrypter program that decrypt a message, using void functions and functions with parameters implementations
//Date: 11/4/2021

#include <iostream>

using namespace std;

void reverseOne(string word);
void reverseTwo(unsigned int number);
void three();

int main(){
    string word;
    unsigned int number;
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "<<Decrypter Program>>" << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse a Unsigned Integer" << endl;
        cout << "[3] Exit" << endl;
        cout << "Select Function : ";
        cin >> ch;

        switch(ch){
            case 1:
            {
                cout << "\n<<Reverse a String>>" << endl;
                cout << "Enter a Word  : ";
                cin.ignore();
                getline(cin,word);
                reverseOne(word);
                three();
                break;
            }
            case 2:
            {
                cout << "\n<<Reverse an Unsigned Integer>>" << endl;
                cout << "Enter a number [0-9]: ";
                cin >> number;
                cin.ignore();
                reverseTwo(number);
                three();
                break;
            }
            case 3:
            {
                cout << "\nThe program will be terminated!" << endl;
                three();
                return 0;
            }
        }
    } while(ans==0);
}

void reverseOne(string word){ //This void function is used for swapping or reversing of the given word
    int a = word.length();
    
    for (int i = 0; i < a / 2; i++)
    {
        swap(word[i], word[a-i-1]);
    }
    cout << "Reversed Word: "<< word;
}

void reverseTwo(unsigned int number){ //This void function is used for swapping or reversing of the given number

    int c, d=0;
    while(number!=0)
    {
        c = number%10;
        d = d*10 + c;
        number /= 10;
    }
    cout << "Reversed Number: " << d;
}

void three(){ //This void function is used for letting you use the decrpyter program again after a while
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}