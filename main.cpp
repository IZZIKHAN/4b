#include <iostream>
#include "ui.h"
#include "task_manager.h"
#include "date.h"
#include "filter_task.h"
#include "storage_manager.h"

TaskManager taskManager;
UIManager ui;
StorageManager storageManager;

void handleAddTask() {
    std::string title = ui.getUserInput("Title: ");
    std::string description = ui.getUserInput("Description: ");
    std::string dueDate = ui.getUserInput("Due date (YYYY-MM-DD): ");

    Task task;
    task.setId(taskManager.getTaskId() + 1);
    task.setTitle(UIManager::strip(title));
    task.setDescription(UIManager::strip(description));
    task.setCompleted(false);
    task.setCreationDate(Date::getCurrentDate());
    task.setDueDate(Date::validateDate(dueDate));

    taskManager.addTask(task);
}

void handleUpdateTask() {
    int taskId = std::stoi(ui.getUserInput("Enter task id to update: "));
    std::string title = ui.getUserInput("Title: ");
    std::string description = ui.getUserInput("Description: ");

    if (taskManager.updateTask(taskId, UIManager::strip(title), UIManager::strip(description))) {
        std::cout << "Task updated successfully ✅" << std::endl;
    } else {
        std::cout << "Error while updating task ❌" << std::endl;
    }
}

void handleDeleteTask() {
    int taskId = std::stoi(ui.getUserInput("Enter task id to delete: "));
    if (taskManager.deleteTask(taskId)) {
        std::cout << "Task deleted successfully ✅" << std::endl;
    } else {
        std::cout << "Error while deleting task ❌" << std::endl;
    }
}

void handleMarkCompletedTask() {
    int taskId = std::stoi(ui.getUserInput("Enter task id to mark as completed: "));
    if (taskManager.markTaskAsCompleted(taskId)) {
        std::cout << "done ✅" << std::endl;
    } else {
        std::cout << "No task with id " << taskId << std::endl;
    }
}

void handleMarkIncompletedTask() {
    int taskId = std::stoi(ui.getUserInput("Enter task id to mark as incomplete: "));
    if (taskManager.markTaskAsIncompleted(taskId)) {
        std::cout << "done ✅" << std::endl;
    } else {
        std::cout << "No task with id " << taskId << std::endl;
    }
}

int main() {
    while (true) {
        ui.displayMenu();
        int choice = std::stoi(ui.getUserInput("Enter your choice: "));

        switch (choice) {
            case 1:
                handleAddTask();
                break;
            case 2:
                taskManager.showTasks();
                break;
            case 3:
                handleUpdateTask();
                break;
            case 4:
                handleDeleteTask();
                break;
            case 5:
                handleMarkCompletedTask();
                break;
            case 6:
                handleMarkIncompletedTask();
                break;
            case 7:
                std::cout << "\n------- All completed tasks -------\n";
                ui.showTasks(FilterTask(storageManager.loadTasks()).filterCompletedTasks());
                break;
            case 8:
                std::cout << "\n------- All incompleted tasks -------\n";
                ui.showTasks(FilterTask(storageManager.loadTasks()).filterIncompletedTasks());
                break;
            case 9:
                return 0;
            default:
                std::cout << "Invalid input" << std::endl;
        }
    }
}
