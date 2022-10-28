//Alternative Method Dr_T Rectangle Class per Gaddis
//Fork off of this solution:
//https://repl.it/@TysonMcMillan/DRTRectangleClassAlternativeMethod
//method Definitions occur withing the class declaration
//A default constructor is written to inialize members
// A parameterized constructor is also shown
//Notice how this method is much more concise compared to scope resolution method
//Student Name: 4-01-2020, updated by Dr. T 10-27-2022
#include <iostream>
using namespace std; 

//class definitions 
class Rectangle
{
  private:
    double width;
    double length;
  public:        //function prototypes for the member functions 
    //default constructor 
    Rectangle() 
    { 
      //called when Rectangle r; is instantiated ( see int main() )
      cout << "\nDefault constructor called" << endl; 
      //set initial values for the private members
      width = 0.0;
      length = 0.0; 
    }
    //paramaterized constructor
    Rectangle(double w, double l) 
    {  
      //called when Rectangle rect(3.5,2.7); is instantiated  ( see int main() ) 
      cout << "\nParameterized constructor called" << endl; 
       //set initial values for the private members
      width = w;
      length = l; 
    }
    void setWidth(double w){ width = w; }
    void setLength(double l) { length = l; }
    double getWidth() const { return width; } //return the private attribute, width
    double getLength() const { return length; } //return the private attribute, length
    double getArea() const {  return (length * width); } //calculate area 
};

int main() 
{
  //local variables 
  double wLocal = 0.0;
  double lLocal = 0.0; 

  //********Working with the Default constructor********/
  Rectangle r;  //r is an instance of the class Rectangle, an object
  cout << "\nCurrent width " << r.getWidth() << endl; 
  r.setWidth(5.2); //set the private member with to 5.2 via the public setter
  cout << r.getWidth()<< endl; //print the current value of the private width

  //Dr_T Challenge 1 set the r's length to 7.8
  r.setLength(7.8); 

  //print the length on screen
  cout << r.getLength() << endl; 

  //print the statment on screen (use) getArea here
  cout << "The area of a rectangle with " 
       << "Width = " << r.getWidth() 
       << " and length = " << r.getLength() 
       << " is " << r.getArea() << endl; 

//********Working with the Parameterized constructor********/
Rectangle rect(3.5,2.7);

//Dr_T Challenge 2 

//print the current width and length of rect to the screen 
cout << "rect's width: " << rect.getWidth() << endl; 
cout << "rect's length: " << rect.getLength() << endl; 

// set the rect's length to 7.8
rect.setLength(7.8); 
  //print the length on screen
cout << rect.getLength() << endl; 

  //print the statement on screen (use) getArea here
  cout << "The area of a rectangle with width = " 
       << rect.getWidth() << " and "
       << "length = " << rect.getLength() << " is "
       << rect.getArea() << endl; 

  //Accept input from the user and call the para. const.
  cout << "\nPlease enter a W: ";
  cin >> wLocal; //accept input from the user

  cout << "\nPlease enter a L: "; 
  cin >> lLocal; 

  //instantiate a new Rectangle based upon user input
  Rectangle room(wLocal, lLocal);

   //print the statement on screen (use) getArea here
  cout << "The area of a rectular room with width = " 
       << room.getWidth() << " and "
       << "length = " << room.getLength() << " is "
       << room.getArea() << endl; 
    
  /*
    Dr. T Challenge
    1) Expand the program to calculate the area of a Hexagon give that 
    Area of hexagon = (3√3 s^2)/2
    2) Create a class Hexagon by the alternative method
    3) Accept input for a local int main() variable for side
    4) Calculate the area given input of the side. 
    5) via a void show() method member of the Hexagon class, 
     Draw the hexigon on screen with star patterns: given this cool example: 
    https://www.sololearn.com/compiler-playground/cVzNeFm1fapB/#cpp
    6) Change the color of the hexigon to a color or colors of your choice. 
    7) Loop the hexigon program unitl -1 is provided for input
     Set -2 as the option to clear the screen. 
    8. //upload the share URL to extra credit item 15
    9. //complete the attendance tracker
  */
   //add this code pattern to your void show() function for the hexigon 
   //code from: https://www.sololearn.com/compiler-playground/cVzNeFm1fapB/#cpp
   int length = 0;
    cout << "Enter the size of the hexagon" << endl;
    cin >> length;
    for(int i = 0, k = length, l = 2 * length - 1; i < length; ++i, --k, ++l)
    {
        for(int j = 0; j < 3 * length; ++j)
        {
            if(j >= k && j <= l)
            cout << "*";
            else
            cout << " ";
        
        }
        cout << endl;
    }
    
    for(int i = 0; i < length; ++i)
    {
        for(int j = 0; j < 3*length; ++j)
        cout << "*";
        cout << endl;
    }
    
    for(int i = 0, k = 1, l = 3 * length - 2; i < length; ++i, ++k, --l)
    {
        for(int j = 0; j < 3 * length; ++j)
        {
            if(j >= k && j <= l)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
  return 0;   
}