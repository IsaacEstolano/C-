#include <iostream>
#include <string>

class Funcionario {
public:
    // Construtor padrão
    Funcionario() {}

    // Métodos set para definir os atributos
    void setNome(const std::string& _nome) {
        if (!_nome.empty()) {
            nome = _nome;
        } else {
            std::cerr << "Erro: Nome não pode ser vazio." << std::endl;
        }
    }

    void setSalario(double _salario) {
        if (_salario >= 0) {
            salario = _salario;
        } else {
            std::cerr << "Erro: Salário não pode ser negativo." << std::endl;
        }
    }

    void setCargo(const std::string& _cargo) {
        if (!_cargo.empty()) {
            cargo = _cargo;
        } else {
            std::cerr << "Erro: Cargo não pode ser vazio." << std::endl;
        }
    }

    // Métodos get para acessar os atributos
    std::string getNome() const {
        return nome;
    }

    double getSalario() const {
        return salario;
    }

    std::string getCargo() const {
        return cargo;
    }

    // Método para calcular o salário líquido
    double CalcularSalarioLiquido(double taxaImposto, double beneficios) const {
        double impostos = salario * taxaImposto;
        double salarioLiquido = salario - impostos + beneficios;
        return salarioLiquido;
    }

    // Método para mostrar os dados do funcionário
    void MostrarDados(double taxaImposto, double beneficios) const {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Cargo: " << cargo << std::endl;
        std::cout << "Salario Bruto: R$ " << salario << std::endl;
        std::cout << "Salario Liquido: R$ " << CalcularSalarioLiquido(taxaImposto, beneficios) << std::endl;
    }

private:
    std::string nome;
    double salario;
    std::string cargo;
};

int main() {
    Funcionario funcionario;
    std::string nome;
    double salario;
    std::string cargo;
    double taxaImposto;
    double beneficios;

    std::cout << "Digite o nome do funcionario: ";
    std::getline(std::cin, nome);
    funcionario.setNome(nome);

    std::cout << "Digite o cargo do funcionario: ";
    std::getline(std::cin, cargo);
    funcionario.setCargo(cargo);

    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;
    funcionario.setSalario(salario);

    std::cout << "Digite a taxa de imposto (como uma fração, por exemplo, 0.15 para 15%): ";
    std::cin >> taxaImposto;

    std::cout << "Digite o valor dos beneficios: ";
    std::cin >> beneficios;

    funcionario.MostrarDados(taxaImposto, beneficios);

    // Exemplo de uso dos métodos get
    std::cout << "Nome do funcionário: " << funcionario.getNome() << std::endl;
    std::cout << "Cargo do funcionário: " << funcionario.getCargo() << std::endl;
    std::cout << "Salário do funcionário: R$ " << funcionario.getSalario() << std::endl;

    return 0;
}
