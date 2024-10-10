#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <algorithm>
#include "Parent.h"
#include "Child.h"
#include "Grandchild.h"


// Helper function to generate a random name
std::string randomName(std::default_random_engine& engine) {
    const std::vector<std::string> names = { "Alice", "Bob", "Charlie", "Diana", "Eve" };
    std::uniform_int_distribution<int> dist(0, names.size() - 1);
    return names[dist(engine)];
}

// Helper function to generate a random age
int randomAge(std::default_random_engine& engine) {
    std::uniform_int_distribution<int> dist(1, 18); // Generate an age between 1 and 18
    return dist(engine);
}

int main()
{
    std::random_device seed;
	std::default_random_engine engine(seed());

    std::vector<Child> children(5);
    std::vector<Grandchild> grandchildren(5);

    std::generate(children.begin(), children.end(), [&engine]()
        {
            return Child(randomName(engine), randomAge(engine));
        });

    std::generate(grandchildren.begin(), grandchildren.end(), [&engine]()
        {
            return Grandchild(randomName(engine), randomAge(engine));
        });

    std::vector<Parent*> family;

    for (auto& child : children)
    {
        family.push_back(&child);
    }

    for (auto& grandchild : grandchildren)
    {
        family.push_back(&grandchild);
    }

    std::sort(family.begin(), family.end(), [](Parent* a, Parent* b)
        {
            return a->getAge() < b->getAge();
        });
}

