#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double Num, Triplo; //declaração das variáveis do programa
    system("cls"); //comando "LimpaTela" limpa a tela do monitor de vídeo
    //{Entrada dos dados}
    cout << "Digite um número: ";  //mensagem para que o usuário saiba o que deve fazer
    cin >> Num; //leitura do número para a memória
    //{Processamento}
    Triplo = Num * 3; //calcula o triplo e armazena o resultado na variável Triplo
    //{Saída da informação}
    cout << endl; //apenas salta uma linha na tela do monitor de vídeo
    cout << "O Triplo de " << Num << " é " << Triplo << endl; //exibe o resultado

    return 0; //comando de fim do programa
}