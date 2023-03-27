#include "Recipe.h"
#include <algorithm>
#include <utility>

using namespace std;

vector<string> Recipe::recipeList;

Recipe::Recipe(const string& name, const Food &food) : name(name) {

}

void Recipe::addToList(const Recipe& recipe) {
    recipeList.push_back(recipe.getName());
}

/*string Recipe::searchList(const string & recipe) {
    if (any_of(recipeList.begin(),recipeList.end(),compare(recipe))){
        return recipe;
    } else return "not working";
}*/

const string &Recipe::getName() const {
    return name;
}

Recipe::Recipe() {

}

const vector<string> &Recipe::getRecipeList() {
    return recipeList;
}


Recipe::~Recipe() = default;
