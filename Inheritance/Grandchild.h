#pragma once
#include "Parent.h"

class Grandchild : public Parent {
public:
    Grandchild();
    Grandchild(const std::string& name, int age);

    void haveBaby(Child& child, std::vector<Grandchild>& grandchildren) override;
    void disciplineChild(const std::string& disciplineMethod) override;
};
