#include <iostream>
#include <string>

class Aluno {
public:
    Aluno() {}
    ~Aluno() {}

    float CalcularMedia() {
        if (QuantidadeNota == 0) return 0; 
        return ArmazenaNota / QuantidadeNota;
    }

    void AdicionarNota(float _nota) {
        ArmazenaNota += _nota;
        QuantidadeNota++;
    }

    void MostrarDados() {
        std::cout << "Nome: " << Nome << std::endl;
        std::cout << "Matricula: " << Matricula << std::endl;
        std::cout << "Media: " << CalcularMedia() << std::endl; 
    }

    void set(float _Matricula, std::string _Nome, float _Nota) {
        Matricula = _Matricula;
        Nome = _Nome;
        Nota = _Nota;
    }

private:
    float Matricula;
    std::string Nome;
    float Nota;
    float ArmazenaNota = 0;
    int QuantidadeNota = 0;
};

int main() {
    Aluno aluno;
    float Matricula;
    std::string Nome;
    float Nota;

    std::cout << "Digite sua matricula: ";
    std::cin >> Matricula;
    std::cout << "Digite seu nome: ";
    std::cin >> Nome;

    std::cout << "Digite quantas notas voce ira armazenar: ";
    int QuantidadeNotas;
    std::cin >> QuantidadeNotas;

    aluno.set(Matricula, Nome, 0); 
    for (int i = 0; i < QuantidadeNotas; ++i) {
        std::cout << "Digite sua nota: ";
        std::cin >> Nota;
        aluno.AdicionarNota(Nota); 

    aluno.MostrarDados(); 

    return 0;
}
