//Budget Tracker
//ssissoko
#include <iostream>
using namespace std;
//user inputs
int budget = 0;
int total = 0;
int food = 0;
int basics = 0;
int rent = 0;
int grocery = 0;
int takeout = 0;
int entertainment = 0;
int shopping = 0;
int utilities = 0;
int choice = 3;

int main() {
    do {
        cout << "Welcome to 2H budget tracker. What is your current spending limit?" << endl;
        cin >> budget;
    } while (budget <= 0);
    
    do{
        cout << "Would you like to be in planning mode (1) or summary mode (2)?" << endl;
        cin >> choice;
    } while (choice >= 3 || choice < 1 );
    
    //Planning mode
     if (choice == 1){
        cout << "Welcome to Planning Mode" << endl;
    }
    //Summary mode
    else{
        cout << "Welcome to Summary Mode" << endl;
        cout << "Please input your rent expense: ";
        cin >> rent;
        cout << endl;
        cout << "Please input your utilities expense: ";
        cin >> utilities;
        cout << endl;
        cout << "Please input your grocery expense: ";
        cin >> grocery;
        cout << endl;
        cout << " How much do you spend on takeout?: ";
        cin >> takeout;
        cout << endl;
        cout << " How much do you spend on personal shopping?: ";
        cin >> shopping;
        cout << endl;
        //total breakdown
        total = rent + utilities + grocery + takeout + shopping;
        basics = rent + utilities + grocery;
        
        cout << "This month you have spent " << total << " dollars." << endl;
    }
return 0;
}

