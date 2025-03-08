#include <iostream>
using namespace std;
int main() {
cout << "Vamos ver se funcionou?\nTalvez tenha funcionado." << "\n\n";
// Também funciona se tirar o using namespace std e colocar assim:  std::cout

//Contas:
int x = 10;
int y = 5;

cout << x + y << "\n\n";

// Tentar algo diferente:

int idadePai = 60;
cout << "Meu pai tem " << idadePai << " anos.\n\n";


string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "O tamanho do TXT e: " << txt.length();

return 0;
system("pause");
}
