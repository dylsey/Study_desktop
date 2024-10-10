#include "Grandchild.h"

Grandchild::Grandchild() : Parent() {}

Grandchild::Grandchild(const std::string& name, int age) : Parent(Lineage::thirdGen, name, age, false) {}

void Grandchild::haveBaby(Child& child, std::vector<Grandchild>& grandchildren) {
    Grandchild greatGrandchild;
    grandchildren.push_back(greatGrandchild);
    std::cout << "Grandchild is having a baby. Great-grandchildren count: " << grandchildren.size() << std::endl;
}

void Grandchild::disciplineChild(const std::string& disciplineMethod) {
    std::cout << "Grandchild is disciplined using: " << disciplineMethod << std::endl;
}
