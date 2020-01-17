#include <iostream>
using namespace std;

int main()
{
    string name,movie,day,text;
    int ID,Gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name.";
    cout << "\nFahsai: I think you are Engineering student. What is your student ID?";
    cout << "\n" << name << ": ";
    cin >> ID;
    cin.ignore();
    Gear = (ID/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << Gear << " I have a free movie tickets for you.";
    cout << "\nFahsai: Let's go to cinema together!!!";
    cout << "\nFahsai: What movie do you want to watch?";
    cout << "\n" << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?";
    cout << "\n" << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watch " << movie << " with you.";
    cout << "\n" << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye" << "\\(^ ^)/";

}