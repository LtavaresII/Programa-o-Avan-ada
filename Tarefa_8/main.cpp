#include <iostream>

using namespace std;

class Vetor{
private:
    float x,y;
public:
    void setX(float mx){
        x = mx;
    }
    float getX(void){
        return x;
    }
};

int main()
{
    Vetor v1;
    v1.setX(3);

    cout << "x = " << v1.getX() << "\n";

    // x é privado e não pode ser acessado
    cout << "x = " << v1.x << "\n";

    return 0;
}
