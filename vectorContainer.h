#pragma once
void Vclear(vector<student>& studentInfo)
{
    studentInfo.clear();
}

void Vreserve(vector<student>& studentInfo)
{

}

void Vresize(vector<student>& studentInfo)
{
    studentInfo.resize(inputInteger("Enter the size of the vector you want: ", true));
}



void VreadDataBack(vector<student>& studentInfo)
{
    student buffer;
    string fileName = inputString("Enter the name of the file: ", false);
    int newEmployeeIDIncrment = 0;
    string correctFile = "input.dat";


    cout << "loading file..." << endl;

    ifstream file1;
    file1.open(fileName, ios::in);
    if (file1.fail())
    {
        cout << "ERROR: file cannot be read, try " << correctFile << endl;
        return;
    }

    string temp;
    int tempInt = 0;
    while (!file1.eof())
    {
        getline(file1, temp, ',');
        buffer.setName(temp);
        getline(file1, temp, ',');
        buffer.setGradeLevel(temp);
        getline(file1, temp, '\n');
        buffer.setGPA(stod(temp));
        studentInfo.push_back(buffer);
    }
}

void Vpop_back(vector<student> studentInfo)
{
    studentInfo.pop_back();
}

void Vfront(vector<student> studentInfo)
{
    cout << studentInfo.front() << endl;
}

void Vback(vector<student> studentInfo)
{
    cout << studentInfo.back() << endl;
}

void VreturnAllIndex(vector<student> studentInfo)
{

}

void Vbegin(vector<student> studentInfo)
{
    vector<student>::iterator ptr = studentInfo.begin();
    cout << *ptr << endl;
}

void Vend(vector<student> studentInfo)
{

    vector<student>::iterator ptr = studentInfo.end();
    ptr--; // to set iterator
    cout << *ptr << endl;
}

void VreturnAll(vector<student> studentInfo)
{
    for (auto it = studentInfo.begin(); it != studentInfo.end(); it++)
    {
        cout << *it << endl;

    }
}
void VrBegin(vector<student> studentInfo)
{
    auto ptr = studentInfo.rbegin();
    cout << *ptr << endl;
}

void VrEnd(vector<student> studentInfo)
{
    auto ptr = studentInfo.rend();
    ptr--;
    cout << *ptr << endl;
}

void VreturnRAll(vector<student> studentInfo)
{
    for (auto it = studentInfo.rbegin(); it != studentInfo.rend(); it++)
        cout << *it << endl;
}

void Verase(vector<student>& studentInfo)
{
    vector<student>::const_iterator itr = studentInfo.begin();

}

void VeraseFromTo(vector<student> studentInfo)
{
    for (auto it = studentInfo.begin(); it != studentInfo.end(); it++)
    {
        studentInfo.erase(it);
    }
}

void Vinsert(vector<student>& studentInfo)
{
    student temp;
    temp.setName(inputString("Enter the name of the student: ", true));
    int option = inputInteger("Enter the his/her level (1-Freshman, 2-Sophmore, 3-Junior, or 4-Senior): ", 1, 4);
    if (option == 1)
        temp.setGradeLevel("Freshman");
    else if (option == 2)
        temp.setGradeLevel("Sophmore");
    else if (option == 3)
        temp.setGradeLevel("Junior");
    else if (option == 4)
        temp.setGradeLevel("Senior");
    temp.setGPA(inputInteger("Enter his/her GPA (0.0..4.0):", 0, 4));
    studentInfo.push_back(temp);
}

void Vswap(vector<student>& studentInfo)
{
    vector<student> temp;

    cout << "vector (l2) is initially empty." << endl;

    studentInfo.swap(temp);

    cout << "vector (l1) is empty after swapped with vector (l2)." << endl;

    if (temp.size() == 0)
        cout << " vector (l2) is empty." << endl;
    else
        cout << " vector (l2) now has " << temp.size() << " element(s)." << endl;
}

void Vsort(vector<student> studentInfo)
{

}

int LlistMenuOption()
{
    cout << endl << "2> vector container";
    cout << endl << "==========================================";
    cout << endl << "1.  clear() - Destroys all elements from the vector";
    cout << endl << "2.  reserve(n) - Requests that the vector capacity be at least enough to contain n elements";
    cout << endl << "3.  resize(n) - Resizes the container so that it contains n elements";
    cout << endl << "4.  Read input.dat and push_back(e) - Adds a new element at the end of the vector";
    cout << endl << "5.  pop_back() - Removes the last element in the vector";
    cout << endl << "6.  front() - Returns a reference to the first element in the vector";
    cout << endl << "7.  back() - Returns a reference to the last element in the vector";
    cout << endl << "8.  index using at() or []) - Returns a reference to the element at position n in the vector";
    cout << endl << "9.  begin() - Returns an iterator pointing to the first element in the vector";
    cout << endl << "10. end() Returns an iterator referring to the past-the-end element in the vector";
    cout << endl << "11. Using iterator begin() and end() returns all elements in the vector";
    cout << endl << "12. rbegin() - Returns a reverse iterator pointing to the last element in the vector";
    cout << endl << "13. rend() - Returns a reverse iterator pointing to the element preceding the first element" << endl
        << "    in the vector";
    cout << endl << "14. Using iterator rbegin() and rend() returns all elements in the vector";
    cout << endl << "15. erase(it) - Removes from the vector a single element(using an iterator)";
    cout << endl << "16. erase(start_it,end_it) - Removes from the vector a range of elements( using iterators)";
    cout << endl << "17. insert(it, entry) - Insert a new entry at the iterator.";
    cout << endl << "18. swap() - Exchanges the content of the container by another vector's content of the same type";
    cout << endl << "19. Sort - Sorts the vector";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 19);
    cout << endl << endl << endl;
    return options;
}

void vectorContainer()
{
    vector<student> studentInfo;
    do
    {
        switch (LlistMenuOption())
        {
        case 0: return; break;
        case 1: Vclear(studentInfo); break;
        case 2: Vreserve(studentInfo); break;
        case 3: Vresize(studentInfo); break;
        case 4: VreadDataBack(studentInfo); break;
        case 5: Vpop_back(studentInfo); break;
        case 6: Vfront(studentInfo); break;
        case 7: Vback(studentInfo); break;
        case 8: VreturnAllIndex(studentInfo); break;
        case 9: Vbegin(studentInfo); break;
        case 10: Vend(studentInfo); break;
        case 11: VreturnAll(studentInfo); break;
        case 12: VrBegin(studentInfo); break;
        case 13: VrEnd(studentInfo); break;
        case 14: VreturnRAll(studentInfo); break;
        case 15: Verase(studentInfo); break;
        case 16: VeraseFromTo(studentInfo); break;
        case 17: Vinsert(studentInfo); break;
        case 18: Vswap(studentInfo); break;
        case 19: Vsort(studentInfo); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
