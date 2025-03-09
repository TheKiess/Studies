#include <iostream>
using namespace std;
int main() {
cout << "Vamos ver se funcionou?\nTalvez tenha funcionado." << "\n\n";
// Também funciona se tirar o using namespace std e colocar assim:  std::cout

//Contas:
const float x = 10; // Com "const" o meu valor não pode ser mudado.
const double y = 5; // Float para double muda que float é até 6-7 dígitos e double 15.

cout << x + y << "\n\n";
//cout << 35e5; <- Fazer números extensos 35 + 5 "0" após
// Tentar algo diferente:

int idade;

cout << "Quantos anos voce tem?\n";
cin >> idade;
cout << "\nVocê tem " << idade << " anos\n\n";

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "O tamanho do TXT e: " << txt.length(); // <- Mesma coisa do "len" do python, faz contagem 
system("pause");
return 0;
}
