#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Bem-vindo(a) ao Super RPG Generico!" << endl;//Tela inicial
	cout << "" << endl;
	cout << "(Enter para continuar)" << endl;
	string opcao;//Seleção da opção
	getline(cin,opcao);//Opção em string nescessária neste programa para uma atualização futuras
	system("cls");//Limpando a tela

	int dano = 1;//Dano
	int def = 0;//Defesa
	int vidam = 15;//Vida maxima
	int vida = 15;//Vida atual
	int vidai;//Vida do inimigo
	int danoi;//Dano do inimigo
	int defi;//Defesa do inimigo
	int gold = 10;//Gold (Dinheiro (Money))
	int erroloja = 0;//Números de erros cometidos na loja

	//Loja 1
	while( 1 == 1 )
	{
		cout << "Ola. Sou o vendedor de itens. (Digite a opção desejada.)" << endl;
		cout << "Gold: " << gold << " | Dano: " << dano << " | Def: " << def << endl;
		cout << "(1) Espada de madeira(2 dano) - 10 Gold" << endl;
		cout << "(2) Escudo de couro(1 def) - 10 Gold" << endl;
		cout << "(s) Sair da loja" << endl;
		cin >> opcao;//Pedindo para Digitar a opção
		system("cls");

		//Checando opção
		if( opcao == "1" )
		{
			if (gold >= 10 )
			{
				cout << "Você comprou uma Espada de madeira(2 dano)" << endl;
				cout << "" << endl;
				gold = gold - 10;
				dano = 2;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Voce nao tem gold o suficiente" << endl;
				cout << "" << endl;
				system("pause");
				system("cls");
			}
		}
		else if ( opcao == "2" )
		{
			if (gold >= 10)
			{
				cout << "Voce comprou uma Escudo de couro(1 def)" << endl;
				cout << "" << endl;
				gold = gold - 10;
				def = 1;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "Voce nao tem gold o suficiente" << endl;
				cout << "" << endl;
				system("pause");
				system("cls");
			}
		}
		else if ( opcao == "s" )
		{
			erroloja = 0;
			break;
			system("cls");
		}
		else if ( erroloja > 2 )
		{
			cout << "O vendedor de itens achou que voce era um estrangeiro" << endl;
			cout << "E te expulsou da loja" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");
			break;
		}
		else
		{
			cout << "Opção desconhecida" << endl;
			cout << "" << endl;
			erroloja = erroloja+1;
			system("pause");
			system("cls");
		}
	}

	//Dungeon 1
	cout << "Planicie dos Slimes" << endl;
	//Monstro 1
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	vidai = 5;
	danoi = 2;
	defi = 0;

	while ( vidai > 0)
	{
		cout << "Monstro 1: Slime Generico" << endl;
		cout << "--------------." << endl;
		cout << "  ______      | Monstro " << endl;
		cout << " / |  | \\     | Vida:  " << vidai << "/5" << endl;
		cout << "|        |    | Voce " << endl;
		cout << " \\______/     | Vida:  " << vida << "/" << vidam << endl;
		cout << "--------------*" << endl;
		cout << "(Pressione algum botão para atacar)" << endl;
		system("pause");
		system("cls");
		//Causando danos
		vida = vida -(danoi - def);
		vidai = vidai -(dano - defi);

		//Tela de morte
		if (vida <= 0)
		{
			cout << "Voce morreu" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");
			exit(0);//Sair do jogo
		}
	}

	cout << "Voce derrotou o Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");

	//Monstro 2
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	vidai = 3;
	danoi = 3;
	defi = 0;

	while (vidai > 0)
	{
		cout << "Monstro 2: Slime Generico" << endl;
		cout << "--------------." << endl;
		cout << "  ______      | Monstro " << endl;
		cout << " / |  | \\     | Vida:  " << vidai << "/3" << endl;
		cout << "|        |    | Voce " << endl;
		cout << " \\______/     | Vida:  " << vida << "/" << vidam << endl;
		cout << "--------------*" << endl;
		cout << "(Pressione algum botão para atacar)" << endl;
		system("pause");
		system("cls");
		//Causando danos
		vida = vida - (danoi - def);
		vidai = vidai - (dano - defi);

		//Tela de morte
		if (vida <= 0)
		{
			cout << "Voce morreu" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");
			exit(0);//Sair do jogo
		}
	}

	cout << "Voce derrotou o Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");

	//Monstro 3
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	vidai = 8;
	danoi = 1;
	defi = 0;

	while (vidai > 0)
	{
		cout << "Monstro 3: Slime Generico" << endl;
		cout << "--------------." << endl;
		cout << "  ______      | Monstro " << endl;
		cout << " / |  | \\     | Vida:  " << vidai << "/8" << endl;
		cout << "|        |    | Voce " << endl;
		cout << " \\______/     | Vida:  " << vida << "/" << vidam << endl;
		cout << "--------------*" << endl;
		cout << "(Pressione algum botão para atacar)" << endl;
		system("pause");
		system("cls");
		//Causando danos
		vida = vida - (danoi - def);
		vidai = vidai - (dano - defi);

		//Tela de morte
		if (vida <= 0)
		{
			cout << "Voce morreu" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");
			exit(0);//Sair do jogo
		}
	}

	cout << "Voce derrotou o Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");

	cout << "Voce acaba de sair da planicie dos slimes" << endl;
	cout << "E encontra uma loja no caminho" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	
	return 0;
}