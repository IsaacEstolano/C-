#include <iostream>
#include <string>

class Funcionario{
    public:
        Funcionario(){

        }
        ~Funcionario(){

        }
        float calculoSalario(){
            salarioLiquido=salario+beneficios-descontos;
            return salarioLiquido;
        }
        void mostrarDados(){
            std::cout<<"Nome:"<<nome<<std::endl;
            std::cout<<"Cargo:"<<cargoFuncionario<<std::endl;
            std::cout<<"Salario liquido:"<<calculoSalario()<<std::endl;
        }
        void set(std::string _nome,float _salario,std::string _cargoFuncionario,float _descontos,float _beneficios){
                nome=_nome;
                salario=_salario;
                cargoFuncionario=_cargoFuncionario;
                descontos=_descontos;
                beneficios=_beneficios;
        }
    private:
        std::string nome;
        float salario;
        std::string cargoFuncionario;
        float descontos;
        float beneficios;
        float salarioLiquido;
};
   

int main(){
    std::string nome;
    float salario;
    std::string cargoFuncionario;
    float descontos;
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
    std::cin>>descontos;
    Funcionario funcionario;
    funcionario.set(nome,salario,cargoFuncionario,descontos,beneficios);
    funcionario.mostrarDados();
    return 0;
}