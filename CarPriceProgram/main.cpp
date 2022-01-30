#include <iostream> // A Header File Library That Lets The Programmer Work With Input and Output Onjects, Such As cout
#include <iomanip> // Added A Formatter Package

using namespace std; // Allows The Programmer To Use Names For Objects And Variables From The Standard Library.

static double reg_price; // Made A Static Double Variable Called reg_price | Holds A Double Value That Will Be Later Inputted By The User
static double tax; // Made A Static Double Variable Called tax | Holds A Double Value THat Will Be Later Inputted By The User

static string make; // Made A Static String Variable Called make | It Will Hold Characters
static string model; // Made A Static String Variable Called model | It Will Hold Characters

void Price(); // Decalred Price Method So I Can Use It Later
void Tax();   // Declared Tax Method So I Can Use It Later
void FinalPrice(); // Declared FinalPrice Method So I Can Use It Later
void ValidTax(); // Declared ValidTax Method So I Can Use It Again

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){ // Start Of My main Method


    cout << "\nEnter Your Make: \n"; // Displays The Text Within The Quotations | \n Means New Line
    getline(cin, make); // Allows User To Input Characters To The Console | cin Accepts The Input From The User | getline Is Used To Read What The User Inputted To The Console | make Stores What The User Inputted | endl Will End The Line

    cout << "Enter Your Model: \n"; // Displays The Text Within The Quotations
    getline(cin, model); // Allows User To Input Characters To The Console | getline Is Used To Read What The User Inputted To The Console | model Stores What The User Inputted

    cout << "\nGreat Choice\n\nThis Program Will Find Out The Total Price of Your Car!\n"; // Displays The Text Within The Quotations
    cout << "Note: There Will Be A 2% PDI Charge\n"; // Displays The Text Within The Quotations


    Price(); // Calls And Runs The Price Method
    Tax(); // Calls And Runs The Tax Method
    FinalPrice(); // Calls And Runs The FinalPrice Method

    } // End Of Main Method

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    void Price(){ // Start Of The Price Method

        cout << "\nEnter The Price Of Your Car\n"; // Displays The Text Within Quotations To The Console
        cin >> reg_price; // Allows User To Input A Double Value And Stores It In reg_price Variable
        cout << "\nThe Price Of Your " << make << " " << model << " Is: $" << reg_price; // Displays The Text Within Quotations To The Console And The Value Of reg_Price

    } // End Of Price Method
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    void Tax(){ // Start Of Tax Method
        cout << "\n\nPlease Enter The Tax: "; // Displays The Text Within Quotations To The Console
        cout << "\nFor Example: For 13%; Enter 13\n"; // Displays The Text Within Quotations To The Console
        cin >> tax; // Allows User To Input A Double Value And Stores It In tax Variable
        ValidTax(); // Calls And Runs The ValidTax Method

        cout << "\nYour Tax Is: " << tax << "%"; // Displays The Text Within Quotations To The Console And The Value Of tax
        tax = (tax/100)+1; // Divided Tax By 100 And Added It To 1 To Make My Future Calculations Simplier
      } // End Of The Tax Method

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    void ValidTax(){ // Start Of The ValidTax Method
        while(tax < 0 || tax > 57){ // Made An Infinite Loop | Checks If User Input Is Less Than 0 And Greater Than 57 | Runs This Loop If Statement Is True
            cout << "\nInvalid Tax! Please Try Again: \n"; // Displays The Text Within Quotations To The Console
            cin >> tax; // Allows User To Input A Double Value And Will Store It To Tax || This Loop Will Re-Run If The User Inputs Another Number Thats Less Than 0 And Greater Than 57
        } // End Of ValidTax Method
    }
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        void FinalPrice(){ // Start Of The FinalPrice Method

        double t_price = ((reg_price * tax)- reg_price); // Multiplied reg_price by Tax To Calculate The Price Of The Tax | Stores This Value In t_price
        cout << "\n\nThe Amount Of Tax Will Be: $" << t_price; // Displays The Text Within Quotations To The Console And The Value Of tax
        double pdi_price = (reg_price * 1.02) - reg_price; // Multiplied reg_price by 1.02 And Subtracted It With The Original Price To Calculate The PDI Charge || Stores This Value Into pdi_price
        cout << "\nThe Amount Of PDI Charge Will Be: $" << pdi_price; // Displays The Text Within Quotations To The Console And Value Of pdi_price

        double f_Price = (reg_price * tax) + pdi_price; // Added The Price Of The Tax and PDI Charge To Get The Final Price | Stores This Value In f_Price
        cout << "\nYour Final Price Of Your " << make  <<  " " << model << " After Tax And PDI Charge Is: $" << f_Price << "\n\n"; // Displays The Text Within Quotations To The Console And f_Price
    } // End Of FinalPrice Method

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
