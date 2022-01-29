#include <iostream>
// Lets C++ Use Input And Output As This Is Not A Built In Feature In C++; Included In Every C++ Program
#include <fstream>
// Lets C++ Work With Extrenal Files
#include <iomanip>
// Allows For The Use of Formatting of Output

using namespace std;
// Allows For The Use of Names For Objects And Variables From The Standard Library.

void Display();
// Declares A Method Called Display of Which The Body Is Made Later

    static ifstream theFile("movies.txt");
// Creates an ifstream Variable Called theFile
// ifstream Opens A File To Read It And Takes A Parameter Of The File Name
    static string movie;
// Creates An Undeclared String Variable Called Movie Which Holds Strings of Characters
    static int year;
// Creates An Undeclared Integer Variable Called Year Which Holds Whole Numbers
    static string genre;
// Static Allows The Variables To Be Used Throughout The Entire Program

int main(){
// Main Method
// Only Code Written or Declared In This Method Will Run

    cout << setw(20) << "Movie" << setw(20) << "Year" << setw(20) << "Genre" << endl << endl;
// This Will Display The Headings "Movie", "Year", "Genre" To The Screen
// Setw Formats The File So That There Are 20 Spaces In Between Each Line of Text

    Display();
// Calls The Display Method So That It Can Be Used In The Program

}

void Display(){
// Creates A Function Called Display Which Displays The Movies And Their Information On The Screen
// The Function Has No Return Value Which Is Why It Is Void

while(theFile >> movie >> year >> genre){
// Checks To See If The File Has The Format Of Movie, Year, And Genre And While It Does, It Will Repeatedly Run The Code Inside The Body

        cout << setw(20) << movie << setw(20) << year << setw(20) << genre << endl;

    }

}

