#include <stdio.h> //...........................................................................................Biblioteca padr�o entrada e saida.
#include <stdlib.h> //..........................................................................................Biblioteca para limpar tela.
#include <locale.h> //..........................................................................................Biblioteca para colocar em portugu�s.
#include <conio.h> //...........................................................................................Biblioteca para posiciona o cursor
#include <ctype.h>//............................................................................................Biblioteca para fun��es de Manipula��o de caracter.
#include <windows.h>//..........................................................................................Biblioteca para utiliza��o do SetConsoleCursorPosition.
#include "funcao.h"//...........................................................................................Biblioteca para solicitar todas as fun��es

int main(){//...................................................................................................Fun��o principal do algoritmo.
	setlocale(LC_ALL,"portuguese");//...........................................................................Idioma Portug�s Brasil.
	COORD coord;//..............................................................................................Coordenadas X=Coluna,Y=Linhas
	int OPCAO,RMenuSobre=0,resposta1,resposta5, acertos=0, acertosAprendizado=0,OpcaoNiveis,RespPNB3a;//........Variavel para n�meros inteiros.
	char NOME[100],resposta2,resposta3,resposta4,MenuSobre[50];//...............................................Variavel para caracteres.


	Tela_Inicial(); //..........................................................................................Fun��o que ira chamar a tela inicial
	Informe_o_seu_Nome(NOME);//.................................................................................Fun��o que ira perguntar qual o nome do usuario
	Iniciar_com_Nivel_de_Habilidade_0(acertos);//...............................................................Fun��o que ira iniciar o n�vel de habilidade do usuario=0
	Iniciar_com_Nivel_de_Aprendizado_0(acertosAprendizado);//...................................................Fun��o que ira iniciar o n�vel de aprendizado do usuario=0
	
	
	do{//.......................................................................................................Estrutura de repeti��o do Menu.
	do{//.......................................................................................................Estrutura de repeti��o do Menu "Informa��es" dobe o L�gicALG.		
	RMenuSobre=0;//.............................................................................................Zerando o valor da variavel do loop da estrutura de repeti��o do Menu.
	
	OPCAO=Menu_Opcoes(NOME,OPCAO);//............................................................................Fun��o que pergunta qual op��o do Menu o usuario deseja iniciar.
switch(OPCAO){//................................................................................................Comando de escolha caso para o Menu.	

case 1:
	Apresentacao_Niveis(NOME);//.................................................................................Fun��o que ira apresentar os n�veis ao usuario.
	acertos=Pergunta_01_Nivel_de_Habilidade(resposta1,acertos);//................................................Fun��o que ira chamar a pergunta de habilidade 01.
	acertos=Pergunta_02_Nivel_de_Habilidade(resposta2,acertos);//................................................Fun��o que ira chamar a pergunta de habilidade 02.
	acertos=Pergunta_03_Nivel_de_Habilidade(resposta3,acertos);//................................................Fun��o que ira chamar a pergunta de habilidade 03.
	acertos=Pergunta_04_Nivel_de_Habilidade(resposta4,acertos);//................................................Fun��o que ira chamar a pergunta de habilidade 04.
	acertos=Pergunta_05_Nivel_de_Habilidade(resposta5,acertos);//................................................Fun��o que ira chamar a pergunta de habilidade 05.
	Analisando_o_Nivel_de_Habilidade();	//.......................................................................Fun��o que ira analisar qual n�vel o usuario deve iniciar.			
	acertos=Usuario_pode_voltar_ao_Nivel_anterior(acertos,OpcaoNiveis);//........................................Fun��o que permite o usuario retornar ao n�vel anterior.

	switch(acertos){//...........................................................................................Comando de escolha para informa o n�vel do usuario.
		case 0:
		case 1:
		case 2:
		case 3:
		Nivel_Baixo_Nivel_1_Conteudo();//.........................................................................Fun��o que ira mostrar o conteudo no nivel baixo.
		acertosAprendizado=Pergunta_01_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Fun��o que ira chamar a pergunta 01 do n�vel baixo de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Fun��o que ira chamar a pergunta 02 do n�vel baixo de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Baixo_Nivel_1(acertosAprendizado);//.................................Fun��o que ira chamar a pergunta 03 do n�vel baixo de aprendizado.
		case 4:
		Nivel_Intermediario_Nivel_2_Conteudo();//.................................................................Fun��o que ira mostrar o conteudo no nivel Intermediario.
		acertosAprendizado=Pergunta_01_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Fun��o que ira chamar a pergunta 01 do n�vel intermediario de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Fun��o que ira chamar a pergunta 02 do n�vel intermediario de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Intermediario_Nivel_2(acertosAprendizado);//.........................Fun��o que ira chamar a pergunta 03 do n�vel intermediario de aprendizado.
		case 5:
		Nivel_Avancado_Nivel_3_Conteudo	();//.....................................................................Fun��o que ira mostrar o conteudo no nivelavan�ado.
		acertosAprendizado=Pergunta_01_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Fun��o que ira chamar a pergunta 01 do n�vel avan�ado de aprendizado.
		acertosAprendizado=Pergunta_02_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Fun��o que ira chamar a pergunta 02 do n�vel avan�ado de aprendizado.
		acertosAprendizado=Pergunta_03_Nivel_Avancado_Nivel_3(acertosAprendizado);//..............................Fun��o que ira chamar a pergunta 03 do n�vel avan�ado de aprendizado.
		
		Apresentando_Resultados_e_Finalizando();//................................................................Fun��o que ira calcular qual a m�dia final do usuario.	
		exit(0);}//...............................................................................................Finaliza o programa			

case 2: //........................................................................................................Se o usuario Digitar "Sobre" ele entra aqui			
		Informacoes_Sobre_LogicAlg(RMenuSobre); //................................................................Fun��o que ira mostrar "Sobre o LogicAlg"
		break;
		
case 3:	exit(0);//................................................................................................Finaliza o programa

default: //.......................................................................................................Caso o usuario digite um comando diferente no exigido no menu.
		printf("Comando invalido, tente novamente :)\n");//.......................................................Mensagem em tela.
		getch();//................................................................................................Parar tela
		system("cls");}//.........................................................................................Limpar a tela.
	
		}while(RMenuSobre!=1,2);//................................................................................Fim da estrutura de repeti��o do Menu "Informa��es" dobe o L�gicALG.	
		} while (OPCAO!=1,2,3);//.................................................................................Fim da estrutura de repeti��o do Menu.

		return 0;}//..............................................................................................Retorna com valor 0.
		
