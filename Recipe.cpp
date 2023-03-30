#include "Recipe.h"
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> Recipe::recipeList;
vector<Recipe> Recipe::recipeVector;
ostringstream returnRecipe;


Recipe::Recipe(const string &name, const Food &food, const string &difficulty) : name(name), food(food), difficulty(difficulty) {

}

void Recipe::addToList(const Recipe &recipe) {
    recipeList.push_back(recipe.getName());
    recipeVector.push_back(recipe);
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
    ostringstream returnDifficulty;
    for(Recipe &r : recipeVector){
        if (r.getDifficulty() == "Hard" && i == 1){
            returnDifficulty<<r.getName()<<endl;
        } else if(r.getDifficulty() == "Medium" && i == 2){
            returnDifficulty<<r.getName()<<endl;
        }else if(r.getDifficulty() == "Easy" && i == 3){
            returnDifficulty<<r.getName()<<endl;
        }
    }
    temp = returnDifficulty.str();
    return temp;
}

const vector<Recipe> &Recipe::getRecipeDifficulty() {
    return recipeVector;
}

const string &Recipe::getDifficulty() const {
    return difficulty;
}

const Food &Recipe::getFood() {
    return food;
}

string Recipe::getIngredients(){
    ostringstream returnIngredient;
    string temp;
    for (const Ingredients &i: Food::getIngredients()) {
        returnIngredient << i.getIngredName() << endl;
    }
    temp = returnIngredient.str();
    return temp;
}

Recipe::Recipe() {

}


Recipe::~Recipe() = default;
