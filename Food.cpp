#include <sstream>
#include "Food.h"

ostringstream returnIngredient;
vector<Ingredients> Food::ingredients;

string Food::getIngredients() const {
    for (const Ingredients &i: ingredients) {
        returnIngredient << i.getIngredName() << endl;
    }
    return returnIngredient.str();
}

Food::Food(const string &name, const vector<Ingredients> &ingredients1) : name(name)  {
    ingredients = ingredients1;
}

Food::Food(const string &name) : name(name) {

}

const vector<Ingredients> &Food::getIngredientsVector(){
    return ingredients;
}

Food::Food() = default;

Food::~Food() = default;

