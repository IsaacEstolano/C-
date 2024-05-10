#include <iostream>
#include <string>
class ContaBancaria{
    private:
        float numConta;
        std::string NomeTitular;
        float Saldo;
    public:
        ContaBancaria(float nrConta,std::string Nome,float SaldoInicial){
            numConta=nrConta;
            NomeTitular=Nome;
            Saldo=SaldoInicial;
        }
        void Deposito( float valorDeposito){
            Saldo+=valorDeposito;
            std::cout<<"O deposito de"<<valorDeposito<<"foi realizado com sucesso"<<std::endl;
        }
        void Saque(float Saque){
            if(Saldo>=Saque){
                Saldo-=Saque;
                std::cout<<"O saque de "<<Saque<<"Foi realizado e seu saldo atual e de"<<Saldo<<std::endl;
            }
            else{
                std::cout<<"O saque foi invalidado pois nao corresponde a seu saldo atual"<<std::endl;
            }
        }
        
        void MostrarDados(){
            std::cout<<"O seu numero da conta e:"<<numConta<<std::endl;
            std::cout<<"O nome do titular e:"<<NomeTitular<<std::endl;
            std::cout<<"O seu saldo atual e de:"<<Saldo<<std::endl;
        }
};

int main(){
    float numConta;
    std::string NomeTitular;
    float Saldo;

    std::cout<<"Digite o numero da conta:";
    std::cin>>numConta;
    std::cout<<"Digite o nome do titular:";
    std::cin>>NomeTitular;
    std::cout<<"Digite o seu saldo:";
    std::cin>>Saldo;

    ContaBancaria ContaObj(numConta,NomeTitular,Saldo);

    float valorDeposito;
    std::cout<<"Digite quanto quer depositar:";
    std::cin>>valorDeposito;
    ContaObj.Deposito(valorDeposito);
    ContaObj.MostrarDados();

    float valorSaque;
    std::cout<<"Digite quanto desejar sacar:";
    std::cin>>valorSaque;
    ContaObj.Saque(valorSaque);
    ContaObj.MostrarDados();
    return 0;
};