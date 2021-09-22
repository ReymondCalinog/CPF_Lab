//Name: Reymond Y. Calinog
//Activity: OE-3
//Description: Salary Program that computes based on hours worked and rate per hour, minus tax based on the tax schemes
//Date: 9/22/2021

#include <iostream>
#include <string>

const double Tax1 = 0.12, Tax2 = 0.10, Tax3 = 0.05; //The VAT rates to deduct from a certain Gross Pay

using namespace std;

int main(){
    string emp_name;
    long long int emp_id,num_hours_work; //So I can input longer numbers that I can use for the Employee Identification
    double rate_per_hour, gross_pay, VAT, net_pay;

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "EMPLOYEE'S SALARY COMPUTER" << endl;
    cout << "\nPlease input your Employee Identification        : ";
    cin >> emp_id;
    cin.ignore();
    cout << "Please input your name                           : ";
    getline(cin,emp_name);
    cout << "Enter number of hours worked                     : ";
    cin >> num_hours_work;
    cout << "Enter rate per hour                              : ";
    cin >> rate_per_hour;

    gross_pay = rate_per_hour * num_hours_work; //To calculate the amount of Gross Pay

    if(num_hours_work == 0 || rate_per_hour == 0){
        cout << "Input Invalid, you did not put anything!" << endl;
        return 0;
    }
    else if(gross_pay < 29999){ //If salary is less than 29999 + Tax deduction of Salary of 5%
        VAT = gross_pay * Tax3;
        net_pay = gross_pay - VAT;
    }
    else if(gross_pay > 30000 && gross_pay < 40000){ //If salary is between than 30000-40000 + Tax deduction of Salary of 10%
        VAT = gross_pay * Tax2;
        net_pay = gross_pay - VAT;
    }
    else if(gross_pay >= 40000){ //If salary is more than 40000 + Tax deduction of salary of 12%
        VAT = gross_pay * Tax1;
        net_pay = gross_pay - VAT;
    }
    else{
        cout << "Invalid Input!" << endl;
        return 0;
    }

    //OUTPUT of the following programs in the code block that presents the salary of the employee.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "EMPLOYEE'S SALARY" << endl;
    cout << "\nEmployee's Identification              : " << emp_id << endl;
    cout << "Employee's name                        : " << emp_name << endl;
    cout << "Your Gross pay                         :" << " P" << gross_pay << endl;
    cout << "Your VAT rate deduction of your salary :" << " P" << VAT << endl;
    cout << "Your Net pay                           :" << " P" << net_pay;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    return 0;
}