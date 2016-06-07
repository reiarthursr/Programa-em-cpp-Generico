#include <iostream>
#include <string>
using namespace std;

int batalha(int dano, int def, int vidam, int vida, int danoi, int defi, int vidami, int vidai, string inimigo_nome, string inimigo_l1, string inimigo_l2, string inimigo_l3, string inimigo_l4);

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

	int danoi;//Dano do inimigo
	int defi;//Defesa do inimigo
	int vidami;//Vida maxima do inimigo
	int vidai;//Vida do inimigo

	int gold = 10;//Gold (Dinheiro (Money))
	int erroloja = 0;//Números de erros cometidos na loja

	string inimigo_nome;//Nome do inimigo
	//Desenho do inimigo
	string inimigo_l1;
	string inimigo_l2;
	string inimigo_l3;
	string inimigo_l4;

	if (opcao == "super cheat generico")
	{
		cout << "Voce ativou o Super Cheat Generico!" << endl;
		cout << "E ganhou:" << endl;
		cout << "Espada Generica(4 dano)" << endl;
		cout << "Escudo Generico(2 def)" << endl;
		cout << "Sua vida passa do limite: 20/15" << endl;
		dano = 4;
		def = 2;
		vida = 20;
		system("pause");
		system("cls");
	}

	//Loja 1
	while( 1 == 1 )
	{
		cout << "Ola. Sou o vendedor de itens. \r\n(Digite a opcao desejada.)" << endl;
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
		else if (opcao == "roubar")
		{
			cout << "Voce tenta assaltar a loja do vendedor" << endl;
			cout << "E ele reage" << endl;
			cout << "" << endl;
			system("pause");
			system("cls");
			inimigo_nome = "Vendedor de itens Generico";
			vidai = 15;
			vidami = 15;
			danoi = 4;
			defi = 2;
			//Desenho
			inimigo_l1 = "";
			inimigo_l2 = "";
			inimigo_l3 = "";
			inimigo_l4 = "";

			//Batalha
			vida = batalha(dano, def, vidam, vida, danoi, defi, vidami, vidai, inimigo_nome, inimigo_l1, inimigo_l2, inimigo_l3, inimigo_l4);//Definindo a vida depois da batalha

			cout << "Voce levou os melhores equipamentos da loja, se cura com uma pocao e leva todo Gold do Vendedor" << endl;
			gold = gold + 25;
			dano = 6;
			def = 3;
			vida = vidam;
			system("pause");
			system("cls");
			break;
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
	inimigo_nome = "Monstro 1: Slime Generico";
	vidai = 5;
	vidami = 5;
	danoi = 2;
	defi = 0;
	//Desenho
	inimigo_l1 = "  ______     ";
	inimigo_l2 = " / |  | \\    ";
	inimigo_l3 = "|        |   ";
	inimigo_l4 = " \\______/    ";

	//Batalha
	vida = batalha(dano, def, vidam, vida, danoi, defi, vidami, vidai, inimigo_nome, inimigo_l1, inimigo_l2, inimigo_l3, inimigo_l4);//Definindo a vida depois da batalha

	//Monstro 2
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	inimigo_nome = "Monstro 2: Slime Generico";
	vidai = 3;
	vidami = 3;
	danoi = 3;
	defi = 0;
	//Desenho
	inimigo_l1 = "  ______     ";
	inimigo_l2 = " / |  | \\    ";
	inimigo_l3 = "|        |   ";
	inimigo_l4 = " \\______/    ";

	//Batalha
	vida = batalha(dano, def, vidam, vida, danoi, defi, vidami, vidai, inimigo_nome, inimigo_l1, inimigo_l2, inimigo_l3, inimigo_l4);//Definindo a vida depois da batalha

	//Monstro 3
	cout << "Voce se depara com um Slime Generico" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	inimigo_nome = "Monstro 3: Slime Generico";
	vidai = 8;
	vidami = 8;
	danoi = 1;
	defi = 0;
	//Desenho
	inimigo_l1 = "  ______     ";
	inimigo_l2 = " / |  | \\    ";
	inimigo_l3 = "|        |   ";
	inimigo_l4 = " \\______/    ";

	//Batalha
	vida = batalha(dano, def, vidam, vida, danoi, defi, vidami, vidai, inimigo_nome, inimigo_l1, inimigo_l2, inimigo_l3, inimigo_l4);//Definindo a vida depois da batalha

	cout << "Voce acaba de sair da planicie dos slimes (+20 Gold)" << endl;
	gold = gold + 20;//Recebendo Gold
	cout << "E encontra uma loja no caminho" << endl;
	cout << "" << endl;
	system("pause");
	system("cls");
	
	return 0;
}

int batalha(int dano, int def, int vidam, int vida, int danoi, int defi, int vidami, int vidai, string inimigo_nome, string inimigo_l1, string inimigo_l2, string inimigo_l3, string inimigo_l4)
{
	while (vidai > 0)
	{
		cout << inimigo_nome << endl;
		cout << "--------------." << endl;
		cout << inimigo_l1 << " | Inimigo " << endl;
		cout << inimigo_l2 << " | Vida:  " << vidai << "/" << vidami << endl;
		cout << inimigo_l3 << " | Voce " << endl;
		cout << inimigo_l4 << " | Vida:  " << vida << "/" << vidam << endl;
		cout << "--------------*" << endl;
		cout << "(Pressione algum botão para atacar)" << endl;
		system("pause");
		system("cls");
		//Causando danos
		int danoc;//Dano causado
		danoc = danoi - def;//Inimigo atacando
		if (danoc < 0) danoc = 0;
		vida = vida - danoc;
		danoc = dano - defi;//Voce atacando
		if (danoc < 0) danoc = 0;
		vidai = vidai - danoc;

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

	cout << "Voce derrotou " << inimigo_nome << endl;
	cout << "" << endl;
	system("pause");
	system("cls");

	return vida;//Retornando o valor da vida
}
