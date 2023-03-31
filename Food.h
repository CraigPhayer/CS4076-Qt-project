#ifndef RECIPEBOOK_FOOD_H
#define RECIPEBOOK_FOOD_H

#include <iostream>
#include <vector>
#include "Ingredients.h"
#include <sstream>

using namespace std;

class Food {
protected:
    static vector<Ingredients> ingredients;
    string name;

public:
    Food(const string &name, const vector<Ingredients> &ingredients1);

    Food(const string &name);

    Food();

    ~Food();

    static const vector<Ingredients> &getIngredientsVector() ;

    string getIngredients() const;
};


#endif //RECIPEBOOK_FOOD_H
