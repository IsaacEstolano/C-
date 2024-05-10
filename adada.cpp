#include <iostream>
#include <string>

class Aluno {
public:
    Aluno() {}
    ~Aluno() {}

    float CalcularMedia() {
        return ArmazenaNota / QuantidadeNota;
    }

    void MostrarDados() {
        std::cout << "Nome: " << Nome << std::endl;
        std::cout << "Matricula: " << Matricula << std::endl;
        std::cout << "Nota: " << Nota << std::endl;
        std::cout << "Media: " << CalcularMedia() << std::endl; // Chamar o método CalcularMedia() para obter a média
    }

    void set(float _Matricula, std::string _Nome, float _Nota) {
        Matricula = _Matricula;
        Nome = _Nome;
        Nota = _Nota;
    }

    void adicionarNota(float _Nota) {
        ArmazenaNota += _Nota;
        QuantidadeNota++;
    }

private:
    float Matricula;
    std::string Nome;
    float Nota;
    float ArmazenaNota = 0; // Inicializar com zero
    int QuantidadeNota = 0; // Inicializar com zero
};

int main() {
    float Matricula;
    std::string Nome;
    float Nota;
    
    std::cout << "Digite sua matricula: ";
    std::cin >> Matricula;
    std::cout << "Digite seu nome: ";
    std::cin >> Nome;

    Aluno aluno;
    aluno.set(Matricula, Nome, Nota); // Inicializando aluno com Matricula, Nome e Nota vazios

    float QuantidadeNota;
    std::cout << "Digite quantas notas voce ira armazenar: ";
    std::cin >> QuantidadeNota;
    
    for (int i = 0; i < QuantidadeNota; ++i) {
        std::cout << "Digite sua nota: ";
        std::cin >> Nota;
        aluno.adicionarNota(Nota); // Adicionando nota à lista de notas do aluno
    }

    aluno.MostrarDados(); // Exibindo os dados do aluno, incluindo a média

    return 0;
}
