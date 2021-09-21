//Name: Reymond Y. Calinog
//Activity: OE-1
//Description: Input & Output Program
//Date: 9/7/2021

#include <iostream>
#include <string>

using namespace std;

int main(){
    //INPUT
    string N, G, Add, Y, Co;
    int A;
    long long int C;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "Lyceum of the Philippines Laguna Student's Profile Application" <<endl;
    cout << "Please input your following information truthfully." <<endl;
    cout << "\nWhat is your Name?             :";
    getline(cin,N);
    cout << "What is your Gender?           :";
    getline(cin,G);
    cout << "What is your Age?              :";
    cin >> A;
    cin.ignore();
    cout << "What is your Address?          :";
    getline(cin,Add);
    cout << "What is your Year and Section? :";
    getline(cin,Y);
    cout << "What is your Course?           :";
    getline(cin,Co);
    cout << "What is your Contact Number?   :";
    cin >> C;
    cin.ignore();

    //OUTPUT
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "\n Thank you for submitting your Application, here is your Student Profile down below." <<endl;
    cout << "\n Student's Profile:" <<endl;
    cout << "\n Name: " << N;
    cout << "\n Gender: " << G;
    cout << "\n Age: " << A << " Years old";
    cout << "\n Address: " << Add;
    cout << "\n Year & Section: " << Y;
    cout << "\n Course: " << Co;
    cout << "\n Contact Number: " << C;
    cout << "\n Welcome to LPU Laguna! :)" <<endl;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    return 0;
}