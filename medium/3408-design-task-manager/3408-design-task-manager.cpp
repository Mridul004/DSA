    
  int execTop() {
    while (!tasks.empty()) {
      const auto task = tasks.top();
      tasks.pop();
      if (task.first == taskPriority[task.second]) {
        taskPriority[task.second] = -1;
        return taskOwner[task.second];
      }
    }
    return -1;
  }
};