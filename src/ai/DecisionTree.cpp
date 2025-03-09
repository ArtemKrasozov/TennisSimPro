#include "DecisionTree.h"
#include <iostream>

void DecisionTree::buildTree() {
    std::cout << "Создание дерева решений для ИИ..." << std::endl;
}

std::string DecisionTree::makeDecision() {
    int choice = rand() % 3;
    if (choice == 0) return "Атака";
    if (choice == 1) return "Защита";
    return "Обманный удар";
}
