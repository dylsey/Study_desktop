#pragma once
#include "Parent.h"
#include <vector>

class Child : public Parent {
public:
    Child();
    Child(const std::string& name, int age);

    void haveBaby(Child& child, std::vector<Grandchild>& grandchildren) override;
    void disciplineChild(const std::string& disciplineMethod) override;
};
