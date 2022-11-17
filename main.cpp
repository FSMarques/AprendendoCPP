#include <iostream>
using namespace std;



int main() {
    int op, i=0;
    string nomes[10], contatos[10];
    do{ //faca        
        cout << "+========= Menu =========+ \n";
        cout << "| 1 - Cadastra Contrato  | \n";
        cout << "| 2 - Mostra Contrato    | \n";
        cout << "| 3 - Sair                  | \n";
        cout << "+========================+ \n";
        cout << "Escolha a opcao: ";
        cin >> op;
        
        switch(op){
            case 1:
                if (i<=9){
                cout << "*** Rotina de cadastro *** \n";
                cout << "# " << i << "\n";
                cout <<"Informe o nome: \n";
                cin >> nomes[i];
                cout << "Informe o contato: \n";
                cin >> contatos[i];
                cout << "--------------------------- \n";
                i++;
            }else{
                cout << "Agenda lotada! \n";
            }
            break;
                
            case 2:
                for(int c=0; c <= i; c++){
                cout << "*** Contatos *** \n";
                cout << "Nome: " << nomes[c] << "\n";
                cout << "Contato: " << contatos[c] << "\n";
                cout << "--------------------------- \n";
            }
                system("pause");
                break;
                
            case 3:
                cout << "Saindo... \n";
                cout << "--------------------------- \n";
                break;
                
            default:
                cout << "Opcao Invalida! \n";
                cout << "--------------------------- \n";
                break;
        } //Fim do switch
        system("cls");
        
    }while(op != 3); //enquanto
    return 0;
}
