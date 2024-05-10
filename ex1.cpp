#include <iostream>

class Circulo{
    public:
        Circulo(){//Construtor(n sei oq e)
        }
        ~Circulo(){//Destrutor
        }

        float CalcularArea(){
            return 3.14 *raio*raio;
        }
        float CalcularPerimetro(){
            return 2*3.14*raio;
        }
        void set(float _raio){
            raio=_raio;
        }
    private:
        float raio;
};

void main(){
    Circulo circulo;
    float raio;
    std::cout<<"Digite o raio:";
    std::cin>>raio;
    circulo.set(raio);
    std::cout<<"Area do Circulo:"<<circulo.CalcularArea() <<"\n";
    std::cout<<"Perimetro do Circulo:"<<circulo.CalcularPerimetro()<<"\n";

}