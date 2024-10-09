#ifndef DEVOPS_TASK_H
#define DEVOPS_TASK_H

#include "BaseTask.h"

class DevopsTask : public BaseTask {
public:
    DevopsTask(std::string name, int priority, int estimatedTime);
    
    void displayTask() const override;  // Declaration only
};

#endif
