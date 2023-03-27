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

    Food(const string &name1, const string &name, const vector<Ingredients> &ingredients);

    const vector<Ingredients> &getIngredients() const;

    void addIngredients(Ingredients &ingredients1);

};


#endif //RECIPEBOOK_FOOD_H
