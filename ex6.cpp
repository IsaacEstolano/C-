#include <iostream>
#include <string>

class Funcionario{
    public:
        Funcionario(const std::string& _nome,float _salario)
            :nome(_nome),salario(_salario),salarioAumento(_salario),ganhoAnual(0)
        {
        }
        ~Funcionario(){
        }
        void addAumento(double valor){
            std::cout<<"Digite quanto de aumento ira receber:";
            std::cin>>valor;
            salarioAumento=salario+valor;
        }
        void calcularGanhoAnual(){
            ganhoAnual=salarioAumento*12;
        }
        void mostrarDados(){
            std::cout<<"Nome:"<<nome<<std::endl;
            std::cout<<"Salario:"<<salario<<std::endl;
            std::cout<<"Salario com aumento:"<<salarioAumento<<std::endl;
            std::cout<<"Ganho anual:"<<ganhoAnual<<std::endl;
        }
        void setTudo(const std::string& _nome,float _salario){
            nome=_nome;
            salario=_salario;
        }
    private:
        std::string nome;
        float salario=0;
        float salarioAumento=0;
        float ganhoAnual=0;
};
int main(){
    std::string nome;
    float  salario;
    std::cout<<"Digite seu nome:";
    std::cin>>nome;
    std::cout<<"Digite seu salario:";
    std::cin>>salario;
    Funcionario funcionario(nome,salario);
    funcionario.addAumento(0);
    funcionario.calcularGanhoAnual();
    funcionario.mostrarDados();
    return 0;
}