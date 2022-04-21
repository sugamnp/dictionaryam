#pragma once
#include <iostream>

using namespace std;

class Word {
private:
    string name;
    string type;
    string definition;

public:

    Word(string name, string type, string definition) {
        this->name = name;
        this->type = type;
        this->definition = definition;
    }

    string getName(string name) {
        return name;
    }

    string getType() {
        return type;
    }
    string getDefination() {
        return definition;
    }

    void setName(string name) {
        this->name = name;
    }

    void setType(string type) {
        this->type = type;
    }

    void setDefinition(string definition) {
        this->definition = definition;
    }


};



