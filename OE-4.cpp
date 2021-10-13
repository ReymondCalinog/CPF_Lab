//Name: Reymond Y. Calinog
//Activity: OE-4
//Description: For loop program that creates a "Pyramid" or Triangle from giza
//Date: 10/13/2021

#include <iostream>

using namespace std;

int main(){
    int n, a, b, c=1;

    cout << "Input the height of the pyramid: ";
    cin >> n;

    for (a = 1; a <=n ; a++){
        for (b = 1; b <= n-a; b++){
            cout << "  ";
        }
        for (b=1; b<= c; b++){
            if (b == 1 || a == n || b == c){
                cout << "*" << " ";
            }
            else{
                cout << "  ";
            }
        }
        c += 2;
        cout << "\n";
    }
    return 0;
}