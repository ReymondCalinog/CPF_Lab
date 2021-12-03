//Name: Reymond Y. Calinog
//Activity: OE-7
//Description: Implementing a login credentials with a lab activity of your choice using C-String
//Date: 12/3/2021

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char username[15]; 
    char password[12]; 
    string N, G, Add, Y, Co;
    int A;
    long long int C;
 
    cout << "\n<< Enter your Login Credentials >>" <<endl;
    cout << "Enter your Username: "; 
    cin >> username;
 
    cout << "Enter your Password: "; 
    cin >> password;
 
    if(strcmp(username,"Mondrey123")==0)
    { 
        if(strcmp(password,"qwertyuiop")==0)
    { 
    cout << ("\nLogin is a Success, Welcome!") <<endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "Lyceum of the Philippines Laguna Student's Profile Application" <<endl;
    cout << "Please input your following information truthfully." <<endl;
    cout << "What is your Name?             : ";
    cin >> N;
    cout << "What is your Gender?           : ";
    cin >> G;
    cout << "What is your Age?              : ";
    cin >> A;
    cin.ignore();
    cout << "What is your Address?          : ";
    cin >> Add;
    cout << "What is your Section?          : ";
    cin >> Y;
    cout << "What is your Course?           : ";
    cin >> Co;
    cout << "What is your Contact Number?   : ";
    cin >> C;
    cin.ignore();

    //OUTPUT
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "Thank you for submitting your Application, here is your Student Profile down below." <<endl;
    cout << "Student's Profile:" <<endl;
    cout << "Name: " << N <<endl;
    cout << "Gender: " << G <<endl;
    cout << "Age: " << A << " Years old" <<endl;
    cout << "Address: " << Add <<endl;
    cout << "Year & Section: " << Y <<endl;
    cout << "Course: " << Co <<endl;
    cout << "Contact Number: " << C <<endl;
    cout << "Welcome to LPU Laguna! :)" <<endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    }
    else
    { 
    cout << ("\nThe password you've inputted is wrong!") <<endl;
    } 
    }
    else
    { 
    cout << ("\nThe user you've inputted does not exist!") <<endl;
    } 
 
    return 0; 
}