#ifndef RECIPEBOOK_INGREDIENTS_H
#define RECIPEBOOK_INGREDIENTS_H

#include <string>

using namespace std;

class Ingredients {
public:
string ingredName;

    explicit Ingredients(const string &name);
    ~Ingredients();

    const string &getIngredName() const;

    void setIngredName(const string &ingredName);

};


#endif //RECIPEBOOK_INGREDIENTS_H
