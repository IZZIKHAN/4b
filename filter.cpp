#include "filter_tasks.h"

FilterTask::FilterTask(const std::vector<Task>& allTasks) : tasks(allTasks) {}

std::vector<Task> FilterTask::filterCompletedTasks() const {
    std::vector<Task> filtered;
    for (const auto& task : tasks) {
        if (task.isCompleted()) {
            filtered.push_back(task);
        }
    }
    return filtered;
}

std::vector<Task> FilterTask::filterIncompletedTasks() const {
    std::vector<Task> filtered;
    for (const auto& task : tasks) {
        if (!task.isCompleted()) {
            filtered.push_back(task);
        }
    }
    return filtered;
}
