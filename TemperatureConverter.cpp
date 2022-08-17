#include <iostream>
using namespace std;

void tempConverter(){
    double tempx, tempy;
    char x, y;

    cout << "\n----------TEMPERATURE CONVERTER (Fahrenheit, Celsius, Kelvin)----------\n\n";
    cout << "Please enter the temperature\n";
    cin >> tempx;
    cout << "Please enter the scale of the temperature entered (F, C, or K)\n";
    cin >> x;
    cout << "Please enter the scale that you are converting the temperature to (F, C, or K)\n";
    cin >> y;
    cout << endl;

    if (x=='F' && y=='C') {
        tempy=(tempx-32)*0.56;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }

    else if (x=='F' && y=='K') {
        tempy=(tempx-32)*0.56 + 273.15;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }

    else if (x=='C' && y=='F') {
        tempy= (tempx*1.8)+32;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }

    else if (x=='C' && y=='K') {
        tempy= tempx + 273.15;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }

    else if (x=='K' && y=='F') {
        tempy= 1.8*(tempx-273.15) + 32;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }

    else if (x=='K' && y=='C') {
        tempy= tempx-273.15;
        cout << tempx << " " << x << " is equal to " << tempy << " " << y << endl << endl;
    }
    
    else{
        cout << "\nerror\n\n";
        tempConverter();
    }

}

int main (){

    tempConverter();
    
}