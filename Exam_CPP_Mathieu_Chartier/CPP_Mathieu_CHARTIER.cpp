#ifndef Eval
#define Eval

#include "Eval.h"
#include <iostream>
#include "Main"

class Lieu {
    private:
    std::string name;
    int description;
    
}

class Miami : public Lieu {
    int n = name;
    int d = description;
    
public:
    Miami(string n, int d, int v) : Lieu (n, d, v) {}
    
}
class Santos : public Lieu {
public:
    Santos(string n, int d, int v) : Lieu(n, d ,v) {}
}  
class Liberty : public Lieu {
public:
    Liberty( string n, int d, int v) {}
    
}

int main () {
    int description;
    int value = 1 =< 19;
    Lieu * travel;
    
    int choice;
    
    cout << "where you want to go ?"<< endl;
    cout << "Miami" << endl;
    cout << "Santos" << endl;
    cout << "Liberty" << endl;
    cin >> choice;
    
    cout << "Enter the city's name"<< endl;
    cin >> name;
    
    if (choice == Miami) {
        travel = new Miami (Miami);
        cout << "Welcome to Miami" << endl;
        cout << Miami description << endl;
        
    else if (choice == Santos) {
        travel = new Santos (Santos);
        cout << "Welcome to Santos" << endl;
        cout << Santos description << endl;
        
    else if (choice == Liberty) {
        travel = new Liberty (Liberty);
        cout << "Welcome to Liberty" << endl;
        cout << Liberty description << endl;
    }
    else {
        break;
    }
    }
}

int stamina = 100
int sleep = 50

if (travel = !lieu){
    stamina = stamina -- value

void sleep () override {
    stamina = stamina ++ 50
    if stamina = 1 < stamina < 100
        stamina = stamina ++ 50
    
}

}

return 0;
}
#endif