package srcCasaNova03;

import java.awt.Image;// Como vamos trabalhar com imagens, será necessario importa a classe que trabalha com esta função.
import java.awt.event.KeyEvent; //Importa classe responsavel de obter dados do teclado.
import javax.swing.ImageIcon;// Impostado para conseguir pegar as imagens.
import javax.swing.JFrame;

public class PersonagemCasa03 extends JFrame{
    private int Coord_P_x,Coord_P_y; // Coordenadas do Personagem= Coord_P, coluna=x, linha=y
    private int Coord_M_x,Coord_M_y; // Coordenadas para movimentar o personagem= Coord_M, coluna=x, linha=y
    private Image imagempersonagem; // Criar a imagem do personagem da classe Image
    private int enter=0;
    private int escada;
    
    public PersonagemCasa03() { // Terá que criar um cnstrutor para que a imagem apareça e o local onde ela vai ficar na tela. 
        //Foi criada uma pasta com as imagem que vai ser colocadas no jogo.
           ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\direito.png");// Para pegar a imagem que esta na pasta, será criado um objeto do tipo o ImageIcon.
        imagempersonagem = imagem_pasta.getImage();// A imagempersonagem vai receber a imagem que esta na pasta. 
        this.Coord_P_x=516;//Local do personagem na tela: "coluna".
        this.Coord_P_y=569;//Local do personagem na tela: "linha".
    }
    
  public void andar(){ //Criar um metodo para que o personagegm ande na tela.
      
      System.out.println("X" + Coord_P_x);
      System.out.println("Y" + Coord_P_y);

      
       Coord_P_x += Coord_M_x; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.
       Coord_P_y += Coord_M_y; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.  
       
       //casa01
                   
       if ((Coord_P_x<=421)&& (Coord_P_y==569)){ // Para não ultrapassar a parede esquerda do primeiro andar;
       Coord_P_x=421+1;  
       }
       
       if ((Coord_P_x>=1215)&& (Coord_P_y==569)){ // Para não ultrapassar a parede esquerda do primeiro andar;
       Coord_P_x=1215-1;  
       }
       
       if (Coord_P_y>569){ // Para não ultrapassar o chao
       Coord_P_y=569;  
       }
       
//-------------ESCADA BAIXO ------------
        if ((Coord_P_y <= 569) &&(Coord_P_x>=804 && Coord_P_x<=841)){ 
        escada = 1; 
        }
        if ((Coord_P_y <= 569) &&(Coord_P_x<=803 || Coord_P_x>=840)){ 
        escada = 0; 
        }
        if((Coord_P_y < 370) &&(Coord_P_x >= 804 && Coord_P_x <= 841)){
            Coord_P_y =370;  
        }
        if((Coord_P_y < 569 && Coord_P_y >370 ) && (Coord_P_x<=803 || Coord_P_x>=840)){
        Coord_P_y = 569;
       }
        
       
       
        //casa02
        
       if ((Coord_P_x<=489)&& (Coord_P_y==370)){ // Para não ultrapassar a parede esquerda do segundo andar;
       Coord_P_x=489+1;  
       }
       
       if ((Coord_P_x>=1210)&& (Coord_P_y==370)){ // Para não ultrapassar a parede esquerda do segundo andar;
       Coord_P_x=1210-1;  
       }
       
       if (Coord_P_y>569){ // Para não ultrapassar o chao
       Coord_P_y=372;  
       }
       
        //apagar
        if ((Coord_P_y > 370 && Coord_P_y != 569) &&(Coord_P_x<=803 || Coord_P_x>=840)){ 
        //Coord_P_y = 370; 
        }
        
       
       
       //casa03
        
       if ((Coord_P_x<=841)&& (Coord_P_y==174)){ // Para não ultrapassar a parede esquerda do segundo andar;
       Coord_P_x=841+1;  
       }
       
       if ((Coord_P_x>=1212)&& (Coord_P_y==174)){ // Para não ultrapassar a parede esquerda do segundo andar;
       Coord_P_x=1212-1;  
       }
             
//-------------Escolha DICA ------------

        if ((Coord_P_y>=Coord_P_y)&&(Coord_P_y<=Coord_P_y)&&(Coord_P_x>=1034) && (Coord_P_x<=1150)&& (enter==1)){ 
      // new BotaoDicas().show();
        enter=0;
        }

//-------------Escolha Porta 01 ------------

        if ((Coord_P_y>=Coord_P_y)&&(Coord_P_y<=Coord_P_y)&&(Coord_P_x>=271) && (Coord_P_x<=432)&& (enter==1)){ 
        //new PortaUm().show();
        enter=0;
        }
//-------------Escolha Porta 02 ------------
        if ((Coord_P_y>=Coord_P_y)&&(Coord_P_y<=Coord_P_y)&&(Coord_P_x>=542 && Coord_P_x<=726)&& (enter==1)){ 
        //new PortaDois().show();
        enter=0;
        }    
//-------------Escolha Porta 03 ------------
        if ((Coord_P_y>=Coord_P_y)&&(Coord_P_y<=Coord_P_y)&&(Coord_P_x>=821 && Coord_P_x<=987)&& (enter==1)){ 
        //new PortaTres().show();
        enter=0;
        }
        
       }               
                 
     

    public int getCoord_P_x() {// Será necessario pegar as Coordenadas do personagem getCoord_P_x.
        return Coord_P_x;
    }

    public int getCoord_P_y() {// Será necessario pegar as Coordenadas do personagem getCoord_P_y.
        return Coord_P_y;
    }

    public Image getImagempersonagem() {// Será necessario pegar a imagem do personagem.
        return imagempersonagem;
    }
    
    //Como será necessario pegar os dados que o usuario vai digitar no teclado vamos utilizar um metodo que vai 
    //interpretar os botões de setar para baico, para cima, para direira e para esquerda.
    //Obs.: Colunas e linhas começam com 0.
    
    public void keyPressed(KeyEvent botao){//Receber dados ao aperta a tecla do teclado. Ao aperta a Coordenada de movimento vai somar ou subtrair.
    int botao_escolhido = botao.getKeyCode();//Será comporado o botão que o usuario vai clicar com o metodo KeyCode, que consegue saber qual foi a tecla.
    int aperte_enter = botao.getKeyCode();

    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = -1; // Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\personagem_esquerda.gif"); 
        imagempersonagem = imagem_pasta.getImage();
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 1; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\personagem_direita.gif"); 
        imagempersonagem = imagem_pasta.getImage();    
    }  
    
     /////////////////////////////////////////////////////////////////////////////
    if ((botao_escolhido == KeyEvent.VK_UP) && (escada == 1)){//Se for igual a seta para cima.
        Coord_M_y = -1; // Se o usuario for para cima, a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\personagem_costas.gif"); 
        imagempersonagem = imagem_pasta.getImage();  
        escada =0;
    }
    if ((botao_escolhido == KeyEvent.VK_DOWN) && (escada == 1)){//Se for igual a seta para baixo.
        Coord_M_y = 1; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\personagem_costas.gif"); 
        imagempersonagem = imagem_pasta.getImage();   
        escada =0;
    }    
      /////////////////////////////////////////////////////////////////////////////
    if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
        enter = 1; // Se aperta enter ele recebe 1       
    }     
    }    

    public void keyReleased(KeyEvent botao){//Receber dados ao sooltar a tecla do teclado. Ao soltar a Coordenada de movimento vai receber um valor nulo.
    
     int botao_escolhido = botao.getKeyCode();//Será comporado o botão que o usuario vai clicar com o metodo KeyCode, que consegue saber qual foi a tecla.
     int aperte_enter = botao.getKeyCode();
   
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = 0;// Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\esquerda.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 0; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\direito.png"); 
        imagempersonagem = imagem_pasta.getImage();        
       
    }
    
    /////////////////////////////////////////////////////////////////////////////
     if ((botao_escolhido == KeyEvent.VK_UP) && (escada == 1)){ //Se for igual a seta para cima.
        Coord_M_y = 0; // Se o usuario for para cima, a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\costas.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }
    if ((botao_escolhido == KeyEvent.VK_DOWN) && (escada == 1)){//Se for igual a seta para baixo.
        Coord_M_y = 0; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasaNova03\\costas.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }    
    /////////////////////////////////////////////////////////////////////////////
     if (aperte_enter == KeyEvent.VK_ENTER){
     enter = 0;      
    }      
    
    
    }        
}


