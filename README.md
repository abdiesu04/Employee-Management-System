# Employee Management System using Linked List

This is a console-based Employee Management System implemented in C++ using a linked list data structure. The program allows users to perform various operations on a list of employee records. It provides functionalities such as adding employees, viewing all employees, searching for an employee by name, and deleting an employee.

## Features

- **Add Employee**: Users can add a new employee to the system by entering their name, position, age, address, email, and phone number. The employee record is then added to the linked list.

- **View Employees**: The program displays a list of all employees in a tabular format, showing their name, position, age, address, email, and phone number. It traverses the linked list and prints the details of each employee.

- **Search Employee**: Users can search for an employee by providing their name. The program iterates through the linked list and compares the name of each employee with the given name. If a match is found, the employee's information is displayed.

- **Delete Employee**: Users can delete an employee from the system by providing their name. The program searches for the employee in the linked list and removes the corresponding node if found.

- **Login Functionality**: The program includes a basic login system where the user is prompted to enter a username and password. The default login credentials are "admin" for both the username and password.

## Implementation Details

The program consists of the following classes:

- `Employee`: Represents an employee and stores their name, position, age, address, email, and phone number. It also includes a `display()` function to print the employee's information.

- `Node`: Represents a node in the linked list and contains an instance of the `Employee` class as well as a pointer to the next node.

- `LinkedList`: Implements the linked list functionality. It has a `head` pointer that points to the first node in the list. The class includes methods for adding an employee, displaying all employees, searching for an employee, and deleting an employee.

The main function handles the program's flow, including the login process and menu-driven interface. It creates an instance of the `LinkedList` class to manage the employee records.

## Usage

1. Clone the repository or download the source code files.

2. Compile the program using a C++ compiler.

3. Run the compiled executable.

4. Enter the username and password when prompted. The default credentials are "admin" for both.

5. Once logged in, choose an option from the menu to perform the desired operation.

6. Follow the instructions provided by the program to add employees, view employees, search for an employee, delete an employee, or perform other actions.

7. To logout, select the "Logout" option from the menu.

## Dependencies

The program does not have any external dependencies other than the standard C++ libraries.

## Contributing

Contributions to the project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the project's GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

The Employee Management System project is a simple implementation intended for educational purposes. It demonstrates the use of linked lists for managing employee records.
