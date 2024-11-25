#include <iostream>
using namespace std;

int main()
{
    // ---------------------------(RANDOMS)--------------------------

    /* int x = 20;
    x = 30;
    x = 40;
    x = 50;

    int x2 = 50;

    cout << x << " " << x2 << "\n";
    cout << x << " " << x2 << endl;

    const double Pi = 3.14;
    //Pi = 3.155; Error */

    //------------

    /* int age;
    string name;

    cout << "Enter ur Age pls: ";
    cin >> age;

    cout << "Enter ur Name pls: ";
    cin >> name;

    cout << "1- Hello, " << name << " Your Age is "<< age << endl;

    cout << "2- Hello, " << name;
    cout << " Your Age is " << age; */

    //------------

    /* cout << "Hello IEEE\n";
    cout << "from 47 MySpace" << endl;

    cout << "Hello\tIEEE" << endl;

    cout << "She Said: \"Hello\" " << endl;
    cout << "She Said: 'Hello' " << endl;
    cout << "She Said: \'Hello\' \n";

    cout << "She said: \"\tThis is Slash: \"\\\"\t\"\nAhmed";

    cout << "Hello, I'm Ahmed\a"; */

    //------------

    /* int num = 50;

    cout << num++ << endl; // print 50 || 50+1=51
    cout << num << endl; // print 51
    cout << ++num << endl; // 51+1=52 

    int num2 = 500;

    cout << num2-- << endl; // print 500 || 500-1=499=>(new value)
    cout << num2 << endl; // print 499
    cout << --num2 << endl; // 499-1=489 */

    // ----------------------------(APPS)----------------------------
    
    // 1-  Rectangle Area and Perimeter (Length, Width)

    /* float Length, Width;

    cout << "Enter the Length: ";
    cin >> Length;

    cout << "Enter the Width: ";
    cin >> Width;

    cout << "Area = " << Length * Width << endl;

    double Perimeter = 2 * (Length + Width);

    cout << "Perimeter = " << Perimeter << endl; */

    //---------------------------------------------------------------

    // 2- Circle Area and Perimeter (PI, Radius)

    /* const float Pi = 3.14;
    double Radius;
    
    cout << "Enter the Radius: ";
    cin >> Radius;

    double Area = Pi * Radius * Radius;
    double Perimeter = 2 * Pi * Radius;

    cout << "Area = " << Area << endl;
    cout << "Perimeter = " << Perimeter << endl; */

    //---------------------------------------------------------------

    // 3- Enter Your Name and Age, Then Say Hello to the user and print the age in Days, Hours, Minutes and Seconds

    /* string name;
    int age;

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "Hello, " << name << "\nYour Age is " << age << endl;

    int ageInDays = age * 365;
    int ageInHours = ageInDays * 24;
    int ageInMinutes = ageInHours * 60;
    long long ageInSeconds = ageInMinutes * 60;

    cout << "Age in Days: " << ageInDays << endl;
    cout << "Age in Hours: " << ageInHours << endl;
    cout << "Age in Minutes: " << ageInMinutes << endl;
    cout << "Age in Seconds: " << ageInSeconds << endl; */

    //---------------------------------------------------------------

    return 0;
}
