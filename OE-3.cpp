#include <iostream>

using namespace std;

int main(){

    int num_hours_work;
    double rate_per_hour;
    double gross_pay;

    cout << "Enter number of hours worked : ";
    cin >> num_hours_work;
    cout << "Enter rate per hour          : ";
    cin >> rate_per_hour;

    if(num_hours_work == 0 || rate_per_hour == 0){
        cout << "You did not put anything" << endl;
        return 0;
    }
    else if(num_hours_work <= 40){ // Regular Hours Worked
        gross_pay = rate_per_hour * num_hours_work;
    }
    else if(num_hours_work > 40){
        gross_pay = rate_per_hour * 40 + 1.5 * rate_per_hour * (num_hours_work - 40); // With Over Time
    }
    else{
        cout << "Invalid Input!";
    }

    cout << "Number of hours worked : " << num_hours_work << endl;
    cout << "Your Gross pay         : " << gross_pay << endl;
    return 0;
}