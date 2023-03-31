#ifndef RECIPEBOOK_INGREDIENTS_H
#define RECIPEBOOK_INGREDIENTS_H

#include <string>

using namespace std;

class Ingredients {
public:
    Ingredients();

    string ingredName;

    explicit Ingredients(const string &name);
    ~Ingredients();

    void setIngredName(const string &i);

    const string &getIngredName() const;

    virtual string getIngredients() const;

};

#endif //RECIPEBOOK_INGREDIENTS_H
