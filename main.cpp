#include <iostream>
#include <string>
#include <stack>

using namespace std;
 
bool verificar_balanceamento(string a); // protótipo da função
// retorna True - expressão balanceada ou False - expressão não balanceada
int main()
{
    string expressao, resp;
    do{
        cout<<"\nDigite a expressao que deseja verificar: ";
        getline(cin, expressao);
      
        // fazer a mensagem que diz se está balanceada ou não
      
        verificar_balanceamento(expressao); // verifica se a expressão está balanceada
        cout<<"\nDeseja verificar outra expressao?(sim/nao) ";
        getline(cin, resp);
        
    }while(resp=="sim" or resp =="Sim");

    return 0;
}
