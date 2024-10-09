#ifndef PROGRAMMING_TASK_H
#define PROGRAMMING_TASK_H

#include "BaseTask.h"

class ProgrammingTask : public BaseTask {
public:
    ProgrammingTask(std::string name, int priority, int estimatedTime);

    void displayTask() const override;  // Declaration only
};

#endif
