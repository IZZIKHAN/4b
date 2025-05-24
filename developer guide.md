🧑‍💻 Developer Guide
Welcome to the Task Manager (C++) project! This guide will help you understand the code structure, development workflow, and best practices for contributing effectively.

📁 Project Structure
arduino
Copy
Edit
Task-Manager/
├── main.cpp                  // Entry point with menu logic
├── task.cpp                  // Task structure and operations
├── file_manager.cpp          // File read/write logic
├── date_util.cpp             // Date validation utilities
├── search.cpp                // Search by ID functionality
├── storage.cpp               // Task persistence logic
├── filter.cpp                // Completed/incomplete task filtering
├── test_task.cpp             // Tests for Task logic
├── test_task_manager.cpp     // Tests for TaskManager
├── developer_guide.md        // Developer documentation
├── README.md                 // User-facing guide
└── tasks.json                // Persistent task storage
⚙️ Tools & Technologies
Language: C++

Compiler: g++ or clang++

Testing: Manual tests or assertions (assert)

Version Control: Git and GitHub

🧱 Design Principles
✅ Modular Code: Functions and logic are split across focused .cpp files.

✅ Single Responsibility: Each module handles one concern (e.g., dates, tasks, filters).

✅ Readable & Maintainable: Clear naming, indentation, and comments.

✅ Reusability: Code is structured to enable easy expansion or GUI integration.

🔨 How to Build & Run
1. Clone the Repository
bash
Copy
Edit
git clone https://github.com/YourUsername/Task-Manager.git
cd Task-Manager
2. Compile the Program
bash
Copy
Edit
g++ main.cpp task.cpp file_manager.cpp date_util.cpp search.cpp storage.cpp filter.cpp -o task_manager
3. Run the Application
bash
Copy
Edit
./task_manager
🧪 Running Tests
Compile and Run Individual Tests
bash
Copy
Edit
g++ test_task.cpp -o test_task && ./test_task
g++ test_task_manager.cpp -o test_task_manager && ./test_task_manager
Ensure each test prints pass/fail feedback using assert().

🧭 Development Guidelines
✍️ Write clean, modular functions.

🧹 Use const where variables shouldn’t change.

📎 Add comments to explain logic.

📁 Group related logic into its own .cpp file.

🔄 Use Git branches for new features:

bash
Copy
Edit
git checkout -b feature/task-filter
🤝 Contributing Workflow
Fork the repository.

Create a feature branch.

Make changes with clear commits.

Push and submit a pull request with description.

🆘 Need Help?
Refer to README.md for user instructions.

Reach out on issues or discussions tab for questions.
