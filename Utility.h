#ifndef RECIPEBOOK_UTILITY_H
#define RECIPEBOOK_UTILITY_H
#include <vector>

using namespace std;
template<typename T>
class Utility {
public:
    Utility() = default;

    virtual void searchList(const T& t, const vector<T> &vectorT) = 0;

};
#endif //RECIPEBOOK_UTILITY_H
