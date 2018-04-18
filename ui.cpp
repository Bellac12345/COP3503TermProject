#include"ui.h"
#include "stdafx.h"
#include<vector>

//ui/formatting stuff
#include <iostream>
using namespace std;

class Graphs
{
private:
    vector<string> categoryNames;
    vector<int> moneyAmount;

public:
    void ratioData(vector<int>);//what inputs, and should it output a vector or smth? should it be completely fleshed out up here since won't change?
    void cropData(vector<int>);//should be completely fleshed out up here?
    void printGraph();
};

void Graphs::ratioData(vector<int> money) {

}
// ratio
void Graphs::cropData(vector<int> money) {

}

class BarGraph : public Graphs
{
public:
    void printGraph()
    {
    }
};

class PieGraph : public Graphs
{
public:
    void printGraph()
    {

    }
};

class UserInterface
{
public:
    void welcomeMenu(); //do they want to create a new budget or use an existing budget?
    void closingScreen();
    void userMenu();
    //if choose sort->sorting menu in sorting
    //take in input
    void clearScreen();

};

void UserInterface::welcomeMenu(){
    bool validInput = false;
    while(!validInput) {
        string welcomeInput;
        cout << "1. Create New Budget\n";
        cout << "2. Change Existing Budget\n";
        cout << "3. Use Existing Budget\n";
        cout << "4. Exit Program\n";
        cin >> welcomeInput;
        validInput = inputChecker(welcomeInput);
        if(!validInput){
            cout << "Invalid input please try again\n";
        }
        else{
            int numInput = stoi(welcomeInput);
            switch(numInput){
                case 1:
                    break;

                case 2:
                    break;

                case 3:
                    break;

                case 4:
                    break;

                default:
                    cout << "Invalid input please try again";
                    validInput = false;
        }
    }


}
void UserInterface::welcomeScreen(){
   cout <<" ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗\n";
    cout <<" ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝\n";
    cout <<" ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗\n";
    cout <<" ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝\n";
    cout <<" ╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗\n";
    cout <<" ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝\n";

}
void UserInterface::closingScreen() {
    cout <<" ██████╗  ██████╗  ██████╗ ██████╗ ██████╗ ██╗   ██╗███████╗██╗\n";
    cout <<" ██╔════╝ ██╔═══██╗██╔═══██╗██╔══██╗██╔══██╗╚██╗ ██╔╝██╔════╝██║\n";
    cout <<" ██║  ███╗██║   ██║██║   ██║██║  ██║██████╔╝ ╚████╔╝ █████╗  ██║\n";
    cout <<" ██║   ██║██║   ██║██║   ██║██║  ██║██╔══██╗  ╚██╔╝  ██╔══╝  ╚═╝\n";
    cout <<"╚██████╔╝╚██████╔╝╚██████╔╝██████╔╝██████╔╝   ██║   ███████╗██╗\n";
    cout <<"╚═════╝  ╚═════╝  ╚═════╝ ╚═════╝ ╚═════╝    ╚═╝   ╚══════╝╚═╝\n";
}

void UserInterface::userMenu() {
    bool validInput = false;
    while(!validInput) {
        string userMenuInput;
        cout << "1. Print\n";
        cout << "2. Change budget amount\n";
        cout << "3. Add expense or transcation\n";
        cout << "4. Delete expense or transaction\n";
        cout << "5. Sort\n";
        cout << "6. Save\n";
        cout << "7. Exit\n";
        cin >> userMenuInput;
        bool validInput = inputChecker(userMenuInput);
        if (!validInput) {
        cout >> "Invalid input please try again\n";
        }
        else {
            int numInput = stoi(userMenuInput);
            switch (numInput) {
                case 1:

                break;

                case 2:

                break;

                case 3:

                    break;

                case 4:

                    break;

                case 5:

                    break;

                case 6:
                    break;

                case 7: {
                    closingScreen();
                    return 0;
                }
                default:
                    cout << "Invalid input please try again";
                    validInput = false;

            }
        }

        }
    }
}


void UserInterface::clearScreen() {
    cout << string(50, '\n');
}

class DataFormatting
{
private:
    string cat1;
public:
    //what do they want printed -> function. Categories printed nearly? What's remaining in the budget as a 'battery' graph?
    void billReminder();
};

void DataFormatting::billReminder() {

}



bool inputChecker(string userInput) {
    bool isNum;
    for (int i = 0; i < userInput.length(); i++) {
        if (isdigit(userInput[i])) {
            isNum = true;
        } else {
            isNum = false;
        }
    }
    return isNum;
}



int main()
{
    return 0;
}
