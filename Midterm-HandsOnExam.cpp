//Name: Reymond Y. Calinog
//Activity: Midterm Hands-on Examination
//Description: C++ Program console conversion app, that converts the following inputted conversion unit to another
//Date: 11/11/2021

#include <iostream>

using namespace std;

void MtoKm(float a, float b);
void KmtoM(float c, float d);
void CmtoMm(float e, float f);
void IntoFt(float g, float h);
void repeat();

int main(){
    float a, b, c, d, e, f, g, h;
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "<< Length Conversion App >>" << endl;
        cout << "[1] Meter to Kilometer" << endl;
        cout << "[2] Kilometer to Meter" << endl;
        cout << "[3] Centimeter to Millimeter" << endl;
        cout << "[4] Inch to Foot" << endl;
        cout << "[5] Exit" << endl;
        cout << "Select Function : ";
        cin >> ch;

        switch(ch){
            case 1:
            {
                cout << "\n<< Meter to Kilometer >>" << endl;
                cout << "Input a number to convert: ";
                cin >> a;
                cin.ignore();
                MtoKm(a, b);
                repeat();
                break;
            }
            case 2:
            {
                cout << "\n<< Kilometer to Meter >>" << endl;
                cout << "Input a number to convert: ";
                cin >> c;
                cin.ignore();
                KmtoM(c, d);
                repeat();
                break;
            }
            case 3:
            {
                cout << "\n<< Centimeter to Millimeter >>" << endl;
                cout << "Input a number to convert: ";
                cin >> e;
                cin.ignore();
                CmtoMm(e,f);
                repeat();
                break;
            }
            case 4:
            {
                cout << "\n<< Inch to Foot >>" << endl;
                cout << "Enter a number to convert: ";
                cin >> g;
                cin.ignore();
                IntoFt(g,h);
                repeat();
                break;
            }
            case 5:
            {
                cout << "\nThe program will be terminated!" << endl;
                repeat();
                return 0;
            }
            default:
            {
                cout << "\nIvalid Input!" << endl;
            }
        }
    } while(ans==0);
}

void MtoKm(float a, float b){ //This void function is used for converting Meter to Kilometers
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    b = a/1000;
    cout << "Length in Kilometer is: "<< b << " Km";
}

void KmtoM(float c, float d){ //This void function is used for converting Kilometer to Meters
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    d = c*1000;
    cout << "Length in Meter is: " << d << " M";
}

void CmtoMm(float e, float f){ //This void function is used for converting Centimeter to Milimeters
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    f = e*10;
    cout << "Length in Millimeter is: " << f << " Mm";
}

void IntoFt(float g, float h){ //This void function is used for converting Inch(es) to Foot
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    h = g/12;
    cout << "Length in Foot is: " << h << " Ft";
}

void repeat(){ //This void function is used for letting you use the console conversion app again after a while
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}