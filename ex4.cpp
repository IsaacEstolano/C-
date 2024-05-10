#include <iostream>
#include <string>
class Aluno{
    public:
        Aluno(){

        }
        ~Aluno(){

        }
        float CalcularMedia(float ArmazenaNota=0,float QuantidadeNota,float Media){
            Media=ArmazenaNota/QuantidadeNota;
            return Media ;
        }
        float AdicionarNota(){
            
        }
        void MostrarDados(){
            std::cout<<"Nome:"<<Nome<<std::endl;
            std::cout<<"Matricula:"<<Matricula<<std::endl;
            std::cout<<"Nota:"<<Nota<<std::endl;
            std::cout << "Media: " << CalcularMedia() << std::endl;
        }
        void set(float _Matricula,std::string _Nome,float _Nota,float _ArmazenaNota,float _QuantidadeNota){
            Matricula=_Matricula;
            Nome=_Nome;
            Nota=_Nota;

        }
    private:
        float Matricula;
        std::string Nome;
        float Nota;
        float ArmazenaNota;
        float QuantidadeNota;
};
int main(){
    Aluno aluno;
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
    
     while (QuantidadeNota>0)
    {
        std::cout<<"Digite sua nota";
        std::cin>>Nota;
       aluno.AdicionarNota(Nota);
    }
    
    aluno.CalcularMedia(ArmazenaNota,QuantidadeNota);
    aluno.set(Matricula,Nome,Nota);
    aluno.MostrarDados();
    
    return 0;
}