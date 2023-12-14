#include <iostream>
#include <vector>
#include <algorithm>
#include "Entity.cpp"
using namespace std;

int main() {
    Entity ent1("1", "desc1");
    Entity ent2("3", "desc3");
    Entity ent3("5", "bob");
    Entity ent4("4", "bob");
    Entity ent5("2", "desc2");
    Entity ent6("6", "desc2");
    Entity ent7("8", "bob");
    Entity ent8("7", "desc2");
    Entity ent9("9", "bob");

    vector<Entity> entities;

    entities.push_back(ent1);
    entities.push_back(ent2);
    entities.push_back(ent3);
    entities.push_back(ent4);
    entities.push_back(ent5);
    entities.push_back(ent6);
    entities.push_back(ent7);
    entities.push_back(ent8);
    entities.push_back(ent9);

    for (const Entity& entity: entities) {
        cout << stoi(entity.id_) << " " << entity.description_ << endl;
    }
    cout << "\n" << endl;

    std::sort(entities.begin(), entities.end(), [](const Entity& lhs, const Entity& rhs) {
        return stoi(lhs.id_) < stoi(rhs.id_);
    });

    cout << "After sorting: " << endl;
    for(auto it = entities.begin(); it != entities.end(); it++) {
        cout << it->id_ << " " << it->description_ << endl;
    }

    int count = count_if(entities.begin(), entities.end(), [](const Entity& entity) {
        return entity.description_ == "bob";
    });

    cout << "\nCount \"bob\" instances: " << endl;
    cout << "bob: " << count << endl;

    auto it = find_if(entities.begin(), entities.end(), [](const Entity& entity) {
        return entity.description_ == "bob";
    });

    cout << "\nFind first instance of bob" << endl;
    if (it != entities.end()) {
        cout << it->id_ << " " << it->description_ << endl;
    }

    return 0;
}
