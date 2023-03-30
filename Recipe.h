#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H

#include "Food.h"
#include "Utility.h"
#include <vector>

using namespace std;

class Recipe {
protected:
    string name;

    Food food;

    string difficulty;

    friend class MainWindow;

public:
    static vector<string> recipeList;

    static vector<Recipe> recipeVector;

    Recipe(const string &name, const Food &food, const string &difficulty);

    ~Recipe();

    void addToList(const Recipe &recipe);

    static const vector<Recipe> &getRecipeDifficulty();

    static const string getDifficultyFromList(const int &i);

    const string &getDifficulty() const;

    static const vector<string> &getRecipeList();

    static string getRecipeNameList();

    const string &getName() const;

    const Food &getFood();

    static string getIngredients();

    Recipe();
};


#endif //RECIPEBOOK_RECIPE_H
