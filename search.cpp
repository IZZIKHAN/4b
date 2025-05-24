#include "search.h"

Task* Search::findTaskById(std::vector<Task>& tasks, int id) {
    for (auto& task : tasks) {
        if (task.getId() == id) {
            return &task; // Return pointer to found task
        }
    }
    return nullptr; // Not found
}
