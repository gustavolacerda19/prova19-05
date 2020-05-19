#include <iostream>

using namespace std;

int main()
{
    int compras, atrasos;
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

    return 0;
}
