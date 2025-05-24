#include "storage_manager.h"
#include "FileManager.h"  // If you have a FileManager class to delegate actual file ops
#include <iostream>

StorageManager::StorageManager(const std::string& file) : filename(file) {}

bool StorageManager::saveTasks(const std::vector<Task>& tasks) {
    // Use FileManager or implement here
    return FileManager::saveTasks(tasks, filename);
}

std::vector<Task> StorageManager::loadTasks() {
    // Use FileManager or implement here
    return FileManager::loadTasks(filename);
}
