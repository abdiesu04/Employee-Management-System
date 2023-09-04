#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Employee class definition
class Employee {
public:
    string name;
    string position;
    int age;
    string address;
    string email;
    string phone;

    // Display employee information
    void display() {
        cout << left << setw(20) << name << setw(20) << position << setw(5) << age << setw(30) << address << setw(30) << email << setw(15) << phone << endl;
    }
};

// Node class definition
class Node {
public:
    Employee employee;
    Node* next;
};

// Linked List class definition
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Add an employee to the linked list
    void add_employee() {
        Node* newNode = new Node();
        cout << "Enter employee name: ";
        cin >> newNode->employee.name;
        cout << "Enter employee position: ";
        cin >> newNode->employee.position;
        cout << "Enter employee age: ";
        cin >> newNode->employee.age;
        cout << "Enter employee address: ";
        cin.ignore();
        getline(cin, newNode->employee.address);
        cout << "Enter employee email: ";
        cin >> newNode->employee.email;
        cout << "Enter employee phone number: ";
        cin >> newNode->employee.phone;

        newNode->next = head;
        head = newNode;
        cout << "Employee added successfully!" << endl;
    }

    // Display all employees in the linked list
    void display_employees() {
        cout << left << setw(20) << "Name" << setw(20) << "Position" << setw(5) << "Age" << setw(30) << "Address" << setw(30) << "Email" << setw(15) << "Phone" << endl;
        Node* temp = head;
        while (temp != NULL) {
            temp->employee.display();
            temp = temp->next;
        }
    }

    // Search for an employee by name
    void search_employee() {
        string name;
        cout << "Enter employee name: ";
        cin >> name;
        Node* temp = head;
        while (temp != NULL) {
            if (temp->employee.name == name) {
                temp->employee.display();
                return;
            }
            temp = temp->next;
        }
        cout << "Employee not found!" << endl;
    }

    // Delete an employee by name
    void delete_employee() {
        string name;
        cout << "Enter employee name: ";
        cin >> name;
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        if (temp->employee.name == name) {
            head = head->next;
            delete temp;
            cout << "Employee deleted successfully!" << endl;
            return;
        }
        Node* prev = head;
        temp = head->next;
        while (temp != NULL) {
            if (temp->employee.name == name) {
                prev->next = temp->next;
                delete temp;
                cout << "Employee deleted successfully!" << endl;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        cout << "Employee not found!" << endl;
    }
};

// Login function
bool login() {
    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    if (username == "admin" && password == "admin") {
        cout << "Login successful!" << endl;
        return true;
    }
    cout << "Invalid username or password!" << endl;
    return false;
}

int main() {
    LinkedList emp_list;
    bool logged_in = login();
    while (logged_in) {
        cout << "ASTU School of Electrical Engineering and Computing Employee Management System" << endl;
        cout << "1. Add employee" << endl;
        cout << "2. View employees" << endl;
        cout << "3. Search employee" << endl;
        cout << "4. Delete employee" << endl;
        cout << "5. Apply for a job" << endl;
        cout << "6. List work description" << endl;
        cout << "7. Logout" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            emp_list.add_employee();
            break;
        case 2:
            emp_list.display_employees();
            break;
        case 3:
            emp_list.search_employee();
            break;
        case 4:
            emp_list.delete_employee();
            break;
        case 5:
            cout << "Please visit the ASTU website to apply for a job." << endl;
            break;
        case 6:
            cout << "Work descriptions are available on the ASTU website." << endl;
            break;
        case 7:
            logged_in = false;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    }
    return 0;
}
