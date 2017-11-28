//
//  Person.hpp
//  superhero
//
//  Created by Haukur Guðmundsson on 27/11/2017.
//  Copyright © 2017 Haukur Guðmundsson. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person {
private:
    string name;
    int age;
    char power;
    
public:
    Person(string name, int age, char power);
    friend istream& operator >> (istream& ins, Person& person);
    friend ostream& operator << (ostream& outs, const Person& person);

};

#endif /* Person_hpp */
