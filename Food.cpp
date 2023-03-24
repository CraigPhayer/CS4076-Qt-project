#include "Food.h"

Food::Food(const string &name1, const string &name, const vector<Ingredients> &ingredients)
: Ingredients(name1), name(name), ingredients(ingredients) {}

const string &Food::getName() const {
    return name;
}

void Food::setName(const string &name) {
    Food::name = name;
}

const vector<Ingredients> &Food::getIngredients() const {
    return ingredients;
}

void Food::setIngredients(const vector<Ingredients> &ingredients) {
    Food::ingredients = ingredients;
}
