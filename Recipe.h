#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H

#include "Food.h"
#include <vector>

using namespace std;

class Recipe{
protected:
    static vector<string> recipeList;
    string name;
    friend class MainWindow;
public:
    Recipe(const string& name,const Food& food);
    ~Recipe();

    void addToList(const Recipe& recipe);
    static string searchList(const string& recipe);

    const string &getName() const;
};


#endif //RECIPEBOOK_RECIPE_H
