#include "Recipe.h"
#include <algorithm>
#include <utility>

using namespace std;
struct compare
{
    string key;
    explicit compare(string str): key(std::move(str)) {}

    bool operator()(string const &r) {
        return (r == key);
    }
};

Recipe::Recipe(const string& name, const Food &food) {

}

void Recipe::addToList(const Recipe& recipe) {
    recipeList.push_back(recipe.getName());
}

string Recipe::searchList(const string & recipe) {
    if (any_of(recipeList.begin(),recipeList.end(),compare(recipe))){
        return recipe;
    } else return "not working";
}

const string &Recipe::getName() const {
    return name;
}

Recipe::~Recipe() = default;
