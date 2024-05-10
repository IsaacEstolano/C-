#include <iostream>

class Retangulo{
    public:
        Retangulo(){//construtor

        }  
        ~Retangulo(){//destrutor

        }
        float CalcularPerimetro(){
            return 2*(altura+largura);
        }
        float CalcularArea(){
            return altura*largura;
        }
        void set(float _largura,float _altura){
            largura=_largura;
            altura=_altura;
        }
    private:
    float largura;
    float altura;
};

int main(){
    float altura;
    float largura;
    std::cout<<"Digite a altura:";
    std::cin>>altura;
    std::cout<<"Digite a largura:";
    std::cin>>largura;
    Retangulo retangulo;
    retangulo.set(largura,altura);
    std::cout<<"A area do retangulo:"<<retangulo.CalcularArea()<<"\n";
    std::cout<<"O perimetro do retangulo"<<retangulo.CalcularPerimetro()<<"\n";
    return 0;
}