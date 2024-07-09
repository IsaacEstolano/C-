#include <iostream>
#include <string>

class Quadrilatero {
    public:
        Quadrilatero(){};
        ~Quadrilatero(){};
    void calcularArea(){
        area=altura*lado;
        std::cout<<"A area do quadrilatero e de"<<area<<std::endl;
    }
    float getArea(){
        return area;
    }
    protected:
    int altura=5;
    int area=0;
    int lado=10;
};
    class Trapezio{
        public:
            Trapezio(){};

            void calculoTrapezioA(){
                area=((baseMaior+baseMenor)/2)*altura;
                std::cout<<"A area do trapezio e de"<<area<<std::endl;
            }
        private:
            int baseMaior=2;
            int baseMenor=4;
            int altura=10; 
            int area=0;
    };
int main(){
    Quadrilatero quadrilatero;
    quadrilatero.calcularArea();
    Trapezio trapezio;
    trapezio.calculoTrapezioA();
    return 0;
}