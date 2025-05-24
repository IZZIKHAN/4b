Developer Guide
📘 Overview
This document serves as a guide for developers contributing to the Task Manager project. It outlines the code structure, design principles, tools used, and guidelines for development and testing.

🧱 Project Structure
python
Copy
Edit
Task-Manager/
├── main.cpp                  # Entry point
├── task.cpp                  # Task class and logic
├── file_manager.cpp          # File operations
├── date_util.cpp             # Date handling utilities
├── search.cpp                # Search functionality
├── storage.cpp               # Storage management
├── filter.cpp                # Task filtering logic
├── test_task_manager.cpp     # Unit tests for TaskManager
├── test_task.cpp             # Unit tests for Task class
├── developer_guide.md        # Developer documentation
├── README.md                 # Project usage instructions
└── tasks.json                # Data storage file
🔧 Tools & Technologies
Language: C++

Compiler: g++ / clang++

Testing Framework: Custom or C++ assertions

Version Control: Git & GitHub

📐 Design Principles
Modular Design: Each core feature is separated into modules.

Separation of Concerns: Logic, UI, and data are independently managed.

Single Responsibility Principle (SRP): Each class/module has one responsibility.

Readable Code: Naming conventions and clear formatting are followed.

🔄 Development Workflow
Clone Repository:

bash
Copy
Edit
git clone https://github.com/YourUsername/Task-Manager.git
Compile the Program:

bash
Copy
Edit
g++ main.cpp task.cpp file_manager.cpp date_util.cpp search.cpp storage.cpp filter.cpp -o task_manager
Run the Application:

bash
Copy
Edit
./task_manager
Run Tests:

bash
Copy
Edit
g++ test_task.cpp -o test_task && ./test_task
g++ test_task_manager.cpp -o test_task_manager && ./test_task_manager
🧪 Testing Guidelines
Use assertions (assert()) to verify expected behavior.

Test edge cases such as:

Invalid task IDs

Empty fields

Past due dates

Write new test cases in test_task.cpp or test_task_manager.cpp for new features.

💡 Best Practices
Use const where applicable.

Keep functions small and focused.

Comment non-obvious logic.

Maintain consistency with indentation and naming.

Make atomic commits with meaningful messages.

🤝 Contributing
Fork the repository.

Create a new branch (feature/task-filtering).

Commit your changes.

Push and create a pull request.
