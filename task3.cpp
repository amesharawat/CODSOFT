#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> toDoList;
    int choice;
    std::string task;

    do {
        std::cout << "To-Do List\n";
        std::cout << "1. Add task\n";
        std::cout << "2. View tasks\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                toDoList.push_back(task);
                break;
            case 2:
                std::cout << "Tasks:\n";
                for (size_t i = 0; i < toDoList.size(); i++) {
                    std::cout << i + 1 << ". " << toDoList[i] << "\n";
                }
                break;
            case 3:
                std::cout << "Exiting To-Do List\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while (choice != 3);

    return 0;
}