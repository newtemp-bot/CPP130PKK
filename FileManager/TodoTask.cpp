#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// Base class: Menu
class Menu {
public:
    virtual void displayMenu() = 0; // Pure virtual function
};

// Derived class: ToDo
class ToDo : public Menu {
private:
    const string filename = "tasks.txt";

public:
    void displayMenu() override {
        int choice;
        do {
            cout << "\n===== TO-DO LIST MENU =====\n";
            cout << "1. Add Task\n";
            cout << "2. View Tasks\n";
            cout << "3. Delete a Task\n";
            cout << "4. Clear All Tasks\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore(); // Clear newline character

            switch (choice) {
                case 1: addTask(); break;
                case 2: viewTasks(); break;
                case 3: deleteTask(); break;
                case 4: clearTasks(); break;
                case 5: cout << "Exiting program. Goodbye!\n"; break;
                default: cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 5);
    }

    void addTask() {
        string task;
        cout << "Enter the task description: ";
        getline(cin, task);

        ofstream file(filename, ios::app); // Open in append mode
        if (file.is_open()) {
            file << task << "\n";
            file.close();
            cout << "Task added successfully!\n";
        } else {
            cerr << "Error: Unable to open file for writing.\n";
        }
    }

    void viewTasks() {
        ifstream file(filename);
        string task;
        int taskNumber = 1;

        if (file.is_open()) {
            cout << "\n===== YOUR TO-DO LIST =====\n";
            bool isEmpty = true;

            while (getline(file, task)) {
                cout << taskNumber++ << ". " << task << "\n";
                isEmpty = false;
            }
            if (isEmpty) cout << "Your to-do list is empty.\n";

            file.close();
        } else {
            cerr << "Error: Unable to open file for reading.\n";
        }
    }

    void deleteTask() {
        ifstream file(filename);
        ofstream tempFile("temp.txt");
        string task;
        int taskNumber, currentNumber = 1;
        bool taskDeleted = false;

        cout << "Enter the task number to delete: ";
        cin >> taskNumber;
        cin.ignore(); // Clear newline character

        if (file.is_open() && tempFile.is_open()) {
            while (getline(file, task)) {
                if (currentNumber == taskNumber) {
                    cout << "Task " << taskNumber << " deleted successfully!\n";
                    taskDeleted = true;
                } else {
                    tempFile << task << "\n";
                }
                currentNumber++;
            }
            file.close();
            tempFile.close();

            remove(filename.c_str());
            rename("temp.txt", filename.c_str());

            if (!taskDeleted) {
                cout << "Task number " << taskNumber << " not found.\n";
            }
        } else {
            cerr << "Error: Unable to open file.\n";
        }
    }

    void clearTasks() {
        ofstream file(filename, ios::trunc); // Open file and truncate content
        if (file.is_open()) {
            file.close();
            cout << "All tasks have been cleared!\n";
        } else {
            cerr << "Error: Unable to clear tasks.\n";
        }
    }
};

// Main Function
int main() {
    ToDo todoApp;
    todoApp.displayMenu();
    return 0;
}
