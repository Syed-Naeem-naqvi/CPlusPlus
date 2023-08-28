// Input and Output

// Prompt the user to enter their name and age, and display it

#include <iostream>
#include <string>
using namespace std;

int main(){

    int age = 0;                    // user age
    string name ="";                // user name
    
    cout << "Enter your name: \n";  // take user name
    cin >> name;                    // store name

    cout << "Enter your age: \n";
    cin >> age;

    cout << "Your name is" << name << "\n And you are " << age << " Years old";

    return 0;

}

