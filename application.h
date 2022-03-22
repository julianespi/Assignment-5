#pragma once
void addInt(vector<int> &vectorOfInts)
{
    int newInt = inputInteger("Enter new int: ");
    vectorOfInts.push_back(newInt);
}

void deleteInt( vector<int> &vectorOfInts)
{
    int deleteInt = inputInteger("enter an intenget you want to delete: ");
    bool found = false;
    auto itr = vectorOfInts.begin();
    for (int i =0; i < vectorOfInts.size(); i++)
    {
        if (vectorOfInts[i] == deleteInt)
            found = true;   
    }
    vectorOfInts.erase(remove(vectorOfInts.begin(), vectorOfInts.end(), deleteInt), vectorOfInts.end());
    if (found == false)
        cout << "vector does not contain " << deleteInt << endl;
}

void displayInts(vector<int> vectorOfInts)
{
    for (int i = 0; i < vectorOfInts.size(); i++)
    {
        cout << vectorOfInts[i] << " ";
    }

    cout << endl;
}

void displayfreqency(vector<int> vectorOfInts)
{
    map<int, int> frequencies;
    map<int, int>::iterator itr;

    for (int i = 0; i < vectorOfInts.size(); i++)
    {
        frequencies.insert(pair <int, int>(vectorOfInts[i], 0));
    }

    for (itr = frequencies.begin(); itr != frequencies.end(); ++itr)
    {
        for (int i = 0; i < vectorOfInts.size(); i++)
        {
            if (itr->first == vectorOfInts[i])
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
        percent = (itr->second / vectorOfInts.size());
        cout << setw(20) << itr->first << setw(20) << itr->second << setw(20) << (frecuencyNumber / vectorOfInts.size()) * 100 << "%" << endl;
    }
}

int applicationMenuOption()
{
    cout << endl << "3> Application using Vector and/or vector container";
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
    vector<int> vectorOfInts;
    do
    {
        switch (applicationMenuOption())
        {
        case 0: return; break;
        case 1: addInt(vectorOfInts); break;
        case 2: deleteInt(vectorOfInts); break;
        case 3: displayInts(vectorOfInts); break;
        case 4: displayfreqency(vectorOfInts); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
