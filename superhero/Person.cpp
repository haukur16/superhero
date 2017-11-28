//
//  Person.cpp
//  superhero
//
//  Created by Haukur Guðmundsson on 27/11/2017.
//  Copyright © 2017 Haukur Guðmundsson. All rights reserved.
//

#include "Person.hpp"
#include <string>

Person::Person(string name, int age, char power) {
    this->name = name;
    this->age = age;
    this->power = power;
}

istream& operator >> (istream& ins, Person& person) {
    cout << "Please enter superhero name: ";
    ins >> person.name;
    cout << "Please enter superhero age: ";
    ins >> person.age;
    cout << "Please enter power of superhero: ";
    ins >> person.power;
    return ins;
}

ostream& operator << (ostream& outs, const Person& person) {
    outs << person.name << " (" << person.age << "): ";
    if (person.power == 'f') {
        outs << "Flying";
    }
    else if (person.power == 'g') {
        outs << "Giant";
    }
    else if (person.power == 'h') {
        outs << "Hacker";
    }
    else if (person.power == 'n') {
        outs << "None";
    }
    else
        outs << "Weakling";
    outs << endl;
    return outs;
}

