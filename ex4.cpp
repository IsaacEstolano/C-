#include <iostream>
#include <string>
class Aluno{
    public:
        Aluno(){

        }
        ~Aluno(){

        }

        float CalcularMedia(float ArmazenaNota,float QuantidadeNota){
            return ArmazenaNota/QuantidadeNota;
        }
        void MostrarDados(){
            std::cout<<""
        }
    private:
        float matricula;
        std::string nome;
        float nota;
};




int main(){
    float Matricula;
    std::string Nome;
    float Nota;
    std::cout<<"Digite sua matricula:";
    std::cin>>Matricula;
    std::cout<<"Digite seu nome";
    std::cin>>Nome;
    
    float QuantidadeNota;
    float ArmazenaNota;
    std::cout<<"Digite quantas notas voce ira armazenar:";
    std::cin>>QuantidadeNota;
    
     while (QuantidadeNota>0);
    {
        std::cout<<"Digite sua nota";
        std::cin>>Nota;
        ArmazenaNota+=Nota;
        QuantidadeNota--;
    }
    return 0;
}