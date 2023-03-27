#ifndef RECIPEBOOK_RECIPES_H
#define RECIPEBOOK_RECIPES_H

#include "Food.h"

class Recipes{
protected:
    //Food food

public:
    explicit Recipes(const Food& food);
    ~Recipes();
};


#endif //RECIPEBOOK_RECIPES_H
