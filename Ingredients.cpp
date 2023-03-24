#include "Ingredients.h"


Ingredients::Ingredients(const string &name) : ingredName(name) {}

const string &Ingredients::getIngredName() const {
    return ingredName;
}

void Ingredients::setIngredName(const string &ingredName) {
    Ingredients::ingredName = ingredName;
}

Ingredients::~Ingredients() = default;

