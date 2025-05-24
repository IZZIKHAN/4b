#include "task.h"
#include <iostream>

// Constructor
Task::Task() : id(0), title(""), description(""), completed(false), creationDate(""), dueDate("") {}

// Getters
int Task::getId() const { return id; }
std::string Task::getTitle() const { return title; }
std::string Task::getDescription() const { return description; }
bool Task::isCompleted() const { return completed; }
std::string Task::getCreationDate() const { return creationDate; }
std::string Task::getDueDate() const { return dueDate; }

// Setters
void Task::setId(int idVal) { id = idVal; }
void Task::setTitle(const std::string& titleVal) { title = titleVal; }
void Task::setDescription(const std::string& desc) { description = desc; }
void Task::setCompleted(bool status) { completed = status; }
void Task::setCreationDate(const std::string& date) { creationDate = date; }
void Task::setDueDate(const std::string& date) { dueDate = date; }

// Display
void Task::display() const {
    std::cout << "------------- Task ID: " << id << " ---------------" << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Status: " << (completed ? "✅" : "❌") << std::endl;
    std::cout << "Creation Date: " << creationDate << std::endl;
    std::cout << "Due Date: " << dueDate << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}
