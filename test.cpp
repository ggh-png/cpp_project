
// CPP Random Number Genrtator ---------------------------------------------------------------------------------------

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <random>

// using namespace std;


// int main()
// {
//     std::random_device rd;
//     std::mt19937 mersenne(rd());
//     std::uniform_int_distribution<> dice(1, 6);

//     for (int count = 1; count <= 20; ++count)
//         cout << dice(mersenne) << endl;
    
//     return 0;
// }

// cpp for --------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     for(int count = 0; count < 100000; ++count)
//     {
//         cout << count << endl;
//     }
// }

// CPP do while ---------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int selection;

//     do
//     {
//         cout << "1" << endl;
//         cout << "2" << endl;
//         cout << "3" << endl;
//         cout << "4" << endl;
//         cin >> selection;
//     } while (selection <= 0 || selection >= 5);

//     cout << "You selected " << selection << endl;
//     return 0;
// }

// cpp while --------------------------------------------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "test" << endl;
//     int count = 0;


//     while (count < 11)
//     {
//         cout << count << endl;
//         count++;
//     }

//     return 0;
// }

// cpp goto ----------------------------------------------------------------------------------------

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {

//     double x;

//     tryAgain :
//         cout << "Enter a non-nagative number" << endl;
//         cin >> x;
//         if (x < 0.0)
//             goto tryAgain;

//     cout << sqrt(x) << endl;
//     return 0;
// }


// cpp Switch-Case -------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;



// enum class Colors
// {
//     BLACK,
//     RED,
//     BLUE,
// };

// int main()
// {
//    int x;
//    cin >> x;

//    switch ((Colors)x)
//    {
//    case Colors::BLACK:
//         cout << "BLACK" << endl;
//         break;
//    case Colors::RED:
//         cout << "RED" << endl;
//         break;
//    case Colors::BLUE:
//         cout << "BLUE";
//         break;
//    default:
//     cout << "Undefined input " << x << endl;   
//    }

//    return 0;
// }

// cpp struct -----------------------------------------------------------------------------------

// #include<iostream>
// #include<string>

// using namespace std;

// struct Person
// {
//     double  height;
//     float   weight;
//     int     age;
//     string  name;

//     void print ()
//     {
//         cout << height << " " << weight << " " << age << " " << name;
//         cout << endl;
//     }
// };

// struct Family
// {
//     Person me, mom, dad;
// };

// Person getMe()
// {
//     Person me{2.0, 100.0, 20, "GGH"};
//     return me;
// }

// int main()
// {
//     Person me{1.82, 78.0, 22, "ggh"};
//     me.print();


//     Person me_from_func = getMe();
//     me_from_func.print();
//     return 0;
// }


// ver.1 ------------------------------------------


// #include<iostream>
// #include<string>

// using namespace std;

// struct Person
// {
//     double  height;
//     float   weight;
//     int     age;
//     string  name;

// };

// void printPerson (Person ps)
// {
//     cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//     cout << endl;
// }

// int main()
// {
//     Person me{1.82, 78.0, 22, "ggh"};
//     printPerson(me);
// }



// cpp Type aliases ------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// #include <cstdint>
// using namespace std;



// int main()
// {
//     typedef double distance_t;

//     distance_t  home_work;
//     distance_t  home_school;



//     // typedef vector<pair<string, int> > pairlist_t;    
//     typedef vector<pair<string, int> > pairlist_t;    
//     pairlist_t pairlist_1;
//     pairlist_t pairlist_2;
    
//     return 0;
// }

// cpp Scoped Enumerations (Fnum Class) ----------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     enum class Color
//     {
//         RED,
//         BLUE,
//     };

//     enum class Fruit
//     {
//         BANANA,
//         APPLE,
//     };
//     Color color_1 = Color::RED;
//     Color color_2 = Color::BLUE;
    
//     Fruit fruit = Fruit::BANANA;

//     if (color_1 != fruit)
//         cout << "Fruit is Color ??" << endl;

//     return 0;    
// }

// cpp Enumerated types ---------------------------------------------------------------------------

// #include <iostream>
// #include <typeinfo>

// using namespace std;

// enum Color // user-defind data types
// {
//     COLOR_BLACK,
//     COLOR_RED,
//     COLOR_BLUE,
//     COLOR_GREEN,
// };

// enum Felling
// {
//     HAPPY,
//     JOY,
//     TIRED,
// };
// int main()
// {
//     Color paint = COLOR_BLACK;
//     Color house (COLOR_BLACK);
//     Color apple {COLOR_RED};

//     return 0;
// }


// cpp std::string -----------------------------------------------------------------------------------

// ver.3 ---------------------------------

// #include <iostream>
// #include <string>
// #include<limits>
// using namespace std;

// int main()
// {
//     string a("hello, ");
//     string b("world!!! ");
//     string hw = a + b; // insert include <string> : append

//     hw += "I'm good!!!!!";

//     cout << hw << endl;

//     return 0;
// }



// ver.2 ----------------------------------------

// #include <iostream>
// #include <string>
// #include<limits>
// using namespace std;

// int main()
// {

//     cout << "Your age ? : ";
//     string age;
//     cin >>  age;

//     // std:: cin.ignore(32787, '\n'); // ver.1
//     std:: cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ver.2
    

//     cout << "Your name ? : ";
//     string name;
//     std:: getline(std::cin, name); // read in  endline 


//     cout << name << " " << age << endl;
    
//     return 0;
// }


// ver.1 ------------------------------------------------ 

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     cout << "Your name ? : ";
//     string name;
//     std:: getline(std::cin, name); // read in  endline 


//     cout << "Your age ? : ";
//     string age;
//     std:: getline(std::cin, age);

//     cout << name << " " << age << endl;
    
//     return 0;
// }

// cpp Auto Type Inference -----------------------------------------------------------------------------
// cpp 
// #include <iostream>

// using namespace std;

// auto add(int x, int y) -> int 
// {
//     return x + (double)y;
// }

// int main()
// {
//     auto a = 123;        //reset and insert 
//     auto d = 123.0;
//     auto c = 1 + 2.0;
//     auto result  = add(1, 2);

//     return  0;
// }

// cpp Global Variable, Inernal Variable, Static --------------------------------------------------------

// extern void doSomething();
/*

    int g_x; // exturnal linkage
    static int g_x; // internal linkage
    const int g_x; // x

    extern int g_x;
    exturn const int g_z;
    
    int g_y(1);
    static int g_y(1);
    const int g_y(1);

    exturn int g_w(1);
    exturn const int g_w(1);

*/

// #include <iostream>
// #include "value.cpp"

// using namespace std;

// int main()
// {
//     doSomething();
//     return 0;   
// }

// Static Variable ----------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// void dosomething()
// {
//     static int a =1;
//     a++;
//     cout << a << endl;

// }
// int main()
// {
//     dosomething();
//     dosomething();
//     return 0;
// }


// cpp Bit Flags, Bit masks ----------------------------------------------------

// Bit masks---------------------------

// #include <iostream>
// #include <bitset>
// using namespace std;

// int main()
// {
//     const unsigned int red_mask = 0xFF0000;
//     const unsigned int green_mask = 0x00FF00;
//     const unsigned int blue_mask = 0x0000FF;

//     unsigned int pixel_color = 0xDAA520;
//     cout << bitset<32>(pixel_color) << endl;

//     unsigned char red = (pixel_color & red_mask) >> 16;
//     unsigned char green = (pixel_color & green_mask) >> 8;
//     unsigned char blue = (pixel_color & blue_mask);

//     cout << "red!!!! " << bitset<8>(red) << " " << int(red) << endl;
//     cout << "green!!!! " << bitset<8>(green) << " " << int(green) << endl;
//     cout << "blue!!!! " << bitset<8>(blue) << " " << int(blue) << endl;

//     return 0;
// }
// Bit Flags ----------------------------------------------
// #include <iostream>
// #include <bitset>

// using namespace std;

// int main()
// {
//     const unsigned char option0 = 1 << 0; // 0000 0001
//     const unsigned char option1 = 1 << 1; // 0000 0010
//     const unsigned char option2 = 1 << 2; // 0000 0100 
//     const unsigned char option3 = 1 << 3; // 0000 1000 
//     const unsigned char option4 = 1 << 4; // 0001 0000 
//     const unsigned char option5 = 1 << 5; // 0010 0000 
//     const unsigned char option6 = 1 << 6; // 0100 0000 
//     const unsigned char option7 = 1 << 7; // 1000 0000
    
//     // 위에서 정의한 8가지 옵션을 위해 8비트를 사용한다. 
//     unsigned char myflags = 0; // all bits turned off to start
//     myflags |= option4; // turn option 4 on
//     myflags |= (option3 | option5 | option6); // turn option 4 on

//     cout << "Get item " << bitset<8>(myflags) << endl;

//     myflags &= ~option4;
//     cout << "Loss item " << bitset<8>(myflags) << endl;

//     // has item 3???
//     if(myflags & option3){cout << "Has item3" << endl;}
    
//     if((myflags & option5) && !(myflags & option1))
//     {
//         myflags ^= option5;
//         myflags ^= option1;
//     }
//     cout << "Loss item " << bitset<8>(myflags) << endl;

//     return 0;
// }

// cpp Bitwise Operators -------------------------------------------------------
// #include <iostream>
// #include <bitset>

// using namespace std;

// int main()
// {  
//     unsigned int a = 3;

//     cout << bitset<4>(a) << endl;

//     unsigned int b = a << 1;
//     cout << bitset<4>(b) << " " << b << endl;

//     return 0;
// }

// cpp Relational Operators -----------------------------------------------------
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     cout << "Your input values are : " << x << " " << y << endl;

//     if (x == y)
//     {
//         cout << "equal" << endl;
//     }
//     return 0; 
// }


// cpp conditional operator -----------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     // conditional operator (if)
//     bool onSale = true;
//     const int price;
//     cout << price = ((onSale == true) ? 10 : 100) << endl;
//     return 0;
// }


// cpp sizeof, comma Operator ------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     // comma operator

//     int x = 3;
//     int y = 10;
//     int z = (++x, ++y);

//     cout << x << " " << y << " " << z << endl; 
// }

// cpp increment / decrement ----------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main ()
// {
//     int x = 6, y = 6;

//     cout << x << " " << y << endl;
//     cout << ++x << " " << --y << endl;
//     cout << x << " " << y << endl;

//     cout << x++ << " " << y-- << endl;
//     cout << x << " " << y << endl;


//     return 0;
     
// }

// cpp Arithmetic Operators -------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 7;
//     int y = 4;
    
//     int z = x;

//     z += y; // z = z + y;

//     return 0;
// }

// cpp 2 ^ 3 -----------------------------------------------------------------------
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main ()
// {
//     int x = std::pow(2,3);

//     cout << x << endl;
    
//     return 0;
// }
// cpp Operator Precedence and Associativity -------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {

//     int x = 8 / 4 + 2 * 3;
//     cout << x << endl;
//     return 0;
// }




// cpp pi.h -----------------------------------------------------------------------
// #include <iostream>
// #include "my_constants.h"

// using namespace std;

// int main()
// {
//     double radius;
//     cin >> radius;
//     double circumference = 2.0 * radius * constants::pi;

//     cout << circumference << endl;

//     return 0;
// }



// cpp 3 literal-------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
//     int x = 0;
//     int y = (x > 0) ? 1 : 2;
//     cout << "Input number" << endl;
//     cin >> x;
//     cout << "x = " << y << endl; 
// }


//cpp symbolic constants--------------------------------------------------------

// #include <iostream>
// using namespace std;

// void ptrintNumber(int my_number)
// {
//     cout << my_number << endl;
// }

// int main()
// {
//     ptrintNumber
//     const double gravity{9.8};

// }

// cpp literal constants---------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x = 0b1100'1000'1111'0010;
//     cout << x << endl;
//     return 0;
// }

// cpp casting--------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int main()
// {
// //     char c1 = 65;
// //     char c2('A');
// //     cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

// // // c casting ===================================
// //     cout << (char)65 << endl; 
// //     cout << (int)'A' << endl; 

// // // cpp casting ===================================

// //     cout << char(65) << endl; 
// //     cout << int('A') << endl; 
 
// //     cout << static_cast<char>(65) << endl;
// //     cout << static_cast<char>('A') << endl;
//     // char ch(97);
//     // cout << ch << endl;
//     // cout << static_cast<int>(ch) << endl;
//     // cout << ch << endl;    
//     // char c1(65);

//     // cin >> c1;
//     // cout << c1 << " " << static_cast<int>(c1) << endl;
    
//     // cin >> c1;
//     // cout << c1 << " " << static_cast<int>(c1) << endl;
 
//     // cin >> c1;
//     // cout << c1 << " " << static_cast<int>(c1) << endl;
//     return 0;
// }

// cpp fixed width integer ----------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     std::int16_t i (5);
//     std::int8_t myint = 65;
    
//     cout << myint << endl;

//     std::int_fast8_t fi(5);
//     std::int_fast64_t fl(5);
    
    
// }

// cpp integers type
// # include <iostream>
// using namespace std;

// int main()
// {
//     cout << float (22) /4 << endl;
// }



//  CPP data type  ----------------------------------------------------------------------------------
//  #include <iostream>
//  using namespace std;

//  int main ()
//  {
//      bool bValue = false;
//      char chValue = 65;
//      float fValue = 3.141592f;
//      double dValue = 3.141592;

//      auto aValue = 3.141592;
//      auto aValue2 = 3.141592f;  // auto : data type audo set
//      auto aValue3 = "hello world";


//     int i = (int)3.1415;// copy initialization 
//     int a(123);     // direct initialization
//     int b{ 123 };   // uniform initialization

//     int k = 1, l = 2, m = 3;
    
//     return 0;
//  }

// cpp define -----------------------------------------------------------------
// #include <iostream>
// using namespace std;

// #define MAX(a, b) (((a) > (b) ? (a) : (b)))

// int main ()
// {
//     cout << MAX(1 + 4, 2) << endl;

//     return 0;
// }

// cpp header -------------------------------------------------------------------------
// #include <iostream>
// #include "add.h" 
// using namespace std;


// int main ()
// {
//     cout << add (1, 2) << endl;
//     return 0;
// }

// // cpp declaration ---------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int add (int a, int b);
// int multy (int a, int b);
// int sub (int a, int b);

// int main()
// {
//     cout << add(1, 2) << endl;
//     cout << multy(1, 2) << endl;
//     cout << sub(1, 2) << endl;
    
// }

// int add (int a, int b)
// {
//     return a + b;
// }

// int multy (int a, int b)
// {
//     return a * b;
// }
// int sub (int a, int b)
// {
//     return a - b;
// }
