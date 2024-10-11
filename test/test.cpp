#include <gtest/gtest.h>
#include "TaskManager.h"
#include "AiTask.h"
#include "HpcTask.h"
#include "ProgrammingTask.h"

// TESTING TaskManager.cpp
// checking if tasks are added correctly
TEST(TaskManagerTests, AddTask) {
    TaskManager manager;
    manager.addTask(std::make_unique<AiTask>("AI mock assignment", 3, 10));
    manager.addTask(std::make_unique<HpcTask>("HPC mock assignment", 2, 5));
    
    // Check if tasks were added (should have 2 tasks)
    testing::internal::CaptureStdout();
    manager.displayTasks();
    std::string output = testing::internal::GetCapturedStdout();

    // Validate if tasks are added
    EXPECT_NE(output.find("AI mock assignment"), std::string::npos);
    EXPECT_NE(output.find("HPC mock assignment"), std::string::npos);
}

// checking if tasks are displayed by priority
TEST(TaskManagerTests, DisplayTasksByPriority) {
    TaskManager manager;
    manager.addTask(std::make_unique<AiTask>("AI Task High", 3, 12));
    manager.addTask(std::make_unique<HpcTask>("HPC Task Medium", 2, 6));
    manager.addTask(std::make_unique<HpcTask>("HPC Task Low", 1, 5));

    // Capture output
    testing::internal::CaptureStdout();
    manager.displayTasksByPriority();
    std::string output = testing::internal::GetCapturedStdout();

    // Validate the order of priorities in the output
    EXPECT_NE(output.find("High Priority Tasks"), std::string::npos);
    EXPECT_NE(output.find("Medium Priority Tasks"), std::string::npos);
    EXPECT_NE(output.find("Low Priority Tasks"), std::string::npos);
}

// checking task completion
TEST(TaskManagerTests, MarkTaskComplete) {
    TaskManager manager;
    manager.addTask(std::make_unique<AiTask>("AI mock assignment", 3, 10));
    manager.addTask(std::make_unique<HpcTask>("HPC mock assignment", 2, 5));

    // Mark the AI Task as complete
    bool taskFound = manager.markTaskComplete("AI mock assignment");
    EXPECT_TRUE(taskFound);  // Makeing sure the task was found and marked complete
}


// NOW TESTING ProgrammingTask.cpp class definitions
// Test case to check if ProgrammingTask initializes correctly
TEST(ProgrammingTaskTests, Initialization) {
    ProgrammingTask task("Develop Feature", 2, 5);
    
    // Check if the task name, priority, and estimated time are set correctly
    EXPECT_EQ(task.getName(), "Develop Feature");
    EXPECT_EQ(task.getPriority(), 2);
    EXPECT_EQ(task.getEstimatedTime(), 5);
}

// Test case to check the displayTask function
TEST(ProgrammingTaskTests, DisplayTask) {
    ProgrammingTask task("Develop Feature", 2, 5);
    
    // Capture output from displayTask function
    testing::internal::CaptureStdout();
    task.displayTask();
    std::string output = testing::internal::GetCapturedStdout();
    
    // Check if the output contains the correct task details
    EXPECT_NE(output.find("Develop Feature"), std::string::npos);
    EXPECT_NE(output.find("Priority: 2"), std::string::npos);
    EXPECT_NE(output.find("Estimated Time: 5 hours"), std::string::npos);
    EXPECT_NE(output.find("Completed: No"), std::string::npos);
}

