#pragma once
void addInt(vector<int> &listOfInts)
{
    int newInt = inputInteger("Enter new int: ");
    listOfInts.push_back(newInt);
}

void deleteInt( vector<int> &listOfInts)
{
    int deleteInt = inputInteger("enter an intenget you want to delete: ");
    bool found = false;
    auto itr = listOfInts.begin();
    for (int i =0; i < listOfInts.size(); i++)
    {
        if (listOfInts[i] == deleteInt)
            found = true;   
    }
    listOfInts.erase(remove(listOfInts.begin(), listOfInts.end(), deleteInt), listOfInts.end());
    if (found == false)
        cout << "vector does not contain " << deleteInt << endl;
}

void displayInts(vector<int> listOfInts)
{
    for (int i = 0; i < listOfInts.size(); i++)
    {
        cout << listOfInts[i] << " ";
    }

    cout << endl;
}

void displayfreqency(vector<int> listOfInts)
{
    map<int, int> frequencies;
    map<int, int>::iterator itr;

    for (int i = 0; i < listOfInts.size(); i++)
    {
        frequencies.insert(pair <int, int>(listOfInts[i], 0));
    }

    for (itr = frequencies.begin(); itr != frequencies.end(); ++itr)
    {
        for (int i = 0; i < listOfInts.size(); i++)
        {
            if (itr->first == listOfInts[i])
            {
                itr->second += 1;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << setw(20) << "Number" << setw(20) << "Times Showed" << setw(20) << "Percent" << endl;
    int percent;
    double frecuencyNumber = 0;
    for (itr = frequencies.begin(); itr != frequencies.end(); ++itr)
    {
        frecuencyNumber = itr->second;
        percent = (itr->second / listOfInts.size());
        cout << setw(20) << itr->first << setw(20) << itr->second << setw(20) << (frecuencyNumber / listOfInts.size()) * 100 << "%" << endl;
    }
}

int applicationMenuOption()
{
    cout << endl << "3> Application using Vector and/or List container";
    cout << endl << "==========================================";
    cout << endl << "1.  Add an integer";
    cout << endl << "2.  Delete an integer";
    cout << endl << "3.  Display input integers";
    cout << endl << "4.  Display frequencies of integers";

    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 4);
    cout << endl << endl << endl;
    return options;
}

void application()
{
    vector<int> listOfInts;
    do
    {
        switch (applicationMenuOption())
        {
        case 0: return; break;
        case 1: addInt(listOfInts); break;
        case 2: deleteInt(listOfInts); break;
        case 3: displayInts(listOfInts); break;
        case 4: displayfreqency(listOfInts); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
