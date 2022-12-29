#include <iostream>
using namespace std;
int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"
         << "\n";
    string name;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name."
         << "\n";

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"
         << "\n";
    cout << name << ": ";
    string id;
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << char((id[0]) - 1) << char((id[1]) - 2) << ". "
         << "I have a free movie ticket for you."
         << "\n";
    cout << "Fahsai: Let's go to the cinema together!!!"
         << "\n"
         << "Fahsai: What movie do you want to watch?"
         << "\n";

    string mov;
    cout << name << ": ";
    getline(cin, mov);

    cout << "Fahsai: So....which day are you free to go with me?"
         << "\n";
    string day;
    cout << name << ": ";
    getline(cin, day);

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mov << " with you."
         << "\n";

    cout << name << ": ";
    string text;
    getline(cin, text);

    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
}



    