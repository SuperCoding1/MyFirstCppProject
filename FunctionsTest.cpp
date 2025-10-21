#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    //Function Prototypes
    
    void displayMenu();
    double inchesToCm (double inches);
    double yardsToMeters (double yards);
    double milesToKilometers(double miles);
    
    
    
    // Define variables
    
    unsigned int userChoice;
    double userLength, convertedLength;
    
    // Call display function
    
    displayMenu();
    
    // Store user choice 
    
    cin >> userChoice;
    
    // Indetify what conversion the user whats to make
    
    if (userChoice == 1)
    {
        // Ask user to enter amount of inches to converte
        
        cout << endl;
        cout << "Enter the amount of inches to convert: ";
        cin >> userLength;
        
        // call function to convert inches to centimeters
        
        convertedLength = inchesToCm(userLength);
        
        // Display the length converted
        
        cout << fixed << setprecision(2);
        cout << "\n" << userLength << " inches converted to centimeters is: " << convertedLength << " cm";
    }
    else if (userChoice == 2)
    {
        
        // Ask the user to enter amount of yards to converted
        
        cout << endl;
        cout << "Enter the amount of yards to convert to meters: ";
        cin >> userLength;
        
        // Call function to convert yards to centimeters
        
        convertedLength = yardsToMeters(userLength);
        
        // Display the converted length
        
        cout << fixed << setprecision(2);
        cout << "\n" << userLength << " yards converted to meters is: " << convertedLength << " meters";
    }
    else if (userChoice == 3)
    {
        // Ask the user to enter amount of yards to converted
        
        cout << endl;
        cout << "Enter the amount of miles to convert to kilometers: ";
        cin >> userLength;
        
        // Call function to convert yards to centimeters
        
        convertedLength = milesToKilometers(userLength);
        
        // Display the converted length
        
        cout << fixed << setprecision(2);
        cout << "\n" << userLength << " miles converted to kilometers is: " << convertedLength << " kilometers";
    }
    else
    {
        cout << "\nINVALID CHOICE! \nPLEASE RESTART PROGRAM" << endl;
    }
    
    
    return 0;
}

/* A function that displays the menu for our conversion calculator. It also prompts the user 
   to enter their menu selection
*/

void displayMenu()
{
    cout << "\tConverion Calculator- Imperial to Metric" << endl;
    cout << "\t\t1 - Convert inches to centimeters" << endl;
    cout << "\t\t2 - Convert yards to meters" << endl;
    cout << "\t\t3 - Convert miles to kilometers" << endl;
    cout << endl;
    cout << "Enter the number of your convertion choice: ";
    return;
}

//A function that converts a length in inches to centimeters and returns the converted length
//Pararmeters: inches- A double that is the equivalent length in centimeters

double inchesToCm (double inches)
{
    double centimeters;
    const double CM_PER_INCH = 2.54;
    
    centimeters = inches * CM_PER_INCH;
    
    return (centimeters);
}

/*  Function that converts a length in  yards to meters and return the converted length
    Parameters: yards- A double that is then converted to meters
*/

double yardsToMeters (double yards)
{
    double meters;
    const double METERS_PER_YARD = 0.9144;
    
    meters = yards * METERS_PER_YARD;
    
    return (meters);
}

/*  Function that converts a length in miles to kilometers and returns the converted length.
    Parameters: miles- A double that is then converted to kilometers
*/

double milesToKilometers(double miles)
{
    double kilometers;
    const double KM_PER_MILE = 1.609;
    
    kilometers = miles * KM_PER_MILE;
    
    return (kilometers);
}
