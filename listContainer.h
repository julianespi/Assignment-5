#pragma once
void clear(list<student> &studentInfo)
{
    studentInfo.clear();
}
void resize(list<student> &studentInfo)
{
    studentInfo.resize(inputInteger("Enter the size of the list you want: ", true));
}

void readDataFront(list<student> &studentInfo)
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
        studentInfo.push_front(buffer);
    }
    
}

void pop_front(list<student> &studentInfo)
{
    studentInfo.pop_front();
}

void front(list<student> studentInfo)
{
    cout << studentInfo.front() << endl;
}

void readDataBack(list<student> &studentInfo)
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

void pop_back(list<student> studentInfo)
{
    studentInfo.pop_back();
}

void back(list<student> studentInfo)
{
    cout << studentInfo.back() << endl;
}

void begin(list<student> studentInfo)
{
    list<student>::iterator ptr = studentInfo.begin();
        cout << *ptr << endl;
}

void end(list<student> studentInfo)
{

    list<student>::iterator ptr = studentInfo.end();
    ptr--; // to set iterator
    cout << *ptr << endl;
}

void returnAll(list<student> studentInfo)
{
    for (auto it = studentInfo.begin(); it != studentInfo.end(); it++)
    {
        cout << *it << endl;

    }
}
void rBegin(list<student> studentInfo)
{
    auto ptr = studentInfo.rbegin();
    cout << *ptr << endl;
}

void rEnd(list<student> studentInfo)
{
    auto ptr = studentInfo.rend();
    ptr--;
    cout << *ptr << endl;
}

void returnRAll(list<student> studentInfo)
{
    for (auto it = studentInfo.rbegin(); it != studentInfo.rend(); it++)
        cout << *it << endl;
}

void erase(list<student> &studentInfo)
{
    list<student>::const_iterator itr = studentInfo.begin();
    
}

void eraseFromTo(list<student> studentInfo)
{
    for (auto it = studentInfo.begin(); it != studentInfo.end(); it++)
    {
        studentInfo.erase(it);
    }
}

void inser(list<student> &studentInfo)
{
    student temp;
    temp.setName(inputString("Enter the name of the student: ", true));
    int option = inputInteger("Enter the his/her level (1-Freshman, 2-Sophmore, 3-Junior, or 4-Senior): ", 1,4);
    if (option == 1)
        temp.setGradeLevel("Freshman");
    else if (option == 2)
        temp.setGradeLevel("Sophmore");
    else if (option == 3)
        temp.setGradeLevel("Junior");
    else if (option ==4)
        temp.setGradeLevel("Senior");
    temp.setGPA(inputInteger("Enter his/her GPA (0.0..4.0):", 0, 4));
    studentInfo.push_back(temp);
}

void swap(list<student> &studentInfo)
{
    list<student> temp;

    cout << "list (l2) is initially empty." << endl;

    studentInfo.swap(temp);

    cout << "list (l1) is empty after swapped with list (l2)." << endl;

    if (temp.size() == 0)
        cout << " list (l2) is empty." << endl;
    else
        cout << " list (l2) now has " << temp.size() << " element(s)." << endl;
}

void sort(list<student> studentInfo)
{
    studentInfo.sort();

    for (auto it = studentInfo.begin(); it != studentInfo.end(); it++)
    {
        cout << *it << endl;

    }
}

int LlistMenuOption()
{
    cout << endl << "2> List container";
    cout << endl << "==========================================";
    cout << endl << "1.  clear() - Destroys all elements from the list";
    cout << endl << "2.  resize(n) - Changes the list so that it contains n elements";
    cout << endl << "3.  Read input.dat and push_front(e) - Adds a new element at the front of the list";
    cout << endl << "4.  pop_front() - Deletes the first element";
    cout << endl << "5.  front() - Accesses the first element";
    cout << endl << "6.  Read input.dat and push_back(e) - Adds a new element at the end of the list";
    cout << endl << "7.  pop_back() - Delete the last element";
    cout << endl << "8.  back() Accesses the last element";
    cout << endl << "9.  begin() - Returns an iterator refereing to the first element in the list";
    cout << endl << "10. end() Returns an iterator referring to the past-the-end element in the list";
    cout << endl << "11. Using iterator begin() and end() returns all elements in the list";
    cout << endl << "12. rbegin() - Returns a reverse iterator pointing to the last element in the list";
    cout << endl << "13. rend() - Returns a reverse iterator pointing to the element preceding the first element" << endl
        << "    in the list";
    cout << endl << "14. Using iterator rbegin() and rend() returns all elements in the list";
    cout << endl << "15. erase(it) - Removes from the vector a single element(using an iterator)";
    cout << endl << "16. erase(start_it,end_it) - Removes from the vector a range of elements( using iterators)";
    cout << endl << "17. insert(it, entry) - Insert a new entry at the iterator.";
    cout << endl << "18. swap() - Exchanges the content of the container by another list's content of the same type";
    cout << endl << "19. Sort - Sorts the list";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 19);
    cout << endl << endl << endl;
    return options;
}

void listContainer()
{
    list<student> studentInfo;
    do
    {
        switch (LlistMenuOption())
        {
        case 0: return; break;
        case 1: clear(studentInfo); break;
        case 2: resize(studentInfo); break;
        case 3: readDataFront(studentInfo); break;
        case 4: pop_front(studentInfo); break;
        case 5: front(studentInfo); break;
        case 6: readDataBack(studentInfo); break;
        case 7: pop_back(studentInfo); break;
        case 8: back(studentInfo); break;
        case 9: begin(studentInfo); break;
        case 10: end(studentInfo); break;
        case 11: returnAll(studentInfo); break;
        case 12: rBegin(studentInfo); break;
        case 13: rEnd(studentInfo); break;
        case 14: returnRAll(studentInfo); break;
        case 15: erase(studentInfo); break;
        case 16: eraseFromTo(studentInfo); break;
        case 17: inser(studentInfo); break;
        case 18: swap(studentInfo); break;
        case 19: sort(studentInfo); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
