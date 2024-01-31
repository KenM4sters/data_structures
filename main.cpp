#include <iostream>

class App {
    public:
        App() {
            std::cout << "App" << std::endl;
        }
};

int main() {
    
    App* myApp = new App();

    return 0;
}