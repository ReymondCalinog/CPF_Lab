//Name: Reymond Y. Calinog
//Activity: PT-3
//Description: Create a program that files the I/O stream of the Salary/POS program that records the file permanently
//Date: 11/21/2021

#include <iostream>
#include <fstream>
#include <cstdlib>

const double Tax = 0.12;

using namespace std;

int main(){

    ifstream in_stream;
    ofstream ou_stream;

    ou_stream.open("PT-3.txt", ios::app);

    string PN1, PN2, PN3, CN;
    int PQ1, PQ2, PQ3;
    double P1, P2, P3, T1, T2, T3, TS, VAT, TP;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "INPUT THE NEXT SHOPPER'S DETAILS OF PURCHASED ITEMS" << endl;
    cout << "Input here the Customer's Name          : ";
    getline(cin,CN);
    cout << "Please input the First product          : ";
    cin >> PN1;
    cout << "Please input the Quantity of the product: ";
    cin >> PQ1;
    cout << "Please input the Price of the product   : ";
    cin >> P1;

    cout << "\nPlease input the Second product         : ";
    cin >> PN2;
    cout << "Please input the Quantity of the product: ";
    cin >> PQ2;
    cout << "Please input the Price of the product   : ";
    cin >> P2;

    cout << "\nPlease input the Third product          : ";
    cin >> PN3;
    cout << "Please input the Quantity of the product: ";
    cin >> PQ3;
    cout << "Please input the Price of the product   : ";
    cin >> P3;

    T1 = PQ1 * P1;
    T2 = PQ2 * P2;
    T3 = PQ3 * P3;
    TS = T1 + T2 + T3;
    VAT = (T1 + T2 + T3) * Tax;
    TP = (T1 + T2 + T3) + VAT;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "RECEIPT OF BOUGHT PRODUCTS" << endl;
    cout << "Customer's Name                  : " << CN << endl;
    cout << "First product's Name             : " << PN1 << endl;
    cout << "Quantity                         : " << PQ1 << endl;
    cout << "Price                            : " << P1 << endl;
    cout << "Total Price of 1st Product       : " << T1 << endl;

    cout << "\nSecond product's Name            : " << PN2 << endl;
    cout << "Quantity                         : " << PQ2 << endl;
    cout << "Price                            : " << P2 << endl;
    cout << "Total Price of 2nd Product       : " << T2 << endl;

    cout << "\nThird product's Name             : " << PN3 << endl; 
    cout << "Quantity                         : " << PQ3 << endl;
    cout << "Price                            : " << P3 << endl;
    cout << "Total Price of 3rd Product       : " << T3 << endl;

    cout << "\nTotal Amount of all products w/o 12% VAT  : " << "P" << TS << endl;
    cout << "VAT 12%                                   : " << "P" << VAT << endl;
    cout << "Total Amount of all products + 12% VAT    : " << "P" << TP;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    //Output of the statement to proceed to the file
    ou_stream << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    ou_stream << "RECEIPT OF BOUGHT PRODUCTS" << endl;
    ou_stream << "Customer's Name                  : " << CN << endl;
    ou_stream << "First product's Name             : " << PN1 << endl;
    ou_stream << "Quantity                         : " << PQ1 << endl;
    ou_stream << "Price                            : " << P1 << endl;
    ou_stream << "Total Price of 1st Product       : " << T1 << endl;

    ou_stream << "\nSecond product's Name            : " << PN2 << endl;
    ou_stream << "Quantity                         : " << PQ2 << endl;
    ou_stream << "Price                            : " << P2 << endl;
    ou_stream << "Total Price of 2nd Product       : " << T2 << endl;

    ou_stream << "\nThird product's Name             : " << PN3 << endl; 
    ou_stream << "Quantity                         : " << PQ3 << endl;
    ou_stream << "Price                            : " << P3 << endl;
    ou_stream << "Total Price of 3rd Product       : " << T3 << endl;

    ou_stream << "\nTotal Amount of all products w/o 12% VAT  : " << "P" << TS << endl;
    ou_stream << "VAT 12%                                   : " << "P" << VAT << endl;
    ou_stream << "Total Amount of all products + 12% VAT    : " << "P" << TP;
    ou_stream << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    return 0;
}