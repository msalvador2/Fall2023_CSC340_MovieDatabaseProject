//
// Created by Miguel Salvador on 11/29/23.
//

#include "People.h"
#include <iostream>

//  People
People::People(const std::string &name, int birthYear) : name(name), birthYear(birthYear) {}

People::~People() = default;

//  Director
Director::Director(const std::string &name, int birthYear) : People(name, birthYear) {}

void Director::DisplayInfo() const  {
    std::cout << "- Director Information -\n" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Year of Birth: " << birthYear << std::endl;
}

// Actor
Actor::Actor(const std::string& name, int birthYear) : People(name, birthYear) {}

void Actor::DisplayInfo() const {
    std::cout << "- Actor Information -\n" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Year of Birth: " << birthYear << std::endl;
}