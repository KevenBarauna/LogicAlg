package srcRaphael;

import java.awt.Image;
import java.awt.event.KeyEvent; 
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class PersonagemRaphael extends JFrame{
    private int Coord_P_x,Coord_P_y; // Coordenadas do Personagem= Coord_P, coluna=x, linha=y
    private int Coord_M_x,Coord_M_y; // Coordenadas para movimentar o personagem= Coord_M, coluna=x, linha=y
    private Image imagempersonagem; // Criar a imagem do personagem da classe Image
    private int enter=0;

    public PersonagemRaphael() { // Terá que criar um cnstrutor para que a imagem apareça e o local onde ela vai ficar na tela. 
        //Foi criada uma pasta com as imagem que vai ser colocadas no jogo.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\direito.png");// Para pegar a imagem que esta na pasta, será criado um objeto do tipo o ImageIcon.
        imagempersonagem = imagem_pasta.getImage();// A imagempersonagem vai receber a imagem que esta na pasta. 
        this.Coord_P_x=600;//Local do personagem na tela: "coluna".
        this.Coord_P_y=269;//Local do personagem na tela: "linha".
    }
    
    public void andar(){ //Criar um metodo para que o personagegm ande na tela.
       Coord_P_x += Coord_M_x; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.
       Coord_P_y += Coord_M_y; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.  

           
       if (Coord_P_x<=9){ // Para não ultrapassar a parede esquerda.
       Coord_P_x=9+1;  
       }
       if (Coord_P_y<=190){ // Para não ultrapassar a parede de cima.
       Coord_P_y=190+1;
       }
       if (Coord_P_x>=1108){ // Para não ultrapassar a parede direita.
       Coord_P_x=1108-1;  
       }
       if (Coord_P_y>=265){ // Para não ultrapassar a parede de baixo.
       Coord_P_y=265-1;
       }       

//----------Dicas-----------

        if ((Coord_P_y>=190)&&(Coord_P_y<=265)&&(Coord_P_x>=1100) && (Coord_P_x<=1107)&& (enter==1)){ 
        new Dicas().show();
            enter=0;
       }

//-------------Escolha Porta 01 ------------

        if ((Coord_P_y>=190)&&(Coord_P_y<=213)&&(Coord_P_x>=35) && (Coord_P_x<=178)&& (enter==1)){ 
        new PortaUm().show();
        enter=0;
        }
//-------------Escolha Porta 02 ------------
        if ((Coord_P_y>=190)&&(Coord_P_y<=213)&&(Coord_P_x>=448 && Coord_P_x<=592)&& (enter==1)){ 
        new PortaDois().show();
        enter=0;
        }    
//-------------Escolha Porta 03 ------------
        if ((Coord_P_y>=190)&&(Coord_P_y<=213)&&(Coord_P_x>=829 && Coord_P_x<=978)&& (enter==1)){ 
        new PortaTres().show();
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

    if (botao_escolhido == KeyEvent.VK_UP){//Se for igual a seta para cima.
        Coord_M_y = -1; // Se o usuario for para cima, a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\personagem_cima.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = 1; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\personagem_baixo.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = -1; // Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\personagem_esquerda.gif"); 
        imagempersonagem = imagem_pasta.getImage();
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 1; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\personagem_direita.gif"); 
        imagempersonagem = imagem_pasta.getImage();    
    }  
    if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
        enter = 1; // Se aperta enter ele recebe 1       
    }     
    }    

    public void keyReleased(KeyEvent botao){//Receber dados ao sooltar a tecla do teclado. Ao soltar a Coordenada de movimento vai receber um valor nulo.
    
     int botao_escolhido = botao.getKeyCode();//Será comporado o botão que o usuario vai clicar com o metodo KeyCode, que consegue saber qual foi a tecla.
     int aperte_enter = botao.getKeyCode();
     if (botao_escolhido == KeyEvent.VK_UP){ //Se for igual a seta para cima.
        Coord_M_y = 0; // Se o usuario for para cima, a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\cima.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = 0; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\baixo.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = 0;// Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\esquerda.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 0; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemRaphael\\direito.png"); 
        imagempersonagem = imagem_pasta.getImage();        
       
    }
     if (aperte_enter == KeyEvent.VK_ENTER){
     enter = 0;      
    }      
    
    
    }        
}

