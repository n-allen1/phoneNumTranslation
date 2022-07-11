#include <iostream>
using namespace std;

void get_upper(string &number);

int main()
{
    int i = 0;
    string phoneNumber;
    string numericalNumber;
    cout << "\nWelcome to the Alphabetic Telephone Number Translator\n" << endl;
    cout << "This program will translate phone numbers with alphabetic to its numeric equivalent.\n" <<endl;

    while(true)
    {
        get_upper(phoneNumber);
            if (phoneNumber == "x" || phoneNumber == "X")
                break;
            cout << "The phone number [" << phoneNumber << "]";
    numericalNumber = "";
    for(int i=0; i<phoneNumber.length(); i++)
    {
        switch (phoneNumber[i])
        {
            case 'A': case 'B': case 'C':
                numericalNumber += "2";
                break;
            case 'D': case 'E': case 'F':
                numericalNumber += "3";
                break;
            case 'G': case 'H': case 'I':
                numericalNumber += "4";
                break;
            case 'J': case 'K': case 'L':
                numericalNumber += "5";
                break;
            case 'M': case 'N': case 'O':
                numericalNumber += "6";
                break;
            case 'P': case 'Q': case 'R': case 'S':
                numericalNumber += "7";
                break;
            case 'T': case 'U': case 'V':
                numericalNumber += "8";
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                numericalNumber += "9";
                break;
            default:
                numericalNumber += phoneNumber[i];
        }
    }        
    cout << " is " << numericalNumber << endl;
    }

    return 0;
}

void get_upper(string &number){ // This function returns the alphabetized number to uppercase
    string upperAlpha;
    char alphabet;
    while(true)
    {
        cout << "Enter the telephone number in the format XXX-XXX-XXXX (x or X to exit): ";
        cin >> number;
        cout << endl;
        if (number[0] == 'x' || number[0] == 'X' ) // exit
            break;
        if (number.length() == 12)
            if (number[3] == '-' || number[7] == '-')
            break;
    }

    for (int i=0; i<number.length(); i++)
    {
        if(isalpha(number[i]))
            alphabet = toupper(number[i]);
        else
            alphabet = number[i];
        upperAlpha += alphabet;
    }
    number = upperAlpha;
    return;
}