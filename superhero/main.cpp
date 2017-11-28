//
//  main.cpp
//  superhero
//
//  Created by Haukur Guðmundsson on 27/11/2017.
//  Copyright © 2017 Haukur Guðmundsson. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Person.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Person hero (" ", 0, 'n');
    cin >> hero;
    
    ofstream fout;
    fout.open("txtFile.txt", ios::app);
    if (fout.is_open()) {
        fout << hero;
        fout.close();
    }
    cout << hero;
    ifstream fin;
    string str;
    fin.open("txtFile.txt");
    if (fin.is_open()) {
        while(!fin.eof()) {
            getline(fin,str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Unable to read frome file! " << endl;
    }
    return 0;
}
