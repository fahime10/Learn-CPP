#include <string>
#include <utility>
using namespace std;

class Entity {
public:
    Entity(string id, string desc) :id_(std::move(id)), description_(std::move(desc)) {}

    string id_;
    string description_;
};
