Address Book Management System

A simple Address Book Management System developed in C that allows users to store, manage, search, edit, and delete contact information.

📌 Features

- Add a new contact
- Display all contacts
- Search for a contact
- Edit contact details
- Delete a contact
- Validate contact information
- Save contacts to a CSV file
- Load contacts from a CSV file
- Persistent contact storage

🛠️ Technologies Used

- C Programming
- File Handling
- Structures
- Functions
- String Handling
- CSV File Handling

📂 Project Structure

Address-Book/
│
├── main.c
├── contact.h
├── createcontact.c
├── deletecontact.c
├── displayallcontacts.c
├── editcontact.c
├── loadcontact.c
├── savecontact.c
├── searchcontact.c
├── validate.c
├── contact.csv
└── README.md

⚙️ Compilation

Compile the project using GCC:

gcc main.c createcontact.c deletecontact.c displayallcontacts.c editcontact.c loadcontact.c savecontact.c searchcontact.c validate.c -o addressbook

▶️ Run

On Linux/macOS:

./addressbook

On Windows:

addressbook.exe

📋 Operations

The application provides a menu-driven interface where the user can:

1. Create a contact
2. Search for a contact
3. Edit a contact
4. Delete a contact
5. Display all contacts
6. Save contacts
7. Exit

💾 Data Storage

Contact information is stored in a CSV file:

contact.csv

This allows the contacts to remain available even after the application is closed.

🎯 Concepts Practiced

This project helped in practicing:

- Structures
- Pointers
- Functions
- Arrays
- Strings
- File handling
- Modular programming
- Input validation
- Searching and updating records
- Git and GitHub

👨‍💻 Author

Kancharla Giri Babu

📄 License

This project is created for learning and educational purposes.
