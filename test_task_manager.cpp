#include <gtest/gtest.h>
#include "task_manager.h"
#include "task.h"

// Test fixture for TaskManager
class TaskManagerTest : public ::testing::Test {
protected:
    TaskManager taskManager;

    virtual void SetUp() {
        // Optionally initialize some tasks before each test
    }

    virtual void TearDown() {
        // Cleanup if needed after each test
    }
};

// Test adding a task
TEST_F(TaskManagerTest, AddTaskIncreasesSize) {
    Task task(1, "Test Task", "Description", false, "2025-05-24", "2025-12-31");
    taskManager.addTask(task);
    EXPECT_EQ(taskManager.getTasks().size(), 1);
}

// Test updating a task
TEST_F(TaskManagerTest, UpdateTaskChangesTitleAndDescription) {
    Task task(1, "Original", "Old Desc", false, "2025-05-24", "2025-12-31");
    taskManager.addTask(task);

    bool updated = taskManager.updateTask(1, "Updated", "New Desc");
    EXPECT_TRUE(updated);

    Task* updatedTask = taskManager.findTaskById(1);
    ASSERT_NE(updatedTask, nullptr);
    EXPECT_EQ(updatedTask->getTitle(), "Updated");
    EXPECT_EQ(updatedTask->getDescription(), "New Desc");
}

// Test deleting a task
TEST_F(TaskManagerTest, DeleteTaskRemovesTask) {
    Task task(1, "Task to Delete", "Desc", false, "2025-05-24", "2025-12-31");
    taskManager.addTask(task);

    bool deleted = taskManager.deleteTask(1);
    EXPECT_TRUE(deleted);
    EXPECT_EQ(taskManager.getTasks().size(), 0);
}

// Test marking task completed
TEST_F(TaskManagerTest, MarkTaskCompleted) {
    Task task(1, "Task", "Desc", false, "2025-05-24", "2025-12-31");
    taskManager.addTask(task);

    bool marked = taskManager.markTaskAsCompleted(1);
    EXPECT_TRUE(marked);

    Task* found = taskManager.findTaskById(1);
    ASSERT_NE(found, nullptr);
    EXPECT_TRUE(found->isCompleted());
}

// Test marking task incomplete
TEST_F(TaskManagerTest, MarkTaskIncomplete) {
    Task task(1, "Task", "Desc", true, "2025-05-24", "2025-12-31");
    taskManager.addTask(task);

    bool marked = taskManager.markTaskAsIncompleted(1);
    EXPECT_TRUE(marked);

    Task* found = taskManager.findTaskById(1);
    ASSERT_NE(found, nullptr);
    EXPECT_FALSE(found->isCompleted());
}
