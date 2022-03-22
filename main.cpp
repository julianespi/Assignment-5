// Julian Espinoza
// Wesley Goo
// Hamza Patel
// Arturo Islas Mejia
// Date: 3/7/2022

#include <iostream>
#include <stack>
#include <iomanip>
#include <iterator>
#include <cmath>
#include <string>
#include <list>
#include <cstring>
#include <sstream>
#include <chrono>
#include <vector>
#include <fstream>
#include "input.h"
#include "Student.h" 
#include"vectorContainer.h"
#include "application.h"
#include "listContainer.h"


using namespace std;

int mainMenuOption();

int main()
{
    do
    {
        switch (mainMenuOption())
        {
        case 0: exit(1); break;
        case 1: vectorContainer(); break;
        case 2: listContainer(); break;
        case 3: application(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

//Precondition:none
//PostCondition:displays the main menu
int mainMenuOption()
{
    cout << endl << "Chapter 5: Assignment by Group 2";
    cout << endl << "==========================================";
    cout << endl << "1. Vector container";
    cout << endl << "2. List container";
    cout << endl << "3. Application using Vector and/or List container";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 3);
    cout << endl << endl << endl;
    return options;
}
