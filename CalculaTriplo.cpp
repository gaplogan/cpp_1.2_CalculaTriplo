#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double Num, Triplo; //declara��o das vari�veis do programa
    system("cls"); //comando "LimpaTela" limpa a tela do monitor de v�deo
    //{Entrada dos dados}
    cout << "Digite um n�mero: ";  //mensagem para que o usu�rio saiba o que deve fazer
    cin >> Num; //leitura do n�mero para a mem�ria
    //{Processamento}
    Triplo = Num * 3; //calcula o triplo e armazena o resultado na vari�vel Triplo
    //{Sa�da da informa��o}
    cout << endl; //apenas salta uma linha na tela do monitor de v�deo
    cout << "O Triplo de " << Num << " � " << Triplo << endl; //exibe o resultado

    return 0; //comando de fim do programa
}