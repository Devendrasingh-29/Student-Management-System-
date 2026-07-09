#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    float marks;

    void input() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << " | Roll: " << roll << " | Marks: " << marks << endl;
    }
};

void saveToFile(Student s[], int count) {
    ofstream file("students.txt");
    for(int i = 0; i < count; i++) {
        file << s[i].name << "," << s[i].roll << "," << s[i].marks << endl;
    }
    file.close();
    cout << "Data Saved Successfully!" << endl;
}

void loadFromFile(Student s[], int &count) {
    ifstream file("students.txt");
    count = 0;
    if(!file) return;

    while(file >> ws && getline(file, s[count].name, ',')) {
        file >> s[count].roll;
        file.ignore();
        file >> s[count].marks;
        file.ignore();
        count++;
    }
    file.close();
}

int main() {
    Student s[50];
    int count = 0;
    int choice;

    loadFromFile(s, count);

    do {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Save Data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(count < 50) {
                    cout << "\nEnter details for Student " << count + 1 << endl;
                    s[count].input();
                    count++;
                } else cout << "Array Full!" << endl;
                break;

            case 2:
                if(count == 0) cout << "Koi student add nahi hai" << endl;
                else {
                    cout << "\n--- All Students ---" << endl;
                    for(int i = 0; i < count; i++) {
                        cout << i + 1 << ". ";
                        s[i].display();
                    }
                }
                break;

            case 3:
                saveToFile(s, count);
                break;

            case 4:
                saveToFile(s, count);
                cout << "Program Exit" << endl;
                break;

            default:
                cout << "Galat choice!" << endl;
        }
    } while(choice!= 4);

    return 0;
}
