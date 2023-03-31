#ifndef RECIPEBOOK_UTILITY_H
#define RECIPEBOOK_UTILITY_H
#include <vector>
#include <string>

using namespace std;
template<typename T>
class Utility {
public:
    Utility() = default;

    virtual ~Utility() = default;

    virtual T searchList(const T& t, const vector<T> &vectorT) = 0;

    virtual T formatString(const T &str);
};

template<typename T>
T Utility<T>::formatString(const T &str) {
    return nullptr;
}

#endif //RECIPEBOOK_UTILITY_H
