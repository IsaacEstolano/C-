#include <iostream>
#include <string>

class Funcionario{
    public:
        Funcionario(){

        }
        ~Funcionario(){

        }
        void calculoSalario(){
            salarioLiquido=(salario+beneficios-descontos);
        }
        void mostrarDados(){
            std::cout<<"Nome:"<<nome<<std::endl;
            std::cout<<"Cargo:"<<cargoFuncionario<<std::endl;
            std::cout<<"Salario liquido:"<<salarioLiquido<<std::endl;
        }
        
    private:
        std::string nome;
        float salario;
        std::string cargoFuncionario;
        float descontos;
        float beneficios;
        float salarioLiquido;
};
   

void main(){
    std::string nome;
    float salario;
    std::string cargoFuncionario;
    float impostos;
    float beneficios;
    std::cout<<"Digite seu nome::";
    std::cin>>nome;
    std::cout<<"Digite seu cargo:";
    std::cin>>cargoFuncionario;
    std::cout<<"Digite seu salario:";
    std::cin>>salario;
    std::cout<<"Digite os beneficios a serem acrescentados:";
    std::cin>>beneficios;
    std::cout<<"Digite os impostos a serem descontados:";
    std::cin>>impostos;
    Funcionario Funcionario;

}