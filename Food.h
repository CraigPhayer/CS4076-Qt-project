#ifndef RECIPEBOOK_FOOD_H
#define RECIPEBOOK_FOOD_H

#include <iostream>
#include <vector>
#include "Ingredients.h"

using namespace std;

class Food : public Ingredients {
protected:
string name;
vector<Ingredients> ingredients;

public:
    Food(const string &name1, const string &name, const vector<Ingredients> &ingredients);

    const string &getName() const;

    void setName(const string &name);

    const vector<Ingredients> &getIngredients() const;

    void addIngredients(Ingredients &ingredients1);

};


#endif //RECIPEBOOK_FOOD_H
