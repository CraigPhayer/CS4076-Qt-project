#include "Recipe.h"
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> Recipe::recipeList;
vector<Recipe> Recipe::recipeDifficulty;
ostringstream returnRecipe;
ostringstream returnDifficulty;

Recipe::Recipe(const string &name, const Food &food, const string &difficulty) : name(name), food(food), difficulty(difficulty) {

}

void Recipe::addToList(const Recipe &recipe) {
    recipeList.push_back(recipe.getName());
    recipeDifficulty.push_back(recipe);
}

const string &Recipe::getName() const {
    return name;
}

string Recipe::getRecipeNameList() {
    string temp;
    for(const string& str : recipeList){
        returnRecipe<<str<<endl;
    }
    temp = returnRecipe.str();
    return temp;
}

const vector<string> &Recipe::getRecipeList() {
    return recipeList;
}

const string Recipe::getDifficultyFromList(const int& i) {
    string temp;
    for(Recipe &r : recipeDifficulty){
        if (r.getDifficulty() == "Hard" && i == 1){
            returnDifficulty<<r.getName()<<endl;
        } else if(r.getDifficulty() == "Medium" && i == 2){
            returnDifficulty<<r.getName()<<endl;
        }else if(r.getDifficulty() == "Easy" && i == 3){
            returnDifficulty<<r.getName()<<endl;
        }else returnDifficulty<<r.getName()<<endl;
    }
    temp = returnDifficulty.str();
    return temp;
}

const vector<Recipe> &Recipe::getRecipeDifficulty() {
    return recipeDifficulty;
}

const string &Recipe::getDifficulty() const {
    return difficulty;
}


Recipe::~Recipe() = default;
