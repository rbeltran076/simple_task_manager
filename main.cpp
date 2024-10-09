#include <iostream>
#include <limits>
#include <memory>
#include "TaskManager.h"
#include "AiTask.h"
#include "HpcTask.h"
#include "ProgrammingTask.h"
#include "DevopsTask.h"

int main() {
    TaskManager manager;
    bool running = true;

    while (running) {
        int option;
        std::cout << "\nTask Manager Menu:\n";
        std::cout << "1. Add AI Task\n";
        std::cout << "2. Add HPC Task\n";
        std::cout << "3. Add Programming Task\n";
        std::cout << "4. Add DevOps Task\n";
        std::cout << "5. Display Tasks by Priority\n";
        std::cout << "6. Mark Task as Complete\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter option: ";
        std::cin >> option;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

        if (option >= 1 && option <= 4) {
            // Common input for all tasks
            std::string name;
            int priority = 0, estimatedTime;

            std::cout << "Enter Task name: ";
            std::getline(std::cin, name);
            
            // Ensure priority is 1, 2, or 3
            while (priority < 1 || priority > 3) {
                std::cout << "Enter priority (1 = Low, 2 = Medium, 3 = High): ";
                std::cin >> priority;
                if (priority < 1 || priority > 3) {
                    std::cout << "Invalid priority. Please enter a value between 1 and 3.\n";
                }
            }

            std::cout << "Enter estimated time (hours): ";
            std::cin >> estimatedTime;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer again

            // Add the appropriate task based on user input
            switch (option) {
                case 1:
                    manager.addTask(std::make_unique<AiTask>(name, priority, estimatedTime));
                    break;
                case 2:
                    manager.addTask(std::make_unique<HpcTask>(name, priority, estimatedTime));
                    break;
                case 3:
                    manager.addTask(std::make_unique<ProgrammingTask>(name, priority, estimatedTime));
                    break;
                case 4:
                    manager.addTask(std::make_unique<DevopsTask>(name, priority, estimatedTime));
                    break;
            }

        } else if (option == 5) {
            // Display tasks sorted by priority
            manager.displayTasksByPriority();

        } else if (option == 6) {
            // Mark task as complete
            std::string taskName;
            std::cout << "Enter task name to mark as complete: ";
            std::getline(std::cin, taskName);

            if (manager.markTaskComplete(taskName)) {
                std::cout << "Task marked as complete.\n";
            } else {
                std::cout << "Task not found.\n";
            }

        } else if (option == 7) {
            // Exit the program
            running = false;

        } else {
            std::cout << "Invalid option! Please try again.\n";
        }
    }

    return 0;
}
