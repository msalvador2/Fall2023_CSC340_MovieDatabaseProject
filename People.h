//
// Created by Miguel Salvador on 11/29/23.
//

#ifndef MOVIEDATABASEPROJECT_PEOPLE_H
#define MOVIEDATABASEPROJECT_PEOPLE_H

#include <string>

class People {
protected:
    std::string name;
    int birthYear;

public:
    People (const std::string& name, int birthYear);

    virtual ~People();

    virtual void DisplayInfo() const = 0;
};

class Director : public People {
public:
    Director (const std::string& name, int birthYear);

    void DisplayInfo() const override;
};

class Actor : public People {
public:
    Actor (const std::string&name, int birthYear);

    void DisplayInfo() const override;
};


#endif //MOVIEDATABASEPROJECT_PEOPLE_H
