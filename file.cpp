#include "FileManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

bool FileManager::saveTasks(const std::vector<Task>& tasks, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file for writing.\n";
        return false;
    }

    for (const auto& task : tasks) {
        outFile << task.getId() << "|"
                << task.getTitle() << "|"
                << task.getDescription() << "|"
                << task.isCompleted() << "|"
                << task.getCreationDate() << "|"
                << task.getDueDate() << "\n";
    }

    outFile.close();
    return true;
}

std::vector<Task> FileManager::loadTasks(const std::string& filename) {
    std::vector<Task> tasks;
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Warning: No existing file found. Starting fresh.\n";
        return tasks;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string part;
        Task task;

        std::getline(ss, part, '|');
        task.setId(std::stoi(part));

        std::getline(ss, part, '|');
        task.setTitle(part);

        std::getline(ss, part, '|');
        task.setDescription(part);

        std::getline(ss, part, '|');
        task.setCompleted(part == "1");

        std::getline(ss, part, '|');
        task.setCreationDate(part);

        std::getline(ss, part, '|');
        task.setDueDate(part);

        tasks.push_back(task);
    }

    inFile.close();
    return tasks;
}
