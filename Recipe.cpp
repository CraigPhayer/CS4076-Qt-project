#include "Recipe.h"
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> Recipe::recipeList;
vector<Recipe> Recipe::recipeVector;
ostringstream returnRecipe;
string Recipe::instructionsGlobal;


Recipe::Recipe(const string &name, const Food &food, const string &difficulty, const int &n, const string &instructions)
        : name(name), food(food), difficulty(difficulty),
          instructionsSteps(n), instructions(instructions) {
    appendInstructions(instructions,n);
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
    for (const string &str: recipeList) {
        returnRecipe << str << endl;
    }
    temp = returnRecipe.str();
    return temp;
}

const vector<string> &Recipe::getRecipeList() {
    return recipeList;
}

const string Recipe::getDifficultyFromList(const int &i) {
    string temp;
    ostringstream returnDifficulty;
    for (Recipe &r: recipeVector) {
        if (r.getDifficulty() == "Hard" && i == 1) {
            returnDifficulty << r.getName() << endl;
        } else if (r.getDifficulty() == "Medium" && i == 2) {
            returnDifficulty << r.getName() << endl;
        } else if (r.getDifficulty() == "Easy" && i == 3) {
            returnDifficulty << r.getName() << endl;
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

string Recipe::getIngredients() {
    ostringstream returnIngredient;
    string temp;
    for (const Ingredients &i: Food::getIngredientsVector()) {
        returnIngredient << i.getIngredName() << endl;
    }
    temp = returnIngredient.str();
    return temp;
}

Recipe::Recipe() = default;

void Recipe::appendInstructions(const string &input, int n) {
    string::size_type pos = 0;
    string output;
    for (int i = 0; i < n; ++i) {
        output += "Step " + to_string(i+1) + ": ";
        while (pos < input.length()){
            output += input[pos];
            if (input[pos] == '.'){
                output += "\n";
                ++pos;
                break;
            }
            ++pos;
        }
        if (pos == input.length())
            pos = 0;
        output += "\n";
    }
    instructionsGlobal = output;
}

int Recipe::getInstructions() const {
    return instructionsSteps;
}

const string &Recipe::getInstructionString() {
    return instructions;
}


Recipe::~Recipe() = default;
