#include <iostream>
#include <string>

class Funcionario{
    public:
        Funcionario(){

        }
        ~Funcionario(){
        }
        float addAumento(double valor){
            std::cout<<"Digite quanto de aumento ira receber:";
            std::cin>>valor;
            return salario+=valor;
        }
    private:
        std::string nome;
        float salario;

};
int main(){
    std::string nome;
    float  salario;
    float valor=0;
    std::cout<<"Digite seu nome:";
    std::cin>>nome;
    std::cout<<"Digite seu salario:";
    std::cin>>salario;
    Funcionario funcionario;
    funcionario.addAumento(valor);
    return 0;
}