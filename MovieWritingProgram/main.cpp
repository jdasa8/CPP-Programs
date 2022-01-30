#include <iostream>
// Lets C++ Use Input And Output As This Is Not A Built In Feature In C++; Included In Every C++ Program
#include <fstream>
// Lets C++ Work With Extrenal Files
#include <iomanip>
// Allows For The Use of Formatting of Output

using namespace std;
// Allows For The Use of Names For Objects And Variables From The Standard Library.

static string movie;
// Creates A Variable Called Movie That Can Hold Strings Of Characters
static int year;
// Creates A Variable Called Year That Can Hold Integers
static string genre;

// Static Allows For The Variable To Be Used Anywhere In The Program

void inputOutput();
// Declares A Function Called inputOutput of Which The Body Is Made Later

int main()
// Main Function
// Only Code Written or Declared In This Method Will Run
{
    ofstream file ("moviewriting.txt");
// Creates An ofstream Variable Called file
// ofstream Writes To Files And Takes A Parameter of The File It Is Writing To
// If The File Is Not Found, It Creates The File

    file << setw(20) << "Movie" << setw(20) << "Year" << setw(20) << "Genre" << endl;
// This Will Write The Headings "Movie", "Year", "Genre", To The File
// Setw Formats The File So That There Are 20 Spaces In Between Each Line of Text

    cout << "This program will allow you to enter movies into your movie list!" << endl;
// cout Prints Text On The Screen
// endl Ends The Line And Moves On To The Next Line

    int checker;

    do{
// Do While Loop
// Runs A Block of Code Once Before Checking A Condition To See Whether It Should Be Run Again

    inputOutput();
// Calls The inputOutput Function So That It Can Be Used In The Program

    file << setw(20) << movie << setw(20) << year << setw(20) << genre << endl;

    cout << "Would you like to run the program again? (For yes enter 1 for no enter 2)" << endl;
    cin >> checker;
// Lets The User Input A Number And Stores It In The Integer Variable Checker

    } while(checker == 1);
// Checks If The Checker Variable Is Equal To 1 And While It Is, The Code Is Run Again


    file.close();
// Closes The File
    return 0;
// Returns Nothing

    }

    void inputOutput(){
// Body Of The inputOutput Function
// This Fucntion Asks The User To Input Information About Their Movie To Add It To Their List
// This Function Will Not Return Anything Which Is Why It Is Void

    cout << "Please enter the name of the movie you would like to enter: \n";
    cin >> movie;
    cout << "Please enter the year the movie came out: \n";
    cin >> year;
    cout << "What is the genre of the movie: \n";
    cin >> genre;

    }


