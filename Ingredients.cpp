#include "Ingredients.h"


Ingredients::Ingredients(const string &name) : ingredName(name) {}

void Ingredients::setIngredName(const string &i) {
    Ingredients::ingredName = i;
}

string Ingredients::getIngredients() const {
    return ingredName;
}

const string &Ingredients::getIngredName() const {
    return ingredName;
}

Ingredients::~Ingredients() = default;

