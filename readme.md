📋 Task Manager (C++ CLI Application)

Assignment 1 for the subject **SCD (Software Construction & Development)**.  
This repository contains a **console-based Task Manager** written in **C++**, designed using modular principles and capable of performing complete CRUD operations, filtering, and persistent task management.

---

## ✨ Features

- Add new tasks with a title, description, and due date
- View all tasks with full details (ID, title, status, creation date, due date)
- Update task title and description
- Delete tasks by ID
- Mark tasks as completed or incomplete
- Filter tasks by status (completed/incomplete)
- Save and load tasks using file I/O for persistence

---

## 🛠️ Installation & Setup

### 1. Clone the Repository

```bash
git clone https://github.com/YourUsername/Task-Manager-Cpp.git
cd Task-Manager-Cpp
2. Compile the Code
Make sure you have g++ installed.

bash
Copy
Edit
g++ -std=c++11 -o task_manager main.cpp task_manager.cpp ui.cpp storage.cpp filter.cpp search.cpp date.cpp
3. Run the Application
bash
Copy
Edit
./task_manager
📂 File Structure
text
Copy
Edit
Task-Manager-Cpp/
│
├── main.cpp              # Entry point of the application
├── task_manager.cpp      # Contains TaskManager class definition and task operations
├── task_manager.h
├── task.cpp              # Defines Task class and methods
├── task.h
├── ui.cpp                # Handles all CLI menus and user prompts
├── ui.h
├── storage.cpp           # Responsible for saving and loading tasks from file
├── storage.h
├── filter.cpp            # Functions for filtering tasks by status
├── filter.h
├── search.cpp            # Task search functionality by ID
├── search.h
├── date.cpp              # Date validation and formatting utilities
├── date.h
│
├── tests/                # Unit test files (see below)
│   ├── test_task_manager.cpp
│   └── test_task.cpp
│
├── tasks.txt             # Data file for saving tasks
├── README.md             # Project documentation (this file)
├── SRS.md                # Software Requirements Specification
├── developer_guide.md    # Documentation for developers
├── user_guide.md         # User manual with feature usage
└── Makefile              # (Optional) For automated compilation
🚀 Usage Guide
Once the app is running, follow the menu options to:

Add a new task

View all tasks

Update a task

Delete a task

Mark a task as completed/incomplete

Filter tasks

Exit

All data will be saved to tasks.txt.

🧪 Unit Testing
Unit tests are written in C++ using the doctest or Google Test framework (choose one).

✅ Running Tests
Option 1: Using Google Test

bash
Copy
Edit
g++ -std=c++11 -o run_tests tests/test_task_manager.cpp task_manager.cpp task.cpp -lgtest -lpthread
./run_tests
Option 2: Using Doctest

bash
Copy
Edit
g++ -std=c++11 -o run_tests tests/test_task_manager.cpp task_manager.cpp task.cpp
./run_tests
Test coverage includes:

Task creation and manipulation

TaskManager operations (add, delete, update)

File I/O handling

Filter and search functions

📄 Documentation
SRS.md: Software Requirements Specification

developer_guide.md: Architecture overview and module documentation

user_guide.md: User-facing instructions for CLI usage

🎯 Future Enhancements (Optional Bonus)
Add a simple GUI using Qt or ImGui

Use SQLite or binary file for persistent storage

Implement task priorities and categories

👨‍💻 Author
Your Full Name
Email: your.email@example.com
GitHub: @YourUsername

📜 License
This project is developed for academic purposes and is currently not under any open-source license. You may reuse or extend it with proper acknowledgment.

yaml
Copy
Edit

---











