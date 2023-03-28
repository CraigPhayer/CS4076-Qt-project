#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H

#include "Food.h"
#include <vector>

using namespace std;

class Recipe {
protected:
    string name;

    friend class MainWindow;

public:
    static vector<string> recipeList;

    Recipe(const string &name, const Food &food);

    Recipe();

    ~Recipe();

    void addToList(const Recipe &recipe);

    static const vector<string> &getRecipeList();

    const string &getList();

    const string &getName() const;


};


#endif //RECIPEBOOK_RECIPE_H
