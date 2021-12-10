//Name: Reymond Y. Calinog
//Activity: PT-4
//Description: Creating a C++ Program that has all the following concepts the needs to be implemented 
//Date: 12/10/2021

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void searchingArray(int size);
void sortingArray1(int size);
void sortingArray2(int size);
void three();

const int _size = 100;

ifstream in_stream;
ofstream ou_stream;

int main(){

    ou_stream.open("PT-4.txt", ios::app);

    int size, ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "<< Array Manipulation >>" << endl;
        cout << "[1] Searching Array" << endl;
        cout << "[2] Sorting Array (Ascending)" << endl;
        cout << "[3] Sorting array (Descending)" << endl;
        cout << "[0] Exit the Program" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        ou_stream << "\n<< Array Manipulation >>" << endl;
        ou_stream << "[1] Searching Array" << endl;
        ou_stream << "[2] Sorting Array (Ascending)" << endl;
        ou_stream << "[3] Sorting array (Descending)" << endl;
        ou_stream << "[0] Exit the Program" << endl;
        ou_stream << "Enter your choice: " << ch << endl;

        switch(ch){
            case 1:
            {
                cout << "\n<< Searching Array >>" << endl;
                ou_stream << "\n<< Searching Array >>" << endl;
                searchingArray(size);
                three();
                break;
            }
            case 2:
            {
                cout << "\n<< Sorting Array (Ascending) >>" << endl;
                ou_stream << "\n<< Sorting Array (Ascending) >>" << endl;
                sortingArray1(size);
                three();
                break;
            }
            case 3:
            {
                cout << "\n<< Sorting Array (Descending) >>" << endl;
                ou_stream << "\n<< Sorting Array (Descending) >>" << endl;
                sortingArray2(size);
                three();
                break;
            }
            case 0:
            {
                cout << "\nThe program will be terminated!" << endl;
                ou_stream << "\nThe program will be terminated!" << endl;
                three();
                return 0;
            }
        }
    } while(ans==0);
}

void searchingArray(int size){ //This void function is used for searching or finding the number of an array
    int score[_size], a, b, cnt=0, pos;

    cout << "Enter the size of an Array: ";
    cin >> size;
    ou_stream << "Enter the size of an Array: " << size << endl;
        
        for(a = 0; a < size; a++)
        {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
        ou_stream << "Enter the Array Element [" << a << "]: " << score[a] << endl;
        }

    cout << "\nEnter Element of an Array to be Searched: ";
    cin >> b;
    ou_stream << "\nEnter Element of an Array to be Searched: " << b << endl;
        for(a = 0; a < size; a++)
        {
            if(score[a] == b)
            {
                cnt = 1;
                pos = a + 1;
                break;
            }
        }
    if(cnt == 0)
    {
        cout <<"The Element of an Array was not found!" << endl;
        ou_stream <<"The Element of an Array was not found!" << endl;
    }
    else
    {
        cout <<"Element of an array is "<< b <<" and was found at position "<< pos << endl;
        ou_stream <<"Element of an array is "<< b <<" and was found at position "<< pos << endl;
    }
}

void sortingArray1(int size){ //This void function is used for ascending order of array numbers
    int a, b, temp;
    int score[_size];

    cout << "Enter the size of Array: ";
    cin >> size;
    ou_stream << "Enter the size of Array: " << size << endl;

    for(a = 0; a < size; a++)
    {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
        ou_stream << "Enter the Array Element [" << a << "]: " << score [a] << endl;
    }

    for(a = 0; a < size; a++)
    {
        for(b = a + 1; b < size; b++)
        {
            if(score[b] < score[a])
            {
                temp = score[a];
                score[a] = score[b];
                score[b] = temp;
            }
        }
    }

    cout << "\nElements of array in sorted ascending order: "<< endl;
    ou_stream << "\nElements of array in sorted ascending order: "<< endl;
    for (a = 0; a < size; a++)
    {
        cout << "Element of Array ["<< a << "] ";
        cout << score[a] << endl;
        ou_stream << "Element of Array ["<< a << "]: " << score [a] << endl;
    }
}

void sortingArray2(int size){ //This void function is used for descending order of array numbers
    int a, b, temp;
    int score[_size];

    cout << "Enter the size of Array: ";
    cin >> size;
    ou_stream << "Enter the size of Array: " << size;

    for(a = 0; a < size; a++)
    {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
        ou_stream << "Enter the Array Element [" << a << "]: " << score [a] << endl;
    }

    for(a = 0; a < size; a++)
    {
        for(b = a + 1; b < size; b++)
        {
            if(score[a] < score[b])
            {
                temp = score[a];
                score[a] = score[b];
                score[b] = temp;
            }
        }
    }

    cout << "\nElements of array in sorted descending order: "<< endl;
    ou_stream << "\nElements of array in sorted descending order: "<< endl;
    for (a = 0; a < size; a++)
    {
        cout << "Element of Array [" << a << "] ";
        cout << score[a] << endl;
        ou_stream << "Element of Array [" << a << "]: " << score [a] << endl;
    }
}

void three(){ //This void function is used for letting you use the array program again after a while
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}