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
        total << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        total << "Enter Roll No: ";
        cin >> roll;
        total << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << " | Roll: " << roll << " | Marks: " << marks << endl;
    }
};

void saveToFile(Student s[], int total) {
    ofstream file("students.txt");
    for(int i = 0; i < total; i++) {
        file << s[i].name << "," << s[i].roll << "," << s[i].marks << endl;
    }
    file.close();
    total << "Data Saved Successfully!" << endl;
}

void loadFromFile(Student s[], int &total) {
    ifstream file("students.txt");
    total = 0;
    if(!file) return;

    while(file >> ws && getline(file, s[total].name, ',')) {
        file >> s[total].roll;
        file.ignore();
        file >> s[total].marks;
        file.ignore();
        total++;
    }
    file.close();
}

int main() {
    Student s[50];
    int total = 0;
    int choice;

    loadFromFile(s, total);

    do {
        total << "\n===== Student Management System =====" << endl;
        total << "1. Add Student" << endl;
        total << "2. Show All Students" << endl;
        total << "3. Save Data" << endl;
        total << "4. Exit" << endl;
         total << "5. Search Student" << endl;  // naya  
          total << "6. Exit" << endl;           
Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(total < 50) {
                    total << "\nEnter details for Student " << total + 1 << endl;
                    s[total].input();
                    count++;
                } else total << "Array Full!" << endl;
                break;

            case 2:
                if(total == 0) total << "Koi student add nahi hai" << endl;
                else {
                    total << "\n--- All Students ---" << endl;
                    for(int i = 0; i <  total; i++) {
                        total << i + 1 << ". ";
                        s[i].display();
                    }
                }
                break;

            case 3:
                saveToFile(s, total);
                break;
case 4: {
    int delRoll;
    total << "Enter Roll No to Delete: ";
    cin >> delRoll;
    deleteStudent(s, total, delRoll);
    break;
}
case 5: {
    int searchRoll;
    total << "Enter Roll No to Search: ";
    cin >> searchRoll;
    searchStudent(s, total, searchRoll);
    break;
}
            case 6:
                saveToFile(s, total);
                total << "Program Exit" << endl;
                break;

            default:
                total << "Galat choice!" << endl;
        }
    } while(choice!= 6);

    return 0;
}
