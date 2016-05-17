#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Bem-vindo(a) ao Super RPG Generico!" << endl;//Tela inicial
	cout << " (Enter para continuar)" << endl;
	cout << "--------------------------------------------------" << endl;
	string opcao;//Seleção da opção
	getline(cin,opcao);//Opção em string nescessária neste programa para uma atualização futuras

	int dano = 2;//Dano
	int def = 0;//Defesa
	int vidam = 15;//Vida maxima
	int vida = 15;//Vida atual
	int vidai;//Vida do inimigo
	int gold = 10;//Gold (Dinheiro (Money))
	int erroloja;//Números de erros cometidos na loja

	//Loja 1
	while( 1 == 1 )
	{
		erroloja = 0;//Resetar os erros da loja
		cout << "Ola. Sou o vendedor de itens. (Digite a opção desejada.)" << endl;
		cout << "" << endl;
		cout << "(1) Espada de madeira(2 dano) - 10 Gold" << endl;
		cout << "(2) Escudo de couro(1 def) - 10 Gold" << endl;
		cout << "(s) Sair da loja" << endl;
		cout << "--------------------------------------------------" << endl;
		cin >> opcao;//Pedindo para Digitar a opção

		//Checando opção
		if( opcao == "1" )
		{
			if (gold >= 10 )
			{
				cout << "Você comprou uma Espada de madeira(2 dano)" << endl;
				cout << "(Enter para continuar)" << endl;
				cout << "--------------------------------------------------" << endl;
				gold = gold - 10;
				dano = 2;
				cin >> opcao;
			}
			else
			{
				cout << "Voce nao tem gold o suficiente" << endl;
				cout << "(Enter para continuar)" << endl;
				cout << "--------------------------------------------------" << endl;
				cin >> opcao;
			}
		}
		else if ( opcao == "2" )
		{
			if (gold >= 10)
			{
				cout << "Voce comprou uma Escudo de couro(1 def)" << endl;
				cout << "(Enter para continuar)" << endl;
				cout << "--------------------------------------------------" << endl;
				gold = gold - 10;
				def = 1;
				cin >> opcao;
			}
			else
			{
				cout << "Voce nao tem gold o suficiente" << endl;
				cout << "(Enter para continuar)" << endl;
				cout << "--------------------------------------------------" << endl;
				cin >> opcao;
			}
		}
		else if ( opcao == "s" )
		{
			cout << "--------------------------------------------------" << endl;
			break;
		}
		else if ( erroloja > 2 )
		{
			cout << "O vendedor de itens achou que voce era um estrangeiro" << endl;
			cout << "E te expulsou da loja" << endl;
			cout << "(Enter para continuar)" << endl;
			cout << "--------------------------------------------------" << endl;
			cin >> opcao;
			break;
		}
		else
		{
			cout << "Opção desconhecida" << endl;
			cout << "(Enter para continuar)" << endl;
			cout << "--------------------------------------------------" << endl;
			erroloja = erroloja+1;
			cin >> opcao;
		}
	}

	//Dungeon 1
	cout << "Dungeon 1!" << endl;
	//Monstro 1
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "(Enter para continuar)" << endl;
	cout << "--------------------------------------------------" << endl;
	cin >> opcao;
	vidai = 5;//Vida do Monstro 1
	while ( vidai > 0)
	{
		cout << "Monstro 1: Slime Generico" << endl;
		cout << "--------------." << endl;
		cout << "  ______      | Monstro " << endl;
		cout << " / |  | \\     | Vida:  " << vidai << "/5" << endl;
		cout << "|        |    | Voce " << endl;
		cout << " \\______/     | Vida:  " << vida << "/" << vidam << endl;
		cout << "--------------*" << endl;
		cout << "(Enter para atacar)" << endl;
		cout << "--------------------------------------------------" << endl;
		cin >> opcao;
		//Causando danos
		vida = vida - 2;
		vidai = vidai - dano;

		//Tela de morte
		if (vida <= 0)
		{
			cout << "Voce morreu" << endl;
			cout << "(Enter para sair do jogo)" << endl;
			cout << "--------------------------------------------------" << endl;
			exit(0);
		}
	}

	cout << "Voce matou o Slime Generico" << endl;
	cout << "(Enter para continuar)" << endl;
	cout << "--------------------------------------------------" << endl;
	cin >> opcao;
	return 0;
}