#include <iostream>

class Circulo{
    private:
        float raio;
    public:
        Circulo(float r){//Construtor(n sei oq e)
            raio=r;
        }
        float CalcularArea(){
            return 3.14 *raio*raio;
        }
        float CalcularPerimetro(){
            return 2*3.14*raio;
        }
};

int main(){
    float raio;
    std::cout<<"Digite o raio:";
    std::cin>>raio;
    Circulo MeuCirculo(raio);
    std::cout<<"Area do Circulo:"<<MeuCirculo.CalcularArea() <<std::endl;
    std::cout<<"Perimetro do Circulo:"<<MeuCirculo.CalcularPerimetro()<<std::endl;



    return 0;
}