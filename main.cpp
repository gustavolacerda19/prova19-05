#include <iostream>

using namespace std;

int main()
{
    int compras, atrasos, scorecompras;
    double valormedio;
    string formapagamento;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl;

    cout << endl << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> compras;
    cout << "Qual o ticket medio? ";
    cin >> valormedio;

    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> atrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> formapagamento;

    if (valormedio == 0) {
        scorecompras = 0;
    }
    else if (valormedio <= 3000 && compras <= 2) {
        scorecompras = 20;
    }
    else if (valormedio <= 3000 && compras > 2) {
        scorecompras = 40;
    }
    else {
        scorecompras = 60;
    }

    cout << endl << "Score de volume de compras = " << scorecompras << " pontos" << endl;

    return 0;
}
