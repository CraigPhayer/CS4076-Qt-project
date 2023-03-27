#include "Food.h"

const vector<Ingredients> &Food::getIngredients() const {
    return ingredients;
}

void Food::addIngredients(Ingredients &ingredients1) {
    ingredients.push_back(ingredients1);
}

Food::Food(const string &name, const vector<Ingredients> &ingredients) : Ingredients(name), ingredients(ingredients) {}

