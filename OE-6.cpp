//Name: Reymond Y. Calinog
//Activity: OE-6
//Description: Creating an array program, that apply searching and sorting in a dynamic array while using void functions in the solution
//Date: 11/26/2021

#include <iostream>

using namespace std;

void searchingArray();
void sortingArray1();
void sortingArray2();
void three();

const int _size = 100;

int main(){
    int ch, ans=0;

    do{
        system("cls");
        cout << endl;
        cout << "<< Array Program >>" << endl;
        cout << "[1] Searching Array" << endl;
        cout << "[2] Sorting Array (Ascending)" << endl;
        cout << "[3] Sorting array (Descending)" << endl;
        cout << "[0] Exit the Program" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch){
            case 1:
            {
                cout << "\n<< Searching Array >>" << endl;
                searchingArray();
                three();
                break;
            }
            case 2:
            {
                cout << "\n<< Sorting Array (Ascending) >>" << endl;
                sortingArray1();
                three();
                break;
            }
            case 3:
            {
                cout << "\n<< Sorting Array (Descending) >>" << endl;
                sortingArray2();
                three();
                break;
            }
            case 0:
            {
                cout << "\nThe program will be terminated!" << endl;
                three();
                return 0;
            }
        }
    } while(ans==0);
}

void searchingArray(){ //This void function is used for searching or finding the number of an array
    int score[_size], a, b, size, cnt=0, pos;

    cout << "Enter the size of an Array: ";
    cin >> size;
        
        for(a = 0; a < size; a++)
        {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
        }

    cout << "\nEnter Element of an Array to be Searched: ";
    cin >> b;
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
        cout<<"The Element of an Array was not found!" << endl;
    }
    else
    {
        cout<<"Element of an array is "<< b <<" and was found at position "<< pos << endl;
    }
}

void sortingArray1(){ //This void function is used for ascending order of array numbers
    int a, b, temp, size;
    int score[_size];

    cout << "Enter the size of Array: ";
    cin >> size;

    for(a = 0; a < size; a++)
    {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
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
    for (a = 0; a < size; a++)
    {
        cout << "Element of Array ["<< a << "] ";
        cout << score[a] << endl;
    }
}

void sortingArray2(){ //This void function is used for descending order of array numbers
    int a, b, temp, size;
    int score[_size];

    cout << "Enter the size of Array: ";
    cin >> size;

    for(a = 0; a < size; a++)
    {
        cout << "Enter the Array Element [" << a << "]: ";
        cin >> score[a];
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
    for (a = 0; a < size; a++)
    {
        cout << "Element of Array [" << a << "] ";
        cout << score[a] << endl;
    }
}

void three(){ //This void function is used for letting you use the array program again after a while
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue...";
    cin.get();
}