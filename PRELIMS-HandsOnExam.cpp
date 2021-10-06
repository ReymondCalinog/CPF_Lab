//Name: Reymond Y. Calinog
//Activity: PRELIMS Hands-on Examination
//Description: C++ payroll program that prompts the user for a name, employee number, date of payday, hourly pay rate, and number of hours worked.
//Date: 10/6/2021

#include <iostream>
#include <string>

using namespace std;

int main(){
    string Name, Date, Emp_n;
    long int Hr_w;
    double Hr_pr, Gp, Tax, Ph=150, S=250, Pi=200, Np;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter your Name                  : ";
    getline(cin, Name);
    cout << "Enter your Employee Number       : ";
    cin >> Emp_n;
    cin.ignore();
    cout << "Enter the Date today             : ";
    cin >> Date;
    cout << "\nEnter the Number of hours worked : ";
    cin >> Hr_w;
    cout << "Enter the Rate per hour          : ";
    cin >> Hr_pr;

    Gp = Hr_pr * Hr_w; //For me to be able to get the Gross Pay of the salary
    Tax = Gp * 0.12; //To be able to get the Taxation amount of the GP
    Np = Gp - (Tax + Ph + S + Pi); //Getting the Netpay by deducting the GP to the taxes and miscellaneous payments

    //OUTPUT of the following programs that presents the payroll of the employee
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nPayroll summary for : " << Name << endl;
    cout << "Employee No.        : " << Emp_n << endl;
    cout << "Payroll date        : " << Date << endl;
    cout << "\nYou earned " << Hr_w << " at " << Hr_pr << " per hour" << endl;
    cout << "Grosspay            : Php " << Gp << endl;
    cout << "Withholding Tax     : Php " << Tax << endl;
    cout << "Philhealth          : Php " << Ph << endl;
    cout << "SSS                 : Php " << S << endl;
    cout << "Pagibig             : Php " << Pi << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Netpay              : Php " << Np << endl;

    if(Np < 5000){ //If net pay is less than 5,000.00, caption is Contractual
    cout << "Employee status     : Contractual" << endl;
    }
    else if(Np >= 5001 && Np < 10000){ //If net pay is between 5,001.00 – 10,000.00, caption is Probationary
    cout << "Employee status     : Probationary" << endl;
    }
    else{ //Otherwise, caption is Regular.
    cout << "Employee status     : Regular" << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    return 0;
}