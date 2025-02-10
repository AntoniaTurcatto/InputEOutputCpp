//biblioteca de in/out no terminal
#include <iostream>
#include <limits>

int addNumbers(int first, int second){
    return first+second;
}

//função main
int main(){
    
    std::cout << "Hello World" <<std::endl; // prints Hello World
    std::cout << "Hello "; //System.out.print()
    std::cout << "World" <<std::endl; //System.out.println()

    int age;
    std::string name;
    std::cout << "Digite seu sobrenome e idade, separado por espaço" << std::endl;

    std::cin >> name >> age;
    
    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are "<<age<<" years old!" <<std::endl;
 
    //lendo data com espaço
    std::cout << "digite seu nome completo: ";
    std::string nomeCompleto; 
    //limpando buffer de caractere residual que foi deixado por std::cin >> name >> age;
    //  (deixa no final da linha um \n, e o getLine lê até o \n, o que pode acabar que nomeCompleto = "")

    // o que faz:
    /*
        A função std::cin.ignore(n, c) faz com que o fluxo de entrada (std::cin)
        descarte caracteres até uma das seguintes condições ser atendida:

        1) For lido n caracteres → Se chegarmos no limite de caracteres especificado.
        2) Encontrar o caractere c → A função para assim que encontra o caractere delimitador.

        Descartar tudo até encontrar um \n (ultimo caractere (também é descartado)).
        std::numeric_limits<std::streamsize>::max() retorna o maior número possível de caracteres,
        garantindo que qualquer lixo seja removido.
    */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, nomeCompleto); //de onde pega e para onde vai

    std::cout << "Seu nome completo eh: "<<nomeCompleto << std::endl;
    return 0;//finalizou com sucesso
}