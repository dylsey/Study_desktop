#include "Child.h"
#include "Grandchild.h"

Child::Child() : Parent() {}

Child::Child(const std::string& name, int age) : Parent(Lineage::secondGen, name, age, true) {}

void Child::haveBaby(Child& child, std::vector<Grandchild>& grandchildren) {
    Grandchild grandchild;
    grandchildren.push_back(grandchild);
    std::cout << "Child is having a baby. Grandchildren count: " << grandchildren.size() << std::endl;
}

void Child::disciplineChild(const std::string& disciplineMethod) {
    std::cout << "Child is disciplined using: " << disciplineMethod << std::endl;
}
