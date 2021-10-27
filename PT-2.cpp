//Name: Reymond Y. Calinog
//Activity: PT-2
//Description: Conversion Console App using functions [Dollar to Peso & Peso to Dollar], also this is a debugging activity
//Date: 10/27/2021

#include <iostream>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct <char> {
    protected:
        string do_grouping() const { return "\003"; }
};

// First function prototypes
    void promptAndWait();
/*  Function takes two arguments: one float and one unsigned int.
    The unsigned int has a default value of 1. Function returns no value.*/
    void dollarsToPeso(float conversionRate, unsigned dollarsIn);
    void pesosToDollars(float conversion, unsigned pesosIn);

int main(){
    //Declare the variables for the user input.
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    float conversion = 0.020; // P1 = 0.020 Dollar
    unsigned dollarsIn, pesosIn;
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch){
            case 1:{
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                dollarsToPeso(conversionRate, dollarsIn); // Show the exchange rate by calling the function.
                // Prompt the user and take US dollars input.
                cout << "Enter a US dollar amount (without the dollar sign, commas or a decimal) : ";
                cin >> dollarsIn;
                dollarsToPeso(conversionRate, dollarsIn); // Show the conversion by calling the function.
                promptAndWait(); // Call the promptAndWait() function.
                break;
            }

            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                pesosToDollars(conversion, pesosIn); // Show the exchange rate by calling the function.
                // Prompt the user and take Pesos input.
                cout << "Enter a Peso amount (without the peso sign, commas or a decimal) : ";
                cin >> pesosIn;
                pesosToDollars(conversion, pesosIn); // Show the conversion by calling the function.
                promptAndWait();
                break;
            }
            case 0:{
                cout << "Conversion App Terminated \nThank you for using the app!";
                promptAndWait();
                break;
            }
            option:{
                cout << "Invalid Input!";
                promptAndWait();
                break;
            }
        }
    }while(ans == 0);
} //End of main function

    
    // Define the promptAndWait() function.
    void promptAndWait(){
        cin.ignore(100, '\n');
        cout << "\nPress Enter or Return to continue...";
        cin.get();
    }

    // Define the dollarsToPeso function.
    void dollarsToPeso(float conversionRate, unsigned dollarsIn){
    // Adjust the formatting.
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
    // Print the results.
        cout.imbue(locale(cout.getloc(), new group_facet));
        cout << "\n$" << dollarsIn << " US = " << (conversionRate * dollarsIn) << " Pesos. \n";
    }

    // Define the pesoToDollars function.
    void pesosToDollars(float conversion, unsigned pesosIn){
    // Adjust the formatting.
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
    // Print the results.
        cout.imbue(locale(cout.getloc(), new group_facet));
        cout << "\nP" << pesosIn << " Pesos = " << (conversion * pesosIn) << " Dollars. \n";
    }