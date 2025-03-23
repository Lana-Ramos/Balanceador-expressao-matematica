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
    string expressao, resp;
    do
    {
        // Interação com o usuário
    }while(resp=="sim" or resp =="Sim");

    return 0;
}
