#include "Object.h"

Object::Object(string name) {
    this->name = name;
}

void Object::print() {
    cout << "Object[" << name << "] ";
}