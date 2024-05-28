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
    protected:
        std::string nome;
        float salario=0;
        float salarioAumento=0;
        float ganhoAnual=0;
};
class Assistente :public Funcionario{
        public:
           Assistente(const std::string& _nome, float _salario, const std::string& _numeroMatricula)
        : Funcionario(_nome, _salario), numeroMatricula(_numeroMatricula) {}
        void setNumeroMatricula(std::string _numeroMatricula){
            numeroMatricula=_numeroMatricula;
        }


        std::string getnumeroMatricula()const{
            return numeroMatricula;

        }
        void mostrarDados (){
            Funcionario::mostrarDados();
            std::cout<<"Numero Matricula:"<<numeroMatricula<<std::endl;
        }
        protected:
        std::string numeroMatricula;

};
class Tecnico :public Assistente{
    public:
     Tecnico(const std::string& _nome, float _salario, const std::string& _numeroMatricula)
        :Assistente(_nome, _salario,_numeroMatricula) {}
    void bonusSalario(){
        std::cout<<"Digite o bonus salarial:";
        std::cin>>bonusValor;
    }
    void calculoBonus(){
        salario+=bonusValor;
    }
    void mostrarDados(){
       Assistente::mostrarDados();
    }
    private:
    float bonusValor;
};
class Admnistrativo :public Assistente{
    public:
     Admnistrativo(const std::string& _nome, float _salario, const std::string& _numeroMatricula)
        :Assistente(_nome, _salario,_numeroMatricula) {}



    protected:
        
};
int main(){
    std::string nome;
    float  salario;
    std::string numeroMatricula;
    float AT;
    std::cout<<"Digite seu nome:";
    std::cin>>nome;
    std::cout<<"Digite seu salario:";
    std::cin>>salario;
    std::cout<<"Digite seu numero de matricula:";
    std::cin>>numeroMatricula;
    std::cout<<"Digite 0 para funcionario comum,1 para Assistente Tecnico,2 para Assistente Administrativo e 3 para Assistente comum:";
    std::cin>>AT;
    if (AT==0){
        Funcionario funcionario(nome,salario);
        funcionario.addAumento(0);
        funcionario.calcularGanhoAnual();
        funcionario.mostrarDados();
    }

    if (AT==1)
    {
        Tecnico tecnico(nome,salario,numeroMatricula);
        tecnico.bonusSalario();
        tecnico.calculoBonus();
        tecnico.calcularGanhoAnual();
        tecnico.mostrarDados();
        
    }
    if(AT==2){

    }
    if(AT==3){
        Assistente assistente(nome,salario,numeroMatricula);
        assistente.addAumento(0);
        assistente.calcularGanhoAnual();
        assistente.mostrarDados();
    }
    
    return 0;
}