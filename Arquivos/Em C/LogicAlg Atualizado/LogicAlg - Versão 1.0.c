#include <stdio.h> //...........................................................................................Biblioteca padrão entrada e saida.
#include <stdlib.h> //..........................................................................................Biblioteca para limpar tela.
#include <locale.h> //..........................................................................................Biblioteca para colocar em português.
#include <conio.h> //...........................................................................................Biblioteca para posiciona o cursor
#include <ctype.h>//............................................................................................Biblioteca para funções de Manipulação de caracter.
#include <windows.h>//..........................................................................................Biblioteca para utilização do SetConsoleCursorPosition.
#include "funcao.h"//...........................................................................................Biblioteca para solicitar todas as funções

int main(){//...................................................................................................Função principal do algoritmo.
	setlocale(LC_ALL,"portuguese");//...........................................................................Idioma Portugês Brasil.
	COORD coord;//..............................................................................................Coordenadas X=Coluna,Y=Linhas
	int OPCAO,RMenuSobre=0,resposta1,resposta5, acertos=0, acertosAprendizado=0,OpcaoNiveis,RespPNB3a;//........Variavel para números inteiros.
	char NOME[100],resposta2,resposta3,resposta4,MenuSobre[50];//...............................................Variavel para caracteres.


	Tela_Inicial(); //..........................................................................................Função que ira chamar a tela inicial
	Informe_o_seu_Nome(NOME);//.................................................................................Função que ira perguntar qual o nome do usuario
	Iniciar_com_Nivel_de_Habilidade_0(acertos);//...............................................................Função que ira iniciar o nível de habilidade do usuario=0
	Iniciar_com_Nivel_de_Aprendizado_0(acertosAprendizado);//...................................................Função que ira iniciar o nível de aprendizado do usuario=0
	
	
	do{//.......................................................................................................Estrutura de repetição do Menu.
	do{//.......................................................................................................Estrutura de repetição do Menu "Informações" dobe o LógicALG.		
	RMenuSobre=0;//.............................................................................................Zerando o valor da variavel do loop da estrutura de repetição do Menu.
	
	OPCAO=Menu_Opcoes(NOME,OPCAO);//............................................................................Função que pergunta qual opção do Menu o usuario deseja iniciar.
switch(OPCAO){//................................................................................................Comando de escolha caso para o Menu.	

case 1:
	Apresentacao_Niveis(NOME);//.................................................................................Função que ira apresentar os níveis ao usuario.
	acertos=Pergunta_01_Nivel_de_Habilidade(resposta1,acertos);//................................................Função que ira chamar a pergunta de habilidade 01.
	acertos=Pergunta_02_Nivel_de_Habilidade(resposta2,acertos);//................................................Função que ira chamar a pergunta de habilidade 02.
	acertos=Pergunta_03_Nivel_de_Habilidade(resposta3,acertos);//................................................Função que ira chamar a pergunta de habilidade 03.
	acertos=Pergunta_04_Nivel_de_Habilidade(resposta4,acertos);//................................................Função que ira chamar a pergunta de habilidade 04.
	acertos=Pergunta_05_Nivel_de_Habilidade(resposta5,acertos);//................................................Função que ira chamar a pergunta de habilidade 05.
	Analisando_o_Nivel_de_Habilidade();	//.......................................................................Função que ira analisar qual nível o usuario deve iniciar.			
	acertos=Usuario_pode_voltar_ao_Nivel_anterior(acertos,OpcaoNiveis);//........................................Função que permite o usuario retornar ao nível anterior.

	switch(acertos){//...........................................................................................Comando de escolha para informa o nível do usuario.
		case 0:
		case 1:
		case 2:
		case 3:
		Nivel_Baixo_Nivel_1_Conteudo();//.........................................................................Função que ira mostrar o conteudo no nivel baixo.
		acertosAprendizado=Pergunta_01_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Função que ira chamar a pergunta 01 do nível baixo de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Função que ira chamar a pergunta 02 do nível baixo de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Função que ira chamar a pergunta 03 do nível baixo de aprendizado.
		case 4:
		Nivel_Intermediario_Nivel_2_Conteudo();//.................................................................Função que ira mostrar o conteudo no nivel Intermediario.
		acertosAprendizado=Pergunta_01_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Função que ira chamar a pergunta 01 do nível intermediario de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Função que ira chamar a pergunta 02 do nível intermediario de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Função que ira chamar a pergunta 03 do nível intermediario de aprendizado.
		case 5:
		Nivel_Avancado_Nivel_3_Conteudo	();//.....................................................................Função que ira mostrar o conteudo no nivelavançado.
		acertosAprendizado=Pergunta_01_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Função que ira chamar a pergunta 01 do nível avançado de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Função que ira chamar a pergunta 02 do nível avançado de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Função que ira chamar a pergunta 03 do nível avançado de aprendizado.
		
		Apresentando_Resultados_e_Finalizando();//................................................................Função que ira calcular qual a média final do usuario.	
		exit(0);}//...............................................................................................Finaliza o programa			

case 2: //........................................................................................................Se o usuario Digitar "Sobre" ele entra aqui			
		Informacoes_Sobre_LogicAlg(RMenuSobre); //................................................................Função que ira mostrar "Sobre o LogicAlg"
		break;
		
case 3:	exit(0);//................................................................................................Finaliza o programa

default: //.......................................................................................................Caso o usuario digite um comando diferente no exigido no menu.
		printf("Comando invalido, tente novamente :)\n");//.......................................................Mensagem em tela.
		getch();//................................................................................................Parar tela
		system("cls");}//.........................................................................................Limpar a tela.
	
		}while(RMenuSobre!=1,2);//................................................................................Fim da estrutura de repetição do Menu "Informações" dobe o LógicALG.	
		} while (OPCAO!=1,2,3);//.................................................................................Fim da estrutura de repetição do Menu.

		return 0;}//..............................................................................................Retorna com valor 0.
		
