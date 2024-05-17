#include <iostream>
#include <string>

class Funcionario{
    public:
        Funcionario(){

        }
        ~Funcionario(){
        }
        float addAumento(double valor,float salarioAumento){
            std::cout<<"Digite quanto de aumento ira receber:";
            std::cin>>valor;
            salarioAumento=salario+valor;
            return salarioAumento;
        }
        float ganhoAnual(float ganhoAnual,double valor){
            ganhoAnual=salarioAumento*12;
            return ganhoAnual;
        }
        void mostrarDados(){
            std::cout<<"Nome:"<<nome<<std::endl;
            std::cout<<"Salario:"<<salario<<std::endl;
            std::cout<<"Salario com aumento:"<<salarioAumento<<std::endl;
            std::cout<<"Ganho anual:"<<ganhoAnual<<std::endl;
        }
    private:
        std::string nome;
        float salario;
        float salarioAumento;
        float ganhoAnual;
};
int main(){
    std::string nome;
    float  salario;
    std::cout<<"Digite seu nome:";
    std::cin>>nome;
    std::cout<<"Digite seu salario:";
    std::cin>>salario;
    Funcionario funcionario;
    float valor=0;
    float salarioAumento=0;
    funcionario.addAumento(valor,salarioAumento);
    funcionario.mostrarDados();
    return 0;
}