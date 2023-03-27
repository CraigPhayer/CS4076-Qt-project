#ifndef RECIPEBOOK_UTILITY_H
#define RECIPEBOOK_UTILITY_H
#include <vector>

using namespace std;
template<typename T>
class Utility {
public:
    Utility() = default;

    virtual T searchList(const T& t, const vector<T> &vectorT) = 0;

};

/*string Recipe::searchList(const string & recipe) {
    if (any_of(recipeList.begin(),recipeList.end(),compare(recipe))){
        return recipe;
    } else return "not working";
}
const vector<Ingredients> &ingredients*/


#endif //RECIPEBOOK_UTILITY_H
