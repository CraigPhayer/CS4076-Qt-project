#ifndef RECIPEBOOK_FOOD_H
#define RECIPEBOOK_FOOD_H

#include <iostream>
#include <vector>
#include "Ingredients.h"
#include <sstream>

using namespace std;

class Food {
protected:
    string name;
public:
    static vector<Ingredients> ingredients;
    Food(const string &name, const vector<Ingredients> &ingredients1);

    Food(const string &name);

    Food();

    ~Food();

    static const vector<Ingredients> &getIngredientsVector() ;

    static string getIngredients() ;

    static const vector<string> &getIngredientsList();
};


#endif //RECIPEBOOK_FOOD_H
