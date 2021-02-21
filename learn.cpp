#include <iostream>
using namespace std;
/* Recommended - only include things from namespace you will be using,
e.g. string/vector etc. The way above includes all types of vars */

/* Data types - integers, floating point numbers, 
booleans, arrays, doubles, characters, strings */

// int example()
//     // cout <<"Hello world!\n";
//     // cout <<"I started the C++ crash course!\n";
//     // Data types
//     int age = 25; // Stores a whole number
//     float weight = 65.5; // Stores a decimal point number
//     double balance = 12345.67; // Double the float number
//     char gender = 'f'; // To assign a value to char, use ''
//     string username = "LittleBird"; // Use "" - letters, words, phrases or symbols
//     bool isTodaySunny = true;
//     string colors[10] = {"red", "green", "pink", "blue", "black"};
//     /* A collection of variables of certain type. Have to specify the type
//     In C++ the elements have to be of the same type.
//     Can declare the size of an array,
//     can declare a bigger size then there are elements and add the missing ones later*/
//     // cout<<colors[0];
//     // cin >> colors[0]; // cin - for user input
//     // cout << colors[0];

// int main()
// {
//     bool isTodaySunny = true;
//     bool isTodayWeekend = true;

//     // if (isTodaySunny)
//     // {
//     //     cout << "Go to the park" << endl;
//     // }

//     // else
//     // {
//     //     cout << "Take an umbrella" << endl;
//     // }

//     // if (isTodaySunny && isTodayWeekend) {
//     //     cout << "Go to the park" << endl;

//     // }
//     // else if (isTodayWeekend && !isTodaySunny) {
//     //     cout << "Go to the park, but take an umbrella" << endl;
//     // }

//     // else {
//     //     cout << "Go to work" << endl;

//     // }

//     // if (isTodayWeekend) {
//     //     if (isTodaySunny)
//     //     cout << "Go to the park" << endl;
//     //     else cout << "Go to the park, but take an umbrella" << endl;
//     // }
//     // else 
//     //     cout << "Go to work" << endl;
    

//     // isTodaySunny? cout << "Go to the park" : cout << "Take an umbrella";
// }


// enum EyeColor { Brown, Blue, Green, Gray, Other};
// int main () {
//     EyeColor eyeColor = Other;

//     switch (99)
//     {
//     case Brown: cout << "80% of people have Brown eyes."; 
//         break;
//     case Blue: cout << "10% of people have Blue eyes."; 
//         break;
//     case Green: cout << "2% of people have Green eyes."; 
//         break;
//     case Gray: cout << "1% of people have Gray eyes."; 
//         break;
//     case Other: cout << "7% of people have some other eye color."; 
//         break;
    
//     default:cout << "Not a valid eye color";
//         break;
//     }
// }

// int main () {
//     cout << "WHILE:\n";
//     int counter = 11;
//     while (counter <= 10) {
//         cout << counter << endl;
//         counter++;
//     }

//     cout << "DO-WHILE:\n"; // First does, then checks the condition
//     int doWhileCounter = 11;
//     do {
//         cout << doWhileCounter << endl;
//         doWhileCounter++;
//     }
//     while (doWhileCounter <= 10);

// }

// int main () {
//     // FOR loop - when you know, how many iterations you'll have
//     string animals[5] = {"cat", "dog", "cow", "goat", "bee"};
//     for (int i = 0; i < 5; i++) {
//         cout << animals[i] <<endl;
//     }

// }

float sum(float a, float b); // A function that returns a value
void introduceMe(string name, int age = 0); 
// A function that returns a void (with a default value);

int main () {
    cout << sum(2.2, 5) << endl;
    cout << sum(5.2, 3) << endl;
    cout << sum(4, 8) << endl;
    introduceMe("Liene", 27);
    introduceMe("Anna");


}

float sum(float a, float b) {
    return a + b;
}

void introduceMe(string name, int age) {
    cout << "My name is " << name << endl;
    cout << "I am " << age <<" years old" <<endl;

}
