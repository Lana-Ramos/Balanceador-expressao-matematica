#include <iostream>
#include <string>
#include <stack>

using namespace std;

// True = Balanceada , False = Não Balanceada
bool verificar_balanceamento(string expressao)
{
    // pilha para guardar elementos da expressão
    stack<char> s;
    
    // Laço de repetição para iterar cada elemento da matriz 'c'
    for (int i = 0; i < expressao.length(); ++i)
    {
        char c = expressao[i];

        // Guardando os símbolos de agrupamento de abertura na pilha
        if (c == '(' or c == '{' or c == '[')
        {
            s.push(c);
        }
        
        // Verificação da igualdade entre os elementos da expressão e pilha
        else if (c == ')' or c == '}' or c == ']') 
        {
            // Caso a pilha estaja vazia, irá retornar falso
            if (s.empty()) return false; 

            char top = s.top();
            s.pop();

            if (c == ')' && top != '(' or c == '}' && top != '{' or c == ']' && top != '[') 
            {   
                // Caso o elemento não seja correspondente, irá retornar falso
                return false;
            }
        }
    }

    return s.empty();
}

int main()
{
    // Variáveis para armazenar a expressão e a resposta do usuário
    string expressao, resp;
    do
    {
        // Interação com o usuário
        cout << "\nDigite uma expressao: ";
        cin >> expressao;
         // Chama a função e exibe o resultado
        if (verificar_balanceamento(expressao))
            cout << "\nExpressão Balanceada!";
        else
            cout << "\nExpressão Não Balanceada!";
        // Pergunta se o usuário deseja continuar
        cout << "\nDeseja verificar outra expressão? (sim/nao): ";
        cin >> resp;
    }while(resp=="sim" or resp =="Sim" or resp =="SIM");

    return 0;
}
