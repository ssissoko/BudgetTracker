//Budget Tracker
//ssissoko
#include <iostream>
using namespace std;
//user inputs
int budget = 0;
int total = 0;
int food = 0;
int basics = 0;
int main() {
    do{
        cout << "Welcome to 2H budget tracker. What is your current spending limit?";
    cin >> budget;
    }while(budget<=0);
return 0;
}

