#include <stdio.h> //.....................................................................................Biblioteca padr�o entrada e saida.
#include <stdlib.h> //....................................................................................Biblioteca para limpar tela.
#include <locale.h> //....................................................................................Biblioteca para colocar em portugu�s.
#include <conio.h> //.....................................................................................Biblioteca para posiciona o cursor
#include <ctype.h>//......................................................................................Biblioteca para fun��es de Manipula��o de caracter.
#include <windows.h>//....................................................................................Biblioteca para utiliza��o do SetConsoleCursorPosition.

void Tela_Inicial(void){//................................................................................Fun��o para a Tela Inicial.

		printf("\n");//...................................................................................Pular uma linha.
		FILE *arqTelaPrincipal;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char TelaPrincipal[100];//........................................................................Declara��o de um Vetor.
		arqTelaPrincipal=fopen("01_Tela_Apresentacao.txt","r");//.........................................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(TelaPrincipal,100,arqTelaPrincipal)){//...............................................Ler arquivo Texto.
		printf("%s",TelaPrincipal);}//....................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela
		fclose(arqTelaPrincipal);//.......................................................................Fechar arquivo texto.	
		system ("cls");//.................................................................................Limpar tela.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

void Informe_o_seu_Nome(char NOME[100]){//................................................................Fun��o para informa o seu nome.

		FILE *arqInfoNome;//..............................................................................Cria��o de um ponteiro para o arquivo FILE.
		char InfoNome[100];//.............................................................................Declara��o de um Vetor.
		arqInfoNome=fopen("02_Infome_Nome.txt","r");//....................................................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(InfoNome, 100, arqInfoNome)){//......................................................Ler arquivo Texto.
		printf("%s",InfoNome);} //........................................................................Mostrar em tela o arquivo texto.
    	fclose(arqInfoNome);//............................................................................Fechar arquivo texto.
    	printf("\n");//...................................................................................Pular uma linha.
		gets(NOME);//.....................................................................................Ler resposta do usuario.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

void Iniciar_com_Nivel_de_Habilidade_0(int acertos){//....................................................Fun��o para iniciar com N�vel de Habilidade 0.

		FILE *arqNivelHabZero;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		arqNivelHabZero=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//..................................Criar arquivo Texto.
       	fprintf(arqNivelHabZero,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
       	fprintf(arqNivelHabZero,"  N�vel de Habilidade = %d\n", acertos);//...............................Armazenar essa mensagem.
       	fprintf(arqNivelHabZero,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
		fclose(arqNivelHabZero);//........................................................................Fechar arquivo texto.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

void Iniciar_com_Nivel_de_Aprendizado_0(int acertosAprendizado){//........................................Fun��o para iniciar com N�vel de Aprendizado 0.	

		FILE *arqNivelAprenZero;//........................................................................Cria��o de um ponteiro para o arquivo FILE.
		arqNivelAprenZero=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//...............................Criar arquivo Texto.
       	fprintf(arqNivelAprenZero,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//.................................Armazenar essa mensagem.
       	fprintf(arqNivelAprenZero,"  N�vel de Aprendizado = %d\n",acertosAprendizado);//..................Armazenar essa mensagem.
       	fprintf(arqNivelAprenZero,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//.................................Armazenar essa mensagem.
		fclose(arqNivelAprenZero);//......................................................................Fechar arquivo texto.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

int Menu_Opcoes(char NOME[100], int OPCAO){//.............................................................Fun��o para Menu Op��es.

		printf("\n");//...................................................................................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"); //............Escrita em tela inicial.
		printf("\n");//...................................................................................Pular uma linha. 
		printf("             Ol�, %s :D\n",NOME);//.......................................................Escrita em tela.			
		printf("\n");//...................................................................................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"); //............Escrita em tela inicial.
		printf("\n");//...................................................................................Pular uma linha.
		
		FILE *arqMenuOpcao;//.............................................................................Cria��o de um ponteiro para o arquivo FILE.
		char MenuOpcao[100];//............................................................................Declara��o de um Vetor.
		arqMenuOpcao=fopen("03_Menu_Opcao.txt", "r");//...................................................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(MenuOpcao, 100, arqMenuOpcao)){//....................................................Ler arquivo Texto.
		printf("%s",MenuOpcao);}//........................................................................Mostrar em tela o arquivo texto.
		fclose(arqMenuOpcao);//...........................................................................Fechar arquivo texto.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Digite o n�mero para come�ar: ");//.......................................................Escrita em tela.
		scanf("%d",&OPCAO);//.............................................................................Entrada de dados para a variavel OPCAO.	
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		return OPCAO;}//..................................................................................Retorna o valor da variavel OPCAO.

int	Apresentacao_Niveis(char NOME[100]){//................................................................Fun��o para Apresenta��o dos N�veis.

		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//.....Escrita para gerar apresenta��o.
	    printf("\n");//...................................................................................Pular uma linha.
		printf("  Ol� %s, voc� escolheu come�ar o jogo :), vamos identificar   \n",NOME);//...............Escrita para gerar apresenta��o.
	    printf("  o seu n�vel de habilidade em programa��o.                    \n");//....................Escrita para gerar apresenta��o.
	    printf("\n");//...................................................................................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//.....Escrita para gerar apresenta��o.
		printf("\n");//...................................................................................Pular uma linha.
		
		FILE *arqApNivel_01;//............................................................................Cria��o de um ponteiro para o arquivo FILE.
		char ApNivel_01[100];//...........................................................................Declara��o de um Vetor.
		arqApNivel_01=fopen("04_Apresentacao_Niveis_01.txt", "r");//......................................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(ApNivel_01, 100, arqApNivel_01)){//..................................................Ler arquivo Texto.
		printf("%s",ApNivel_01);}//.......................................................................Mostrar em tela o arquivo texto.
		fclose(arqApNivel_01);//..........................................................................Fechar arquivo texto.
		printf("\n");//...................................................................................Pular uma linha.
		printf ("Para continuar pressione ENTER...");//...................................................Escrita para sair com os N�veis.
		getch();//........................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		printf("\n");//...................................................................................Pular uma linha.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
					
		FILE *arqApNivel_02;//............................................................................Cria��o de um ponteiro para o arquivo FILE.
		char ApNivel_02[100];//...........................................................................Declara��o de um Vetor.
		arqApNivel_02=fopen("04_Apresentacao_Niveis_02.txt", "r");//......................................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(ApNivel_02, 100, arqApNivel_02)){//..................................................Ler arquivo Texto.
		printf("%s",ApNivel_02);}//.......................................................................Mostrar em tela o arquivo texto.
		fclose(arqApNivel_02);//..........................................................................Fechar arquivo texto.
		printf("\n");//...................................................................................Pular uma linha.
		printf ("Para continuar pressione ENTER...");//...................................................Escrita para sair com os N�veis.
		getch();//........................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).	

int Pergunta_01_Nivel_de_Habilidade(int resposta1, int acertos){//........................................Fun��o pata Pergunta 01 Nivel de Habilidade. 
	
		FILE *arqPH1;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
    	char pergunta1[50];//.............................................................................Declara��o de um Vetor.
        arqPH1=fopen("05_Pergunta_01_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta1, 50, arqPH1)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta1);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH1);//.................................................................................Fechar arquivo texto.
	    scanf("%d",&resposta1);//.........................................................................Ler resposta do usuario.
		system ("cls");//.................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		
		if(resposta1==200){//.............................................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem.
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem.
		
		FILE *arqPH1;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertos+=1;//.....................................................................................Acerto vai ganahr 1 ponto
       	arqPH1=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//...........................................Criar arquivo Texto.
       	fprintf(arqPH1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
       	fprintf(arqPH1,"  N�vel de Habilidade = %d\n", acertos);//........................................Armazenar essa mensagem.
       	fprintf(arqPH1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
       	fclose(arqPH1);//.................................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.
		
		else //...........................................................................................Se a resposta for errada, entra aqui.
		
		if	(resposta1!=200){//...........................................................................Se a resposta for verdadeira, entra aqui.
		
		FILE *arqPH1;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
    	char pergunta1[50];//.............................................................................Declara��o de um Vetor.
        arqPH1=fopen("05_Resposta_01_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta1, 50, arqPH1)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta1);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH1);//.................................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		return acertos;}//................................................................................Retorna o valor da variavel ACERTOS.

int Pergunta_02_Nivel_de_Habilidade(int resposta2,int acertos){//.........................................Fun��o pata Pergunta 02 Nivel de Habilidade. 
	
		FILE *arqPH2;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta2[50];//.............................................................................Declara��o de um Vetor.
		arqPH2=fopen("06_Pergunta_02_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta2, 50, arqPH2)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta2);}//........................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH2);//.................................................................................Fechar arquivo texto.
	    scanf("%s",&resposta2);//.........................................................................Ler resposta do usuario.
		system ("cls");//.................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		
		if	((resposta2=='c')||(resposta2=='C')){//.......................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem.
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem.
		
		FILE *arqPH2;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertos+=1;//.....................................................................................Acresentar valor na variavel acertos.
    	arqPH2=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//...........................................Criar arquivo Texto.
       	fprintf(arqPH2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
       	fprintf(arqPH2,"  N�vel de Habilidade = %d\n", acertos);//........................................Armazenar essa mensagem.
       	fprintf(arqPH2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
    	fclose(arqPH2);//.................................................................................Fechar arquivo texto.
    	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.
			
		else //...........................................................................................Se a resposta for errada, entra aqui.
		
		if	((resposta2!='c')&&(resposta2!='C')){//.......................................................Se a resposta for verdadeira, entra aqui.
		
		FILE *arqPH2;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta2[50];//.............................................................................Declara��o de um Vetor.
		arqPH2=fopen("06_Resposta_02_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta2, 50, arqPH2)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta2);}//........................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH2);//.................................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		return acertos;}//................................................................................Retornar o valor da variavel acertos.
		
int Pergunta_03_Nivel_de_Habilidade(int resposta3,int acertos){//.........................................Fun��o pata Pergunta 03 Nivel de Habilidade. 
			
		FILE *arqPH3;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta3[50];//.............................................................................Declara��o de um Vetor.
		arqPH3=fopen("07_Pergunta_03_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta3, 50, arqPH3)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta3);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH3);//.................................................................................Fechar arquivo texto.
	    scanf("%s",&resposta3);//.........................................................................Ler resposta do usuario
		system ("cls");//.................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		
		if	((resposta3=='b')||(resposta3=='B')){//.......................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem
	
		FILE *arqPH3;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertos+=1;//.....................................................................................Acresentar valor na variavel acertos.
    	arqPH3=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//...........................................Criar arquivo Texto.
       	fprintf(arqPH3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
       	fprintf(arqPH3,"  N�vel de Habilidade = %d\n", acertos);//........................................Armazenar essa mensagem.
       	fprintf(arqPH3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
    	fclose(arqPH3);//.................................................................................Fechar arquivo texto.
    	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.
		
		else//............................................................................................Se a resposta for falsa, entra aqui.
		
		if	((resposta3!='b')&&(resposta3!='B')){//.......................................................Se a resposta for verdadeira, entra aqui.
		
		FILE *arqPH3;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta3[50];//.............................................................................Declara��o de um Vetor.
		arqPH3=fopen("07_Resposta_03_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta3, 50, arqPH3)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta3);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH3);//.................................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		return acertos;}//................................................................................Retorna o valor da variavel acertos
			
int Pergunta_04_Nivel_de_Habilidade(int resposta4,int acertos){//.........................................Fun��o pata Pergunta 04 Nivel de Habilidade. 
		
		FILE *arqPH4;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta4[50];//.............................................................................Declara��o de um Vetor.
		arqPH4=fopen("08_Pergunta_04_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta4, 50, arqPH4)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta4);}//........................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH4);//.................................................................................Fechar arquivo texto.
	    scanf("%s",&resposta4);//.........................................................................Ler resposta do usuario
		system ("cls");//.................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
	
		if	((resposta4=='a')||(resposta4=='A')){//.......................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem
	
		FILE *arqPH4;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertos+=1;//.....................................................................................Acresentar valor na variavel acertos.
    	arqPH4=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//...........................................Criar arquivo Texto.
       	fprintf(arqPH4,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
       	fprintf(arqPH4,"  N�vel de Habilidade = %d\n", acertos);//........................................Armazenar essa mensagem.
       	fprintf(arqPH4,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
    	fclose(arqPH4);//.................................................................................Fechar arquivo texto.
    	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.
	
		else //...........................................................................................Se a resposta for falsa, entra aqui.
	
		if	((resposta4!='a')&&(resposta4!='A')){//.......................................................Se a resposta for verdadeira, entra aqui.
	
		FILE *arqPH4;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char pergunta4[50];//.............................................................................Declara��o de um Vetor.
		arqPH4=fopen("08_Resposta_04_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta4, 50, arqPH4)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta4);}//........................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH4);//.................................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		return acertos;}//................................................................................Retorna o valor da variavel acertos.
			
int Pergunta_05_Nivel_de_Habilidade(int resposta5,int acertos){//.........................................Fun��o pata Pergunta 05 Nivel de Habilidade. 
	
		FILE *arqPH5;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
		int V[10]={1,3,4,2,3,5,3,3,6,18},R[10],valoracertos=0,i,j;//......................................Variaveis para cada 
		char pergunta5[50];//.............................................................................Declara��o de um Vetor.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		arqPH5=fopen("09_Pergunta_05_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta5, 50, arqPH5)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta5);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH5);//.................................................................................Fechar arquivo texto.

		coord.X=52;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=11;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[0]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=60;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=11;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[1]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=68;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=11;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[2]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=52;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=13;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[3]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=60;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=13;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[4]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=68;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=13;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[5]);fflush(stdin);//..................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=52;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=15;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[6]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=60;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=15;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[7]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=68;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=15;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[8]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		coord.X=10;//.....................................................................................Posi��o do cursor em rela��o a Coluna 
		coord.Y=28;//.....................................................................................Posi��o do cursor em rela��o a Linha
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[9]);fflush(stdin);//................................................................Lendo a resposta do usuario e limpando "sujeira" da memoria.
		
		for (i=0,j=0 ; i<10,j<10 ; ++i,++j){//............................................................Estrutura de repeti��o para comprarar duas string.
		if (R[i] == V[j]){//..............................................................................Estrutura de repeti��o para comprarar duas string.
	    valoracertos = valoracertos+1;}}//................................................................Estrutura de repeti��o para comprarar duas string.
		system ("cls");//.................................................................................Limpar tela.	

		if	(valoracertos == 10 ) {//.....................................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPH5;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertos+=1;//.....................................................................................Acresentar valor na variavel acertos.
       	arqPH5=fopen("Nivel_de_Habilidade_Acertos.txt", "w");//...........................................Criar arquivo Texto.
	   	fprintf(arqPH5,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
	   	fprintf(arqPH5,"  N�vel de Habilidade = %d\n", acertos);//........................................Armazenar essa mensagem.
       	fprintf(arqPH5,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//............................................Armazenar essa mensagem.
    	fclose(arqPH5);//.................................................................................Fechar arquivo texto.
    	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.
						
		else {//..........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPH5;//...................................................................................Cria��o de um ponteiro para o arquivo FILE.	
		char pergunta5[50];//.............................................................................Declara��o de um Vetor.
		arqPH5=fopen("09_Resposta_05_Nivel_de_Habilidade.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(pergunta5, 50, arqPH5)){//...........................................................Ler arquivo Texto.
        printf("%s",pergunta5);} //.......................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPH5);//.................................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.	
		return acertos;}//................................................................................Retorna o valor da variavel acertos.

void Analisando_o_Nivel_de_Habilidade(void){//............................................................Fun��o para analisar o n�vel de habilidade.
	
		FILE *arqHabilidade;//............................................................................Cria��o de um ponteiro para o arquivo FILE.
		char MediaHabilidade[50];//.......................................................................Declara��o de um Vetor.
		arqHabilidade=fopen("Nivel_de_Habilidade_Acertos.txt","r");//.....................................Informa��es para que o S.O. possa abrir o arquivo.
    	while (fgets(MediaHabilidade, 50, arqHabilidade)){//..............................................Ler arquivo Texto.
    	printf("\n");//...................................................................................Pular uma linha.
        printf("%s",MediaHabilidade); //..................................................................Mostrar em tela o arquivo texto.
        printf("\n");}//..................................................................................Pular uma linha.
   	    fclose(arqHabilidade);//..........................................................................Fechar arquivo texto.
		getch();//........................................................................................Parar tela.   	    
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

int Usuario_pode_voltar_ao_Nivel_anterior(int acertos, int OpcaoNiveis){//................................Fun��o para escolha dos n�veis.

		do{//.............................................................................................Estrutura de repeti��o para o caso de digitar um n�mero incorreto.
			
		if(acertos==4){//.................................................................................Se a condi��o for verdadeira, entra aqui.		
		system ("cls");//.................................................................................Limpar tela.			
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..........................................Escrita para gerar apresenta��o.
		printf("XX                                     XX\n");//..........................................Pular uma linha.
		printf("XX  Seu N�vel inicial � Intermedi�rio  XX\n");//..........................................Escrita para gerar apresenta��o.
		printf("XX  Deseja come�ar do N�vel Baixo?     XX\n");//..........................................Pular uma linha.
		printf("XX                                     XX\n");//..........................................Pular uma linha.	
		printf("XX  1= N�vel Baixo                     XX\n");//..........................................Pular uma linha.
		printf("XX  2= Intermedi�rio                   XX\n");//..........................................Pular uma linha.
		printf("XX                                     XX\n");//..........................................Pular uma linha.						
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..........................................Escrita para gerar apresenta��o.			
    	scanf("%d",&OpcaoNiveis); //......................................................................Ler qual op��o de n�vel o usuario deseja come�ar	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados). 
	    system("cls");//..................................................................................Limpar tela
	    		
		if (OpcaoNiveis==1){//............................................................................Se a condi��o for verdadeira, entra aqui.
			acertos=0;break;}//...........................................................................Atruibui��o de valor e comando para sair da estrutura.
	
		else //...........................................................................................Se a condi��o for falsa, entra aqui.
		if (OpcaoNiveis==2){//............................................................................Se a resposta for verdadeira, entra aqui.
			acertos=4;break;}//...........................................................................Atruibui��o de valor e comando para sair da estrutura.
			
		else//............................................................................................Se a condi��o for falsa, entra aqui.
		if (OpcaoNiveis!=1,2){//..........................................................................Se a condi��o for verdadeira, entra aqui.

		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//............................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//............................................................Pular uma linha.
		printf("XX  Op��o incorreta  XX\n");//............................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//............................................................Pular uma linha.						
		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//............................................................Escrita para gerar apresenta��o.				
		getch();}}//......................................................................................Parar tela.	

		else //...........................................................................................Se a condi��o for falsa, entra aqui.
		if(acertos==5){//.................................................................................Se a resposta for verdadeira, entra aqui.

		system ("cls");//.................................................................................Limpar tela.			
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..........................................Escrita para gerar apresenta��o.
		printf("XX                                     XX\n");//..........................................Pular uma linha.
		printf("XX  Seu N�vel inicial � Avan�ado       XX\n");//..........................................Escrita para gerar apresenta��o.
		printf("XX  Deseja come�ar do N�vel Baixo      XX\n");//..........................................Pular uma linha.
		printf("XX  ou Intermedi�rio?                  XX\n");//..........................................Pular uma linha.	
		printf("XX                                     XX\n");//..........................................Pular uma linha..				
		printf("XX  1= N�vel Baixo                     XX\n");//..........................................Pular uma linha.
		printf("XX  2= Intermedi�rio                   XX\n");//..........................................Pular uma linha.		
		printf("XX  3= Avan�ado                        XX\n");//..........................................Pular uma linha.
		printf("XX                                     XX\n");//..........................................Pular uma linha.									
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..........................................Escrita para gerar apresenta��o.				
    	scanf("%d",&OpcaoNiveis);//.......................................................................Ler qual op��o de n�vel o usuario deseja come�ar	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		system("cls");//..................................................................................Limpar tela.	 	
		
		if (OpcaoNiveis==1){//............................................................................Se a condi��o for verdadeira, entra aqui.
		acertos=0;break;}//...............................................................................Atruibui��o de valor e comando para sair da estrutura.
			
	  	else //...........................................................................................Se a condi��o for falsa, entra aqui.
		if (OpcaoNiveis==2){//............................................................................Se a condi��o for verdadeira, entra aqui.
		acertos=4;break;}//...............................................................................Atruibui��o de valor e comando para sair da estrutura.
			
		else//............................................................................................Se a condi��o for falsa, entra aqui.
		if (OpcaoNiveis==3){//............................................................................Se a condi��o for verdadeira, entra aqui.
        break;}//.........................................................................................Comando para sair da estrutura.
		
		if (OpcaoNiveis!=1,2,3){//........................................................................Se a condi��o for verdadeira, entra aqui.
		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//............................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//............................................................Pular uma linha.
		printf("XX  Op��o incorreta  XX\n");//............................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//............................................................Pular uma linha.						
		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//............................................................Escrita para gerar apresenta��o.
		getch();}}//......................................................................................Parar tela.	
	 	}while(((acertos==4)&&(OpcaoNiveis!=1,2))||((acertos==5)&&(OpcaoNiveis!=1,2,3)));//...............Estrutura de repeti��o para o caso de digitar um n�mero incorreto.
		return acertos;}//................................................................................Retorna o valor da variavel acertos.

void Nivel_Baixo_Nivel_1_Conteudo(void){//................................................................Fun��o para Conte�do do n�vel baixo.

		system ("cls");//.................................................................................Limpar tela.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XX           Iniciando N�vel Baixo = N�vel 1          XX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
		printf("\n");//...................................................................................Pular uma linha.	
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.
		
		FILE *arqNivelB_Cont1;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelB_Cont1[100];//.........................................................................Declara��o de um Vetor.
		arqNivelB_Cont1=fopen("10_Conteudo_01_Nivel_Baixo_ Nivel_1.txt","r");//...........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelB_Cont1,100,arqNivelB_Cont1)){//.................................................Ler arquivo texto
		printf("%s",NivelB_Cont1);}//.....................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelB_Cont1);//........................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		
		FILE *arqNivelB_Cont2;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelB_Cont2[100];//.........................................................................Declara��o de um Vetor.
		arqNivelB_Cont2=fopen("11_Conteudo_02_Nivel_Baixo_ Nivel_1.txt","r");//...........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelB_Cont2,100,arqNivelB_Cont2)){//.................................................Ler arquivo texto
		printf("%s",NivelB_Cont2);}//.....................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelB_Cont2);//........................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).					
		
		FILE *arqNivelB_Cont3;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelB_Cont3[100];//.........................................................................Declara��o de um Vetor.
		arqNivelB_Cont3=fopen("12_Conteudo_03_Nivel_Baixo_ Nivel_1.txt","r");//...........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelB_Cont3,100,arqNivelB_Cont3)){//.................................................Ler arquivo texto
		printf("%s",NivelB_Cont3);}//.....................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelB_Cont3);//........................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).		
		
		FILE *arqNivelB_Cont4;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelB_Cont4[100];//.........................................................................Declara��o de um Vetor.
		arqNivelB_Cont4=fopen("13_Conteudo_04_Nivel_Baixo_ Nivel_1.txt","r");//...........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelB_Cont4,100,arqNivelB_Cont4)){//.................................................Ler arquivo texto
		printf("%s",NivelB_Cont4);}//.....................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelB_Cont4);//........................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).		
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XX       Agora que aprendemos vamos exercitar :)      XX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
        printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir...");//...................................................Mensagem
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.		
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

int Pergunta_01_Nivel_Baixo_Nivel_1(int acertosAprendizado){//............................................Fun��o para Pergunta 01 do n�vel baixo.
		
		FILE *arqPerguntaNB1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB1[100];//..........................................................................Declara��o de um Vetor.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		int valoracertos=0,i,j;//.........................................................................Declara��o de vari�veis.
		int V[5]={5,4,1,3,2},V1[5]={05,04,01,03,02},R[5];//...............................................Declara��o de vari�veis e vetores.
		int RespPNB1a, RespPNB1b,RespPNB1c,RespPNB1d,RespPNB1e;//.........................................Declara��o de vari�veis.
		arqPerguntaNB1=fopen("14_Pergunta_01_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNB1,100,arqPerguntaNB1)){//...................................................Ler arquivo texto
		printf("%s",PerguntaNB1);}//......................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNB1);//.........................................................................Fechar arquivo texto.
		
		coord.X=56;//.....................................................................................Coordenadas X=Coluna
		coord.Y=8;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[0]);fflush(stdin);//................................................................Leitura de dados e Limpador de buffer
		
		coord.X=56;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[1]);fflush(stdin);//................................................................Leitura de dados e Limpador de buffer
		
		coord.X=56;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[2]);fflush(stdin);//................................................................Leitura de dados e Limpador de buffer
		
		coord.X=56;//.....................................................................................Coordenadas X=Coluna
		coord.Y=14;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[3]);fflush(stdin);//................................................................Leitura de dados e Limpador de buffer
		
		coord.X=56;//.....................................................................................Coordenadas X=Coluna
		coord.Y=16;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[4]);fflush(stdin);//................................................................Leitura de dados e Limpador de buffer	
		system ("cls");//.................................................................................Limpar tela.
		
		
		for (i=0,j=0 ; i<5,j<5 ; ++i,++j){//..............................................................Estrutura de repeti��o para comprarar duas string.
		if (R[i] == V[j]){//..............................................................................Estrutura de repeti��o para comprarar duas string.
		valoracertos = valoracertos+1;}//.................................................................Estrutura de repeti��o para comprarar duas string.
		else//............................................................................................Estrutura de repeti��o para comprarar duas string.
		if (R[i] == V1[j]){//.............................................................................Estrutura de repeti��o para comprarar duas string.
		valoracertos = valoracertos+1;}}//................................................................Estrutura de repeti��o para comprarar duas string.
		
		if 	(valoracertos == 5){//........................................................................Se a condi��o for verdadeira, entra aqui
		
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNB1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNB1=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//..................................Criar arquivo Texto.
       	fprintf(arqPerguntaNB1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNB1,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//....................Armazenar essa mensagem.
       	fprintf(arqPerguntaNB1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fclose(arqPerguntaNB1);//.........................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else {//..........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPerguntaNB1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB1[100];//..........................................................................Declara��o de um Vetor.
		arqPerguntaNB1=fopen("14_Resposta_01_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNB1,100,arqPerguntaNB1)){//...................................................Ler arquivo texto
		printf("%s",PerguntaNB1);}//......................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNB1);//.........................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar a tela
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.
		
int	Pergunta_02_Nivel_Baixo_Nivel_1(int acertosAprendizado){//............................................Fun��o para Pergunta 02 do n�vel baixo.

		FILE *arqPerguntaNB2;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB2[100],RespPNB2a;//................................................................Declara��o de um Vetor.
		arqPerguntaNB2=fopen("15_Pergunta_02_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
       	while (fgets(PerguntaNB2, 100, arqPerguntaNB2)){//................................................Ler arquivo Texto.
        printf("%s",PerguntaNB2);} //.....................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPerguntaNB2);//.........................................................................Fechar arquivo texto.
	    scanf("%s",&RespPNB2a);//.........................................................................Ler resposta do usuario
		system ("cls");//.................................................................................Limpar tela.	
		fflush(stdin);

		if	((RespPNB2a=='e')||(RespPNB2a=='E')){//.......................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNB2;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNB2=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//..................................Criar arquivo Texto.
       	fprintf(arqPerguntaNB2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNB2,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//....................Armazenar essa mensagem.
       	fprintf(arqPerguntaNB2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fclose(arqPerguntaNB2);//.........................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else//............................................................................................Se a condi��o for falsa, entra aqui.
	//	if	((RespPNB2a!='e')&&(RespPNB2a!='E')){//.......................................................Se a condi��o for verdadeira, entra aqui.

	{	FILE *arqPerguntaNB2;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB2[100],RespPNB2a;//................................................................Declara��o de um Vetor.
		arqPerguntaNB2=fopen("15_Resposta_02_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
       	while (fgets(PerguntaNB2, 100, arqPerguntaNB2)){//................................................Ler arquivo Texto.
        printf("%s",PerguntaNB2);} //.....................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPerguntaNB2);//.........................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar a tela
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.
	
int	Pergunta_03_Nivel_Baixo_Nivel_1(int acertosAprendizado){//............................................Fun��o para Pergunta 03 do n�vel baixo.
		
		FILE *arqPerguntaNB3;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB3[100];//..........................................................................Declara��o de um Vetor.
		int RespPNB3a;//..................................................................................Declara��o de vari�vel.
		arqPerguntaNB3=fopen("16_Pergunta_03_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
       	while (fgets(PerguntaNB3, 100, arqPerguntaNB3)){//................................................Ler arquivo Texto.
	    printf("%s",PerguntaNB3);} //.....................................................................Mostrar em tela o arquivo texto.
        fclose(arqPerguntaNB3);//.........................................................................Fechar arquivo texto.
	    scanf("%d",&RespPNB3a);//.........................................................................Ler resposta do usuario
		system ("cls");//.................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
	
		if	(RespPNB3a==15){//............................................................................Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem
	
		FILE *arqPerguntaNB3;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
	    acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
	  	arqPerguntaNB3=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//..................................Criar arquivo Texto.
	   	fprintf(arqPerguntaNB3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
	   	fprintf(arqPerguntaNB3,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//....................Armazenar essa mensagem.
	   	fprintf(arqPerguntaNB3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
	   	fclose(arqPerguntaNB3);//.........................................................................Fechar arquivo texto.
	   	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else//............................................................................................Se a condi��o for falsa, entra aqui.
		if	(RespPNB3a!=15){//............................................................................Se a condi��o for verdadeira, entra aqui.

		FILE *arqPerguntaNB3;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNB3[100];//..........................................................................Declara��o de um Vetor.
		arqPerguntaNB3=fopen("16_Resposta_03_Nivel_Baixo_ Nivel_1.txt","r");//............................Informa��es para que o S.O. possa abrir o arquivo.
       	while (fgets(PerguntaNB3, 100, arqPerguntaNB3)){//................................................Ler arquivo Texto..
        printf("%s",PerguntaNB3);} //.....................................................................Mostrar em tela o arquivo texto.
   	    fclose(arqPerguntaNB3);//.........................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar a tela
		return acertosAprendizado;}

void Nivel_Intermediario_Nivel_2_Conteudo(void){//........................................................Fun��o para Conte�do do n�vel Intermedi�rio.
			
		system ("cls");//.................................................................................Limpar tela.			
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XX       Iniciando N�vel Intermedi�rio = N�vel 2      XX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
		printf("\n");//...................................................................................Pular uma linha.	
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.			

		FILE *arqNivelInt_Cont1;//........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelInt_Cont1[100];//.......................................................................Declara��o de um Vetor.
		arqNivelInt_Cont1=fopen("17_Conteudo_01_Nivel_Intermediario_ Nivel_2.txt","r");//.................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelInt_Cont1,100,arqNivelInt_Cont1)){//.............................................Ler arquivo texto
		printf("%s",NivelInt_Cont1);}//...................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelInt_Cont1);//......................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

		FILE *arqNivelInt_Cont2P1;//......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelInt_Cont2P1[100];//.....................................................................Declara��o de um Vetor.
		arqNivelInt_Cont2P1=fopen("18_Conteudo_02_Nivel_Intermediario_ Nivel_2_Parte_01.txt","r");//......Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelInt_Cont2P1,100,arqNivelInt_Cont2P1)){//.........................................Ler arquivo texto
		printf("%s",NivelInt_Cont2P1);}//.................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelInt_Cont2P1);//....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).	

		FILE *arqNivelInt_Cont2P2;//......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelInt_Cont2P2[100];//.....................................................................Declara��o de um Vetor.
		arqNivelInt_Cont2P2=fopen("18_Conteudo_02_Nivel_Intermediario_ Nivel_2_Parte_02.txt","r");//......Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelInt_Cont2P2,100,arqNivelInt_Cont2P2)){//.........................................Ler arquivo texto
		printf("%s",NivelInt_Cont2P2);}//.................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelInt_Cont2P2);//....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.		
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).					

		FILE *arqNivelInt_Cont3P1;//......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelInt_Cont3P1[100];//.....................................................................Declara��o de um Vetor.
		arqNivelInt_Cont3P1=fopen("19_Conteudo_03_Nivel_Intermediario_ Nivel_2_Parte_01.txt","r");//......Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelInt_Cont3P1,100,arqNivelInt_Cont3P1)){//.........................................Ler arquivo texto
		printf("%s",NivelInt_Cont3P1);}//.................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelInt_Cont3P1);//....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).							

		FILE *arqNivelInt_Cont3P2;//......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelInt_Cont3P2[100];//.....................................................................Declara��o de um Vetor.
		arqNivelInt_Cont3P2=fopen("19_Conteudo_03_Nivel_Intermediario_ Nivel_2_Parte_02.txt","r");//......Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelInt_Cont3P2,100,arqNivelInt_Cont3P2)){//.........................................Ler arquivo texto
		printf("%s",NivelInt_Cont3P2);}//.................................................................Printar arquivo texto em tela
		getch();//........................................................................................Parar tela.
		fclose(arqNivelInt_Cont3P2);//....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.		
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
		printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XX       Agora que aprendemos vamos exercitar :)      XX\n");//...........................Escrita para gerar apresenta��o.
		printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Mensagem
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

int Pergunta_01_Nivel_Intermediario_Nivel_2(int acertosAprendizado){//....................................Fun��o para Pergunta 01 do n�vel intermedi�rio.

		FILE *arqPerguntaNInt1;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNInt1[50],PerguntaNInt1a[8]="inteiro",PerguntaNInt1b[5]="real";//....................Declara��o de Vetor
		char PerguntaNInt1c[10]="caractere", PerguntaNInt1d[7]="logico";//................................Declara��o de Vetor
		char RespPerguntaNInt1a[8],RespPerguntaNInt1b[5],RespPerguntaNInt1c[10],RespPerguntaNInt1d[7];//..Declara��o de Vetor
		int x1,x2,x3,x4;//................................................................................Declara��o de Vari�vel
		arqPerguntaNInt1=fopen("20_Pergunta_01_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt1, 50, arqPerguntaNInt1)){//.............................................Ler arquivo texto
		printf("%s",PerguntaNInt1);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt1);//.......................................................................Fechar arquivo texto.
	
		coord.X=19;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt1a);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
		
		coord.X=31;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt1b);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
		
		coord.X=25;//.....................................................................................Coordenadas X=Coluna
		coord.Y=14;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt1c);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=28;//.....................................................................................Coordenadas X=Coluna
		coord.Y=16;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt1d);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
		
		x1=strcmp(RespPerguntaNInt1a,PerguntaNInt1a);//...................................................Compara��o de duas string.			
		x2=strcmp(RespPerguntaNInt1b,PerguntaNInt1b);//...................................................Compara��o de duas string.
		x3=strcmp(RespPerguntaNInt1c,PerguntaNInt1c);//...................................................Compara��o de duas string.
		x4=strcmp(RespPerguntaNInt1d,PerguntaNInt1d);//...................................................Compara��o de duas string.
		system ("cls");//.................................................................................Limpar tela.

    	if (x1,x2,x3,x4==0){//............................................................................Se a condi��o for verdadeira, entra aqui
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNInt1;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNInt1=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//................................Criar arquivo Texto.
       	fprintf(arqPerguntaNInt1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt1,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//..................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fclose(arqPerguntaNInt1);//.......................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else{ //..........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPerguntaNInt1;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNInt1[50];//.........................................................................Declara��o de Vetor
		arqPerguntaNInt1=fopen("20_Resposta_01_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt1, 50, arqPerguntaNInt1)){//.............................................Ler arquivo Texto.
		printf("%s",PerguntaNInt1);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt1);//.......................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar a tela
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.

int Pergunta_02_Nivel_Intermediario_Nivel_2(int acertosAprendizado){//....................................Fun��o para Pergunta 02 do n�vel intermedi�rio.

		FILE *arqPerguntaNInt2;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNInt2[50],PerguntaNInt2a[10]="Algoritmo";//..........................................Declara��o de Vetor
		char PerguntaNInt2b[5]="real", PerguntaNInt2c[8]="Produto";//.....................................Declara��o de Vetor
		char RespPerguntaNInt2a[10],RespPerguntaNInt2b[5],RespPerguntaNInt2c[8];//........................Declara��o de Vetor
		int x5,x6,x7;//...................................................................................Declara��o de Vari�vel
		arqPerguntaNInt2=fopen("21_Pergunta_02_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt2, 50, arqPerguntaNInt2)){//.............................................Ler arquivo Texto.
		printf("%s",PerguntaNInt2);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt2);//.......................................................................Fechar arquivo texto.
	
		coord.X=2;//......................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt2a);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=11;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt2b);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=10;//.....................................................................................Coordenadas X=Coluna
		coord.Y=16;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt2c);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
			
		PerguntaNInt2a[10]=tolower(PerguntaNInt2a[10]);//.................................................Transforma um caracter mai�scula em letra min�scula.
		RespPerguntaNInt2a[10]=tolower(RespPerguntaNInt2a[10]);//.........................................Transforma um caracter mai�scula em letra min�scula.
		
		PerguntaNInt2b[5]=tolower(PerguntaNInt2b[5]);//...................................................Transforma um caracter mai�scula em letra min�scula.
		RespPerguntaNInt2b[5]=tolower(RespPerguntaNInt2b[5]);//...........................................Transforma um caracter mai�scula em letra min�scula.
			
		PerguntaNInt2c[8]=tolower(PerguntaNInt2c[8]);//...................................................Transforma um caracter mai�scula em letra min�scula.
		RespPerguntaNInt2c[8]=tolower(RespPerguntaNInt2c[8]);//...........................................Transforma um caracter mai�scula em letra min�scula.						
			
		x5=strcmp(RespPerguntaNInt2a,PerguntaNInt2a);//...................................................Compara duas strings.		
		x6=strcmp(RespPerguntaNInt2b,PerguntaNInt2b);//...................................................Compara duas strings.
		x7=strcmp(RespPerguntaNInt2c,PerguntaNInt2c);//...................................................Compara duas strings.
		system ("cls");//.................................................................................Limpar tela.

    	if (x5,x6,x7!=0){//...............................................................................Se a condi��o for verdadeira, entra aqui
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNInt2;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNInt2=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//................................Criar arquivo Texto.
       	fprintf(arqPerguntaNInt2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt2,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//..................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt2,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fclose(arqPerguntaNInt2);//.......................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else {//..........................................................................................Se a condi��o for falsa, entra aqui.			

		FILE *arqPerguntaNInt2;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNInt2[50];//.........................................................................Declara��o de Vetor
		arqPerguntaNInt2=fopen("21_Resposta_02_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt2, 50, arqPerguntaNInt2)){//.............................................Ler arquivo Texto.
		printf("%s",PerguntaNInt2);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt2);//.......................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.	
		system ("cls");//.................................................................................Limpar a tela
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.

int Pergunta_03_Nivel_Intermediario_Nivel_2(int acertosAprendizado){//....................................Fun��o para Pergunta 03 do n�vel intermedi�rio.

		FILE *arqPerguntaNInt3;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNInt3[50],PerguntaNInt3a[9]="enquanto",PerguntaNInt3b[5]="faca";//...................Declara��o de Vetor
		char PerguntaNInt3c[7]="repita",PerguntaNInt3d[5]="para",PerguntaNInt3e[4]="ate";//...............Declara��o de Vetor
		char PerguntaNInt3f[6]="passo",PerguntaNInt3g[5]="faca";//........................................Declara��o de Vetor
		char RespPerguntaNInt3a[8],RespPerguntaNInt3b[4],RespPerguntaNInt3c[6];//.........................Declara��o de Vetor
		char RespPerguntaNInt3d[4],RespPerguntaNInt3e[3],RespPerguntaNInt3f[5],RespPerguntaNInt3g[4];//...Declara��o de Vetor
		int x8,x9,x10,x11,x12,x13,x14;//..................................................................Declara��o de Vari�vel
		arqPerguntaNInt3=fopen("22_Pergunta_03_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt3, 50, arqPerguntaNInt3)){//.............................................Ler arquivo Texto.
		printf("%s",PerguntaNInt3);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt3);//.......................................................................Fechar arquivo texto.		
	
		coord.X=6;//......................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3a);fflush(stdin);
	
		coord.X=25;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3b);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=6;//......................................................................................Coordenadas X=Coluna
		coord.Y=13;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3c);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=6;//......................................................................................Coordenadas X=Coluna
		coord.Y=15;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3d);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=36;//.....................................................................................Coordenadas X=Coluna
		coord.Y=15;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3e);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer
	
		coord.X=13;//.....................................................................................Coordenadas X=Coluna
		coord.Y=16;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3f);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer		
	
		coord.X=29;//.....................................................................................Coordenadas X=Coluna
		coord.Y=16;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		gets(RespPerguntaNInt3g);fflush(stdin);//.........................................................Leitura de dados e Limpador de buffer			
			
		x8=strcmp(RespPerguntaNInt3a,PerguntaNInt3a);//...................................................Compara��o de duas string.			
		x9=strcmp(RespPerguntaNInt3b,PerguntaNInt3b);//...................................................Compara��o de duas string.
		x10=strcmp(RespPerguntaNInt3c,PerguntaNInt3c);//..................................................Compara��o de duas string.
		x11=strcmp(RespPerguntaNInt3d,PerguntaNInt3d);//..................................................Compara��o de duas string.			
		x12=strcmp(RespPerguntaNInt3e,PerguntaNInt3e);//..................................................Compara��o de duas string.
		x13=strcmp(RespPerguntaNInt3f,PerguntaNInt3f);//..................................................Compara��o de duas string.
		x14=strcmp(RespPerguntaNInt3g,PerguntaNInt3g);//..................................................Compara��o de duas string.
		system ("cls");//.................................................................................Limpar tela.

    	if (x8,x9,x10,x11,x12,x13,x14==0){//..............................................................Se a condi��o for verdadeira, entra aqui
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNInt3;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=1;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNInt3=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//................................Criar arquivo Texto.
       	fprintf(arqPerguntaNInt3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt3,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//..................Armazenar essa mensagem.
       	fprintf(arqPerguntaNInt3,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//..................................Armazenar essa mensagem.
       	fclose(arqPerguntaNInt3);//.......................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else{ //..........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPerguntaNInt3;//.........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNInt3[50];
		arqPerguntaNInt3=fopen("22_Resposta_03_Nivel_Intermediario_ Nivel_2.txt","r");//..................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(PerguntaNInt3, 50, arqPerguntaNInt3)){//.............................................Ler arquivo Texto.
		printf("%s",PerguntaNInt3);}//....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNInt3);//.......................................................................Fechar arquivo texto.		
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar a tela		
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.

void Nivel_Avancado_Nivel_3_Conteudo(void){//.............................................................Fun��o para Conte�do do n�vel avan�ado.

		system ("cls");//.................................................................................Limpar tela.			
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//........................Escrita para gerar apresenta��o.
	    printf("XX                                                       XX\n");//........................Pular uma linha.
		printf("XX           Iniciando N�vel Avan�ado = N�vel 3          XX\n");//........................Escrita para gerar apresenta��o.
	    printf("XX                                                       XX\n");//........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//........................Escrita para gerar apresenta��o.
		printf("\n");//...................................................................................Pular uma linha.	
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.			

		FILE *arqNivelAv_Cont1P1;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont1P1[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont1P1=fopen("23_Conteudo_01_Nivel_Avancado_ Nivel_3_Parte_01.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont1P1,100,arqNivelAv_Cont1P1)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont1P1);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont1P1);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

		FILE *arqNivelAv_Cont1P2;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont1P2[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont1P2=fopen("23_Conteudo_01_Nivel_Avancado_ Nivel_3_Parte_02.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont1P2,100,arqNivelAv_Cont1P2)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont1P2);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont1P2);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.	
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

		FILE *arqNivelAv_Cont2P1;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont2P1[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont2P1=fopen("24_Conteudo_02_Nivel_Avancado_ Nivel_3_Parte_01.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont2P1,100,arqNivelAv_Cont2P1)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont2P1);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont2P1);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

		FILE *arqNivelAv_Cont2P2;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont2P2[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont2P2=fopen("24_Conteudo_02_Nivel_Avancado_ Nivel_3_Parte_02.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont2P2,100,arqNivelAv_Cont2P2)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont2P2);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont2P2);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).					

		FILE *arqNivelAv_Cont3P1;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont3P1[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont3P1=fopen("25_Conteudo_03_Nivel_Avancado_ Nivel_3_Parte_01.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont3P1,100,arqNivelAv_Cont3P1)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont3P1);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont3P1);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).					

		FILE *arqNivelAv_Cont3P2;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont3P2[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont3P2=fopen("25_Conteudo_03_Nivel_Avancado_ Nivel_3_Parte_02.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont3P2,100,arqNivelAv_Cont3P2)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont3P2);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont3P2);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).					

		FILE *arqNivelAv_Cont3P3;//.......................................................................Cria��o de um ponteiro para o arquivo FILE.
		char NivelAv_Cont3P3[100];//......................................................................Declara��o de um Vetor.
		arqNivelAv_Cont3P3=fopen("25_Conteudo_03_Nivel_Avancado_ Nivel_3_Parte_03.txt","r");//............Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(NivelAv_Cont3P3,100,arqNivelAv_Cont3P3)){//...........................................Ler arquivo texto
		printf("%s",NivelAv_Cont3P3);}//..................................................................Mostrar em tela o arquivo texto.
		getch();//........................................................................................Parar tela.
		fclose(arqNivelAv_Cont3P3);//.....................................................................Fechar arquivo texto.
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).		
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XX       Agora que aprendemos vamos exercitar :)      XX\n");//...........................Escrita para gerar apresenta��o.
	    printf("XX                                                    XX\n");//...........................Pular uma linha.
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...........................Escrita para gerar apresenta��o.
        printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Mensagem
		getch();//........................................................................................Parar tela.					
		system("cls");//..................................................................................Limpar tela.
		fflush(stdin);}//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).

int Pergunta_01_Nivel_Avancado_Nivel_3(int acertosAprendizado){//.........................................Fun��o para Pergunta 01 do n�vel avan�ado.

		FILE *arqPerguntaNA1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNA1[100];//..........................................................................Declara��o de um Vetor.
		int N1, R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12,R13,R14,R15;//.....................................Declara��o de vari�vel	
		arqPerguntaNA1=fopen("26_Pergunta_01_Nivel_Avancado_ Nivel_3.txt","r");//.........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA1,100,arqPerguntaNA1)){//...................................................Ler arquivo texto
		printf("%s",PerguntaNA1);}//......................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA1);//.........................................................................Fechar arquivo texto.
		
		coord.X=15;//.....................................................................................Coordenadas X=Coluna
		coord.Y=15;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&N1);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=55;//.....................................................................................Coordenadas X=Coluna
		coord.Y=6;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R1);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//.....................................................................................Coordenadas X=Coluna
		coord.Y=6;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R2);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=71;//.....................................................................................Coordenadas X=Coluna
		coord.Y=6;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R3);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=55;//.....................................................................................Coordenadas X=Coluna
		coord.Y=8;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R4);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//.....................................................................................Coordenadas X=Coluna
		coord.Y=8;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R5);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=71;//.....................................................................................Coordenadas X=Coluna
		coord.Y=8;//......................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R6);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=55;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R7);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R8);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=71;//.....................................................................................Coordenadas X=Coluna
		coord.Y=10;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R9);fflush(stdin);//..................................................................Leitura de dados e Limpador de buffer
		
		coord.X=55;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R10);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R11);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer
		
		coord.X=71;//.....................................................................................Coordenadas X=Coluna
		coord.Y=12;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R12);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer
		
		coord.X=55;//.....................................................................................Coordenadas X=Coluna
		coord.Y=14;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R13);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//.....................................................................................Coordenadas X=Coluna
		coord.Y=14;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R14);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer
		
		coord.X=71;//.....................................................................................Coordenadas X=Coluna
		coord.Y=14;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//..............................Posicionando o cursor de acordo com X e Y
		scanf("%d",&R15);fflush(stdin);//.................................................................Leitura de dados e Limpador de buffer

//---------------Criar arquivo Texto com a resposta da Pergunta 01 Nivel Avancado = N�vel 3------------------------------

		FILE *arqRespostaNA1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
   		int Rb2,Rc3,Re5,Rf6,Rh8,Ri9,Rk11,Rl12,Rn14,Ro15;//................................................Declara��o de vari�vel
   		Rb2=Re5=Rh8=Rk11=Rn14=N1;//.......................................................................Declara��o de vari�vel
   		Rc3=(N1*1);//.....................................................................................Declarando valor a vari�vel
   		Rf6=(N1*2);//.....................................................................................Declarando valor a vari�vel
   		Ri9=(N1*3);//.....................................................................................Declarando valor a vari�vel
   		Rl12=(N1*4);//....................................................................................Declarando valor a vari�vel
   		Ro15=(N1*5);//....................................................................................Declarando valor a vari�vel
		arqRespostaNA1=fopen("26_Resposta_01_Nivel_Avancado_ Nivel_3.txt", "w");//........................Criar arquivo Texto.
		fprintf(arqRespostaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//........................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XX                                       XX\n");//........................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XX          Resposta Incorreta           XX        +-----------------------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XX                                       XX        |     Teste de Mesa     |\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XX  Resposta 01 - Teste de Mesa - (1/3)  XX        +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XX                                       XX        | Cont  |   N   | Result|\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"                                                       1       %d      %d   \n",Rb2,Rc3);//..Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X X X X X X X X X X X X X X X X X X X X X X X      +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"                                                       2       %d      %d   \n",Re5,Rf6);//..Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X Print em tela o valor m�ltiplo de N:      X      +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  Realize o Teste de Mesa de forma correta:            3       %d      %d   \n",Rh8,Ri9);//..Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X                                           X      +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  Algoritmo ''Teste de Mesa''                          4       %d      %d   \n",Rk11,Rl12);//Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X Var N, cont,Result:inteiro                X      +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  inicio                                               5       %d      %d   \n",Rn14,Ro15);//Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X escreva(''Digite um N�mero'')             X      +-------+-------+-------+\n");//..........Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  leia(N)// N=_%d_                           \n",N1);//......................................Armazenar essa mensagem e declarar o valor da vari�vel
		fprintf(arqRespostaNA1,"X cont<-1                                   X\n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  Enquanto (cont<=5)faca                     \n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"X Result<-cont*N                            X\n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  Escreva(Result)                            \n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"X cont<-cont+1                              X\n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"  Fimenquanto                                \n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"X fimalgoritmo                              X\n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"                                             \n");//.........................................Armazenar essa mensagem.
		fprintf(arqRespostaNA1,"X X X X X X X X X X X X X X X X X X X X X X X\n");//.........................................Armazenar essa mensagem.
       	fclose(arqRespostaNA1);//.........................................................................Fechar arquivo texto.
		system ("cls");//.................................................................................Limpar tela.
		
		if 	((R1==1)&&(R4==2)&&(R7==3)&&(R10==4)&&(R13==5)&&(R2,R5,R8,R11,R14==N1)&&(R3==(N1*1))&&(R6==(N1*2))&&(R9==(N1*3))&&(R12==(N1*4))&&(R15==(N1*5))){//.Se a condi��o for verdadeira, entra aqui.
		printf("\n");//...................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//............................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//..................Mensagem

		FILE *arqPerguntaNA1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=2;//..........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNA1=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//..................................Criar arquivo Texto.
       	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNA1,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//....................Armazenar essa mensagem.
       	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//....................................Armazenar essa mensagem.
       	fclose(arqPerguntaNA1);//.........................................................................Fechar arquivo texto.
       	printf("\n");//...................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//....................................................Pr�xima tela.
		fflush(stdin);//..................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//.......................................................................................Parar tela.

		else {//..........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPerguntaNA1;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNA1[100];//..........................................................................Declara��o de um Vetor.
		arqPerguntaNA1=fopen("26_Resposta_01_Nivel_Avancado_ Nivel_3.txt","r");//.........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA1,100,arqPerguntaNA1)){//...................................................Ler arquivo texto
		printf("%s",PerguntaNA1);}//......................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA1);//.........................................................................Fechar arquivo texto.
		getch();}//.......................................................................................Parar tela.
		system ("cls");//.................................................................................Limpar tela.
		return acertosAprendizado;}//.....................................................................Retorna o valor da variavel acertosAprendizado.

int Pergunta_02_Nivel_Avancado_Nivel_3(int acertosAprendizado){//.........................................Fun��o para Pergunta 02 do n�vel avan�ado.

		FILE *arqPerguntaNA2;//...........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//....................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNA2[100];//..........................................................................Declara��o de um Vetor.
		int R[31],i,j,valoracertos=0;//...................................................................Declara��o de vari�vel
		int V[31]= {2,7,2,2,0,2,7,3,2,3,2,7,4,6,3,2,7,5,6,8,2,7,6,12,8,2,7,7,12,15,27};//..................Declara��o de vari�vel		
		arqPerguntaNA2=fopen("27_Pergunta_02_Nivel_Avancado_ Nivel_3.txt","r");//.........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA2,100,arqPerguntaNA2)){//...................................................Ler arquivo texto
		printf("%s",PerguntaNA2);}//......................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA2);//.........................................................................Fechar arquivo texto.
	
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[0]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[1]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[2]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[3]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[4]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[5]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[6]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[7]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[8]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[9]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[10]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[11]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[12]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[13]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[14]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer	
			
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[15]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[16]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[17]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[18]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[19]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[20]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[21]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[22]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[23]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[24]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[25]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[26]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[27]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[28]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[29]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=10;//....................................................................................Coordenadas X=Coluna
		coord.Y=31;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[30]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		valoracertos=0;
		for (i=0,j=0 ; i<31,j<31 ; ++i,++j){//.............................................................Estrutura de repeti��o para comprarar duas string.
		if (R[i] == V[j]){//.............................................................................Estrutura de repeti��o para comprarar duas string.
		valoracertos = valoracertos+1;}}//...............................................................Estrutura de repeti��o para comprarar duas string.
		system ("cls");//................................................................................Limpar tela.
		
		if 	(valoracertos == 31){//......................................................................Se a condi��o for verdadeira, entra aqui
		printf("\n");//..................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//...........................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//.................Mensagem
	
		FILE *arqPerguntaNA1;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
	    acertosAprendizado+=2;//.........................................................................Acerto vai ganahr 1 ponto
	   	arqPerguntaNA1=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//.................................Criar arquivo Texto.
	   	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
	   	fprintf(arqPerguntaNA1,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//...................Armazenar essa mensagem.
	   	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
	   	fclose(arqPerguntaNA1);//........................................................................Fechar arquivo texto.
	   	printf("\n");//..................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//...................................................Pr�xima tela.
		fflush(stdin);//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//......................................................................................Parar tela.

		else {//.........................................................................................Se a condi��o for falsa, entra aqui.

		FILE *arqPerguntaNA2;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNA2[100];//.........................................................................Declara��o de um Vetor.
		arqPerguntaNA2=fopen("27_Resposta_02_Nivel_Avancado_ Nivel_3.txt","r");//........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA2,100,arqPerguntaNA2)){//..................................................Ler arquivo texto
		printf("%s",PerguntaNA2);}//.....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA2);//........................................................................Fechar arquivo texto.
		getch();}//......................................................................................Parar tela.
		system ("cls");//................................................................................Limpar tela.
		return acertosAprendizado;}//....................................................................Retorna o valor da variavel acertosAprendizado.

int Pergunta_03_Nivel_Avancado_Nivel_3(int acertosAprendizado){//........................................Fun��o para Pergunta 03 do n�vel avan�ado.

		FILE *arqPerguntaNA3;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		COORD coord;//...................................................................................Coordenadas X=Coluna,Y=Linhas
		char PerguntaNA3[100];//.........................................................................Declara��o de um Vetor.		
		int R[36],i,j,valoracertos=0;//..................................................................Declara��o de um Vetor e vari�vel.
		int V[36]= {3,9,3,0,3,3,9,4,7,3,3,9,5,7,15,3,9,6,16,15,3,9,7,16,38,3,9,8,27,38,3,9,9,27,74,47};//Declara��o de um Vetor e vari�vel.
		arqPerguntaNA3=fopen("28_Pergunta_03_Nivel_Avancado_ Nivel_3.txt","r");//........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA3,100,arqPerguntaNA3)){//..................................................Ler arquivo texto
		printf("%s",PerguntaNA3);}//.....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA3);//........................................................................Fechar arquivo texto.
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[0]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[1]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[2]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[3]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=6;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[4]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[5]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[6]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[7]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[8]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=8;//.....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[9]);fflush(stdin);//...............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[10]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[11]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[12]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[13]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=10;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[14]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer	
			
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[15]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[16]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[17]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[18]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=12;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[19]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[20]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[21]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[22]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[23]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=14;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[24]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[25]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[26]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[27]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[28]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=16;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[29]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=45;//....................................................................................Coordenadas X=Coluna
		coord.Y=18;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[30]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=51;//....................................................................................Coordenadas X=Coluna
		coord.Y=18;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[31]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=57;//....................................................................................Coordenadas X=Coluna
		coord.Y=18;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[32]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=63;//....................................................................................Coordenadas X=Coluna
		coord.Y=18;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[33]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		coord.X=69;//....................................................................................Coordenadas X=Coluna
		coord.Y=18;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[34]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer	
			
		coord.X=10;//....................................................................................Coordenadas X=Coluna
		coord.Y=31;//....................................................................................Coordenadas Y=Linhas
		SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);//.............................Posicionando o cursor de acordo com X e Y
		scanf("%i",&R[35]);fflush(stdin);//..............................................................Leitura de dados e Limpador de buffer
		
		valoracertos=0;
		for (i=0,j=0 ; i<36,j<36 ; ++i,++j){//...........................................................Estrutura de repeti��o para comprarar duas string.
		if (R[i] == V[j]){//.............................................................................Estrutura de repeti��o para comprarar duas string.
		valoracertos = valoracertos+1;}}//...............................................................Estrutura de repeti��o para comprarar duas string.
		system ("cls");//................................................................................Limpar tela.
		
		if 	(valoracertos == 36){//......................................................................Se a condi��o for verdadeira, entra aqui
		printf("\n");//..................................................................................Pular uma linha.
		printf("Parab�ns, voc� acertou!\n");//...........................................................Mensagem
		printf("Isso sera computado para avalia��o de qual n�vel voc� deve seguir\n");//.................Mensagem

		FILE *arqPerguntaNA1;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
        acertosAprendizado+=3;//.........................................................................Acerto vai ganahr 1 ponto
       	arqPerguntaNA1=fopen("Nivel_de_Aprendizado_Acertos.txt", "w");//.................................Criar arquivo Texto.
       	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
       	fprintf(arqPerguntaNA1,"  N�vel de Aprendizado = %d\n", acertosAprendizado);//...................Armazenar essa mensagem.
       	fprintf(arqPerguntaNA1,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//...................................Armazenar essa mensagem.
       	fclose(arqPerguntaNA1);//........................................................................Fechar arquivo texto.
       	printf("\n");//..................................................................................Pular uma linha.
		printf("Pressione ENTER para prosseguir\n");//...................................................Pr�xima tela.
		fflush(stdin);//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).
		getch();}//......................................................................................Parar tela.

		else {//.........................................................................................Se a condi��o for falsa, entra aqui.
	
		FILE *arqPerguntaNA3;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char PerguntaNA3[100];//.........................................................................Declara��o de um Vetor.
		arqPerguntaNA3=fopen("28_Resposta_03_Nivel_Avancado_ Nivel_3.txt","r");//........................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(PerguntaNA3,100,arqPerguntaNA3)){//..................................................Ler arquivo texto
		printf("%s",PerguntaNA3);}//.....................................................................Mostrar em tela o arquivo texto.
		fclose(arqPerguntaNA3);//........................................................................Fechar arquivo texto.
		getch();}//......................................................................................Parar tela.
		system ("cls");//................................................................................Limpar tela.
		return acertosAprendizado;}//....................................................................Retorna o valor da variavel acertosAprendizado.

void Apresentando_Resultados_e_Finalizando(void){//......................................................Fun��o para apresentar os resultados e a finaliza��o
	
		printf("\n");//..................................................................................Pular uma linha.
		FILE *arqResultado;//............................................................................Cria��o de um ponteiro para o arquivo FILE.
		int acertosAprendizado;//........................................................................Declara��o de um Vari�vel.
		char Resultado[100];//...........................................................................Declara��o de um Vetor.
		arqResultado=fopen("Nivel_de_Aprendizado_Acertos.txt","r");//....................................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(Resultado,100,arqResultado)){//......................................................Ler arquivo texto
		printf("%s",Resultado);}//.......................................................................Mostrar em tela o arquivo texto.
		fclose(arqResultado);//..........................................................................Fechar arquivo texto.		

		if (acertosAprendizado<6){//.....................................................................Se a condi��o for verdadeira, entra aqui
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//.......................................Escrita para gerar apresenta��o.
		printf("XX                                       XX\n");//.......................................Pular uma linha.
		printf("XX          Vamos estudar mais           XX\n");//.......................................Pular uma linha.
		printf("XX                                       XX\n");//.......................................Pular uma linha.		
		printf("XX        :(  Voc� foi Reprovado         XX\n");//.......................................Pular uma linha.
		printf("XX                                       XX\n");//.......................................Pular uma linha.										
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");}//......................................Escrita para gerar apresenta��o.

		else if (acertosAprendizado==6){//...............................................................Se a condi��o for verdadeira, entra aqui

		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//........................................Escrita para gerar apresenta��o.
		printf("XX                                      XX\n");//........................................Pular uma linha.
		printf("XX          Vamos estudar mais          XX\n");//........................................Pular uma linha.
		printf("XX                                      XX\n");//........................................Pular uma linha.
		printf("XX        :)  Voc� foi Aprovado         XX\n");//........................................Pular uma linha.
		printf("XX                                      XX\n");//........................................Pular uma linha.										
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");}//.......................................Escrita para gerar apresenta��o.	

		else if (acertosAprendizado>6){//................................................................Se a condi��o for verdadeira, entra aqui

		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");//........................................Escrita para gerar apresenta��o.
		printf("XX                                      XX\n");//........................................Pular uma linha.
		printf("XX               Parab�ns               XX\n");//........................................Pular uma linha.
		printf("XX                                      XX\n");//........................................Pular uma linha.
		printf("XX        :D  Voc� foi Aprovado         XX\n");//........................................Pular uma linha.
		printf("XX                                      XX\n");//........................................Pular uma linha.										
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");}//.......................................Escrita para gerar apresenta��o.			
		getch();//.......................................................................................Parar tela.			
		system("cls");//.................................................................................Limpar tela.	
//--------------------------------------Finalizando-------------------------------------------
		FILE *arqFinalizando;//..........................................................................Cria��o de um ponteiro para o arquivo FILE.
		char Finalizando[100];//.........................................................................Declara��o de um Vetor.
		arqFinalizando=fopen("29_Tela_Finalizacao.txt","r");//...........................................Informa��es para que o S.O. possa abrir o arquivo.
		while(fgets(Finalizando,100,arqFinalizando)){//..................................................Ler arquivo texto
		printf("%s",Finalizando);}//.....................................................................Mostrar em tela o arquivo texto.
		fclose(arqFinalizando);//........................................................................Fechar arquivo texto.
		getch();//.......................................................................................Parar tela.
		system("cls");}//................................................................................Limpar tela.	

int Informacoes_Sobre_LogicAlg(int RMenuSobre){//........................................................Fun��o para Informa��es Sobre LogicAlg

		printf("\n");//..................................................................................Pular uma linha.
		FILE *arqINFO;//.................................................................................Cria��o de um ponteiro para o arquivo FILE.
		char MenuSobre[50];
		arqINFO=fopen("Info_LogicAlg.txt","r");//........................................................Informa��es para que o S.O. possa abrir o arquivo.
		while (fgets(MenuSobre, 50, arqINFO)){//.........................................................Ler arquivo Texto.
		printf("%s",MenuSobre);} //......................................................................Mostrar em tela o arquivo texto.
		fclose(arqINFO);//...............................................................................Fechar arquivo texto.
		printf("\n");//..................................................................................Mostrar em tela o arquivo texto.
		printf("Escolha uma Op��o: ");//.................................................................Escrita em tela.
		scanf("%d",&RMenuSobre);//.......................................................................Ler resposta do usuario		
		system ("cls");//................................................................................Limpar tela.			
		fflush(stdin);//.................................................................................Limpador de buffer (Limpar sujeira ap�s inserir dados).   

		if (RMenuSobre==1){}//...........................................................................Se a condi��o for verdadeira, entra aqui

		else if (RMenuSobre==2){//.......................................................................Se a condi��o for verdadeira, entra aqui
		exit(0);}//......................................................................................Sair do programa

		else if (RMenuSobre!=1,2){//.....................................................................Se a condi��o for verdadeira, entra aqui
		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//...........................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//...........................................................Pular uma linha.
		printf("XX  Op��o incorreta  XX\n");//...........................................................Escrita para gerar apresenta��o.
		printf("XX                   XX\n");//...........................................................Pular uma linha.						
		printf("XXXXXXXXXXXXXXXXXXXXXXX\n");//...........................................................Escrita para gerar apresenta��o.				
		getch();//.......................................................................................Parar tela.
		system ("cls");}//...............................................................................Limpar tela. 
		return RMenuSobre;}//............................................................................Retorna o valor da variavel RMenuSobre.

