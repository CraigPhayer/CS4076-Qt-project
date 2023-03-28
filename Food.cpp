#include <sstream>
#include "Food.h"

ostringstream returnIngredient;

string Food::getIngredients() const {
    for (Ingredients i : ingredients) {
        returnIngredient<<i.getIngredName()<<endl;
    }
    return returnIngredient.str();
}

Food::Food(const string &name, const vector<Ingredients> &ingredients) : Ingredients(name), ingredients(ingredients) {}

Food::Food(const string &name) : Ingredients(name) {

}

