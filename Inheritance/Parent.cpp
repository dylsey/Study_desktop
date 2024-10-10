#include "Parent.h"

Parent::Parent() : name("default"), age(0), hasChildren(false) {}

Parent::Parent(Lineage generation, std::string name, int age, bool isParent)
    : generation(generation), name(name), age(age), hasChildren(isParent) {}

void Parent::disciplineChild(const std::string& disciplineMethod) {
    std::cout << "Parent disciplines using: " << disciplineMethod << std::endl;
}

std::string Parent::getName() const {
    return name;
}

int Parent::getAge() const {
    return age;
}

std::string Parent::makeRule(const std::string& rule) {
    return "Rule: " + rule;
}

void Parent::birthday() {
    ++age;
}

void Parent::changeName(const std::string& updateName) {
    name = updateName;
}

void Parent::print(std::ostream& o) const {
    o << "Name: " << name << ", Age: " << age << ", Has children: " << (hasChildren ? "Yes" : "No");
}

std::ostream& operator<<(std::ostream& o, const Parent& parent) {
    parent.print(o);
    return o;
}
