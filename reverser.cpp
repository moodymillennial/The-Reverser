///////////////////////////////////////////////////////////////////
// Joshua Stromberg
// Input: User enters a number
// Output: Program displays a reverse of what the user entered
// Processes: Number user entered is run through a while loop
//            unter the number is completely reveresed using
//            math formulas to get the result that is desired.
//            However this formula I created only works for whole
//            numbers.
//////////////////////////////////////////////////////////////////
 
#include <iostream>
using namespace std;
 
int main()
{
    // here is where we declare what will be entered by the user,
    // starting point for our reverse number, and our remainder
     
    int userInput, reversedNumber = 0, remainder;
     
    //prompt user to enter a WHOLE number, since the formula only works with whole numbers
     
    cout << "Please enter a whole number integer: " << endl;
     
    cin >> userInput;
     
    // this while loop will continue running while the parts of the
    // number that the user has inputed is extracted and reveresed!
    // once the original user input has been completely extracted
    // it will equal zero, and the while loop will not run anymore
    while(userInput != 0)
    {
        remainder = userInput % 10;
         
        reversedNumber = reversedNumber * 10 + remainder;
         
        userInput /= 10;
    }
     
    // this is where the user will have their result revealed to them
    cout << "Reversed Number = " << reversedNumber << endl;
     
    return 0;
}
