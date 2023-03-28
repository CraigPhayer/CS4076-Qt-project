#ifndef RECIPEBOOK_ERROR404_H
#define RECIPEBOOK_ERROR404_H

#include <exception>
#include <string>

using namespace std;

class error404/*: public exception*/ {
public:
    explicit error404(const string&);
    ~error404();
};


#endif //RECIPEBOOK_ERROR404_H
