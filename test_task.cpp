#include <gtest/gtest.h>
#include "task.h"

// Test fixture for Task class
class TaskTest : public ::testing::Test {
protected:
    Task task;

    void SetUp() override {
        // Initialize a sample task
        task = Task(1, "Sample Task", "Sample Description", false, "2025-05-24", "2025-12-31");
    }
};

// Test getters
TEST_F(TaskTest, GettersReturnCorrectValues) {
    EXPECT_EQ(task.getId(), 1);
    EXPECT_EQ(task.getTitle(), "Sample Task");
    EXPECT_EQ(task.getDescription(), "Sample Description");
    EXPECT_FALSE(task.isCompleted());
    EXPECT_EQ(task.getCreationDate(), "2025-05-24");
    EXPECT_EQ(task.getDueDate(), "2025-12-31");
}

// Test setters
TEST_F(TaskTest, SettersUpdateValues) {
    task.setTitle("Updated Task");
    task.setDescription("Updated Description");
    task.setCompleted(true);
    task.setDueDate("2025-11-30");

    EXPECT_EQ(task.getTitle(), "Updated Task");
    EXPECT_EQ(task.getDescription(), "Updated Description");
    EXPECT_TRUE(task.isCompleted());
    EXPECT_EQ(task.getDueDate(), "2025-11-30");
}

// Test toggle completed
TEST_F(TaskTest, ToggleCompletedStatus) {
    EXPECT_FALSE(task.isCompleted());
    task.setCompleted(true);
    EXPECT_TRUE(task.isCompleted());
    task.setCompleted(false);
    EXPECT_FALSE(task.isCompleted());
}
