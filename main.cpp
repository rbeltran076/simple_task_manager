#include <iostream>
#include "Task.h"
#include "TaskManager.h"

int main() {
    TaskManager manager;
    
    // Adding sample tasks
    Task task1("Project Work", 5, 10, 2);
    Task task2("Study for Exam", 2, 8, 3);
    
    manager.addTask(task1);
    manager.addTask(task2);
    
    std::cout << "Task List:" << std::endl;
    manager.displayTasks();
    
    // Prioritize tasks
    manager.prioritizeTasks();
    std::cout << "\nPrioritized Task List:" << std::endl;
    manager.displayTasks();

    return 0;
}
