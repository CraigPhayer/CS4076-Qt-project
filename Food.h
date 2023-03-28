#ifndef RECIPEBOOK_FOOD_H
#define RECIPEBOOK_FOOD_H

#include <iostream>
#include <vector>
#include "Ingredients.h"

using namespace std;

class Food : public Ingredients {
protected:
    vector<Ingredients> ingredients;

    friend class Recipe;

public:
    Food(const string &name, const vector<Ingredients> &ingredients);

    Food(const string &name);

    string getIngredients() const override;
};


#endif //RECIPEBOOK_FOOD_H
