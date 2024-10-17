#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double PH, US, EURO, YUAN, KORUNA, KRONE, SHEQEL, DINAR;

    cout << "Enter Philippine peso: ";
    cin >> PH;

    US = PH * 0.018;
    EURO = PH * 0.016;
    YUAN = PH * 0.12;
    KORUNA = PH * 0.41;
    KRONE = PH * 0.19;
    SHEQEL = PH * 0.067;
    DINAR = PH * 0.0054;

    cout << "\n" << PH << " Peso(s) is equivalent to:\n"
    << "--------------------------------------"<< endl;

    //US
    cout << left
    << setw(19) << "US"
    << setw(9) << ":"
    << US << endl;

    //EURO
    cout << left
    << setw(19) << "EURO"
    << setw(9) << ":"
    << EURO << endl;

    //YUAN
    cout << left
    << setw(19) << "YUAN"
    << setw(9) << ":"
    << YUAN << endl;

    //KORUNA
    cout << left
    << setw(19) << "KORUNA"
    << setw(9) << ":"
    << KORUNA << endl;

    //KRONE
    cout << left
    << setw(19) << "KRONE"
    << setw(9) << ":"
    << KRONE << endl;

    //SHEQEL
    cout << left
    << setw(19) << "SHEQEL"
    << setw(9) << ":"
    << SHEQEL << endl;

    //DINAR
    cout << left
    << setw(19) << "DINAR"
    << setw(9) << ":"
    << DINAR << endl;
}