#include <iostream>

using namespace std;

int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    string name;
    cout << "?????: ";
    getline(cin , name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    int ID;
    cin >> ID;
    cin.ignore();
    int gear = (ID / 10000000) - 12 ; 
    cout << "Fahsai: I think you may be GEAR " << gear <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    string movie;
    getline(cin , movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    string date;
    getline(cin , date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    cout << name << ": ";
    string temp;
    getline(cin , temp);
    cout << "Fahsai: 555+ see you "<< date <<". Bye Bye \\(^ ^)/";
}