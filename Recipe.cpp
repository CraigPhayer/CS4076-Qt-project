#include "Recipe.h"
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> Recipe::recipeList;
ostringstream returnRecipe;

Recipe::Recipe(const string &name, const Food &food) : name(name) {

}

void Recipe::addToList(const Recipe &recipe) {
    recipeList.push_back(recipe.getName());
}

const string &Recipe::getName() const {
    return name;
}

Recipe::Recipe() {

}

const string &Recipe::getList() {
    for(const string& str : recipeList){
        returnRecipe<<str<<endl;
    }
    return returnRecipe.str();
}

const vector<string> &Recipe::getRecipeList() {
    return recipeList;
}


Recipe::~Recipe() = default;
