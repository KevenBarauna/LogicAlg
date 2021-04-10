package srcErick;

import java.awt.Image;// Como vamos trabalhar com imagens, será necessario importa a classe que trabalha com esta função.
import java.awt.event.KeyEvent; //Importa classe responsavel de obter dados do teclado.
import javax.swing.ImageIcon;// Impostado para conseguir pegar as imagens.
import javax.swing.JFrame;


public class PersonagemErick extends JFrame{
    private int Coord_P_x,Coord_P_y; // Coordenadas do Personagem= Coord_P, coluna=x, linha=y
    private int Coord_M_x,Coord_M_y; // Coordenadas para movimentar o personagem= Coord_M, coluna=x, linha=y
    private Image imagempersonagem; // Criar a imagem do personagem da classe Image
    private int enter=0;
    private int ordem=0;

    public PersonagemErick() { // Terá que criar um cnstrutor para que a imagem apareça e o local onde ela vai ficar na tela. 
        //Foi criada uma pasta com as imagem que vai ser colocadas no jogo.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\direito.png");// Para pegar a imagem que esta na pasta, será criado um objeto do tipo o ImageIcon.
        imagempersonagem = imagem_pasta.getImage();// A imagempersonagem vai receber a imagem que esta na pasta. 
        this.Coord_P_x=600;//Local do personagem na tela: "coluna".
        this.Coord_P_y=300;//Local do personagem na tela: "linha".       
    }
    
    public void andar(){ //Criar um metodo para que o personagegm ande na tela.
       Coord_P_x += Coord_M_x; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.
       Coord_P_y += Coord_M_y; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.   
             
     
//-------------Venda Superior-----------------coluna=x, linha=y

        if ((Coord_P_x>=367) && (Coord_P_x<=830)&&(Coord_P_y<=168)&&(enter==1)&&(ordem==0)){  
        new QuestaoIgualIgual().show(); 
        enter = 0;
        ordem=1;
        }
        
         if ((Coord_P_x>=367) && (Coord_P_x<=830)&&(Coord_P_y<=168)&&(enter==1)&&(ordem==1)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }       
        
         if ((Coord_P_x>=367) && (Coord_P_x<=830)&&(Coord_P_y<=168)&&(enter==1)&&(ordem==2)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }         
        
         if ((Coord_P_x>=367) && (Coord_P_x<=830)&&(Coord_P_y<=168)&&(enter==1)&&(ordem==3)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }       
        
         if ((Coord_P_x>=367) && (Coord_P_x<=830)&&(Coord_P_y<=168)&&(enter==1)&&(ordem==4)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }

//-------------Venda Direira-----------------coluna=x, linha=y

        if ((Coord_P_y>=19) && (Coord_P_y<=520)&&(Coord_P_x>1019)&&(enter==1)&&(ordem==0)){ 
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_y>=19) && (Coord_P_y<=520)&&(Coord_P_x>1019)&&(enter==1)&&(ordem==1)){
        new QuestaoE().show();
        enter = 0;
        ordem = 2;
        }         
        if ((Coord_P_y>=19) && (Coord_P_y<=520)&&(Coord_P_x>1019)&&(enter==1)&&(ordem==2)){ 
        new ProximaOrdem().show(); 
        enter = 0;
        }         
        if ((Coord_P_y>=19) && (Coord_P_y<=520)&&(Coord_P_x>1019)&&(enter==1)&&(ordem==3)){
        new ProximaOrdem().show(); 
        enter = 0;
        }         
        if ((Coord_P_y>=19) && (Coord_P_y<=520)&&(Coord_P_x>1019)&&(enter==1)&&(ordem==4)){
        new ProximaOrdem().show(); 
        enter = 0;
        }        
               
 //-------------Venda de Baixo-----------------coluna=x, linha=y
        if ((Coord_P_x>=332) && (Coord_P_x<=793)&&(Coord_P_y>=425)&&(enter==1)&&(ordem==0)){  
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_x>=332) && (Coord_P_x<=793)&&(Coord_P_y>=425)&&(enter==1)&&(ordem==1)){  
        new OrdemCorreta().show(); 
        enter = 0;
        }        
        if ((Coord_P_x>=332) && (Coord_P_x<=793)&&(Coord_P_y>=425)&&(enter==1)&&(ordem==2)){  
         new QuestaoOu().show();//Manda ir para PIA
        enter = 0;
        ordem = 3;
        }         
         if ((Coord_P_x>=332) && (Coord_P_x<=793)&&(Coord_P_y>=425)&&(enter==1)&&(ordem==3)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }        
         if ((Coord_P_x>=332) && (Coord_P_x<=793)&&(Coord_P_y>=425)&&(enter==1)&&(ordem==4)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }        
        
//-------------Venda Esquerda inferior-----------------coluna=x, linha=y--------------------------------------------------------------------------------
        if ((Coord_P_y>=412) && (Coord_P_y<=533)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==0)){  
        new OrdemCorreta().show(); 
        enter = 0;
        }
        if ((Coord_P_y>=412) && (Coord_P_y<=533)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==1)){  
        new OrdemCorreta().show(); 
        enter = 0;
        }  
        if ((Coord_P_y>=412) && (Coord_P_y<=533)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==2)){  
        new OrdemCorreta().show(); 
        enter = 0;
        }  
        if ((Coord_P_y>=412) && (Coord_P_y<=533)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==3)){  
        new QuestaoDiferente().show();
        enter = 0;
        ordem = 4;
        }  
        if ((Coord_P_y>=412) && (Coord_P_y<=533)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==4)){  
        new ProximaOrdem().show(); 
        enter = 0;
        }  
      
//-------------Venda Esquerda Superior-----------------coluna=x, linha=y--------------------------------------------------------------------------------
        if ((Coord_P_y>=86) && (Coord_P_y<=207)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==0)){  
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_y>=86) && (Coord_P_y<=207)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==1)){  
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_y>=86) && (Coord_P_y<=207)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==2)){  
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_y>=86) && (Coord_P_y<=207)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==3)){  
        new OrdemCorreta().show(); 
        enter = 0;
        } 
        if ((Coord_P_y>=86) && (Coord_P_y<=207)&&(Coord_P_x<=185)&&(enter==1)&&(ordem==4)){  
        new QuestaoMaiorMenor().show();
        
        enter = 0;
        ordem = 5;
        } 

//--------------Não utrapassar a Parede---------------------------------------------------------------------------------------------        
       if (Coord_P_x<=16){ // Para não ultrapassar a parede esquerda.
       Coord_P_x=16+1;  
       }
       if (Coord_P_y<=13){ // Para não ultrapassar a parede de cima.
       Coord_P_y=13+1;
       }
       if (Coord_P_x>=1176){ // Para não ultrapassar a parede direita.
       Coord_P_x=1176-1;  
       }
       if (Coord_P_y>=576){ // Para não ultrapassar a parede de baixo.
       Coord_P_y=576-1;
       }       
    
//--------------Não utrapassar venda esquerda--------------------------------------------------------------------------------------------- 

       if (Coord_P_x==158){ // Para não ultrapassar a parede esquerda.
       Coord_P_x=158+1;  
       }

 //----------Não utrapassar a venda de cima--------------------------       

        if (Coord_P_x==367 && (Coord_P_y>=13 && Coord_P_y<=139) ){  
       Coord_P_x=367-1;
       }        
        if (Coord_P_x==830 && (Coord_P_y>=13 && Coord_P_y<=139) ){  
       Coord_P_x=830+1;
       }    
        if (Coord_P_y==139 && (Coord_P_x>=367 && Coord_P_x<=830)){ 
       Coord_P_y=139+1;
       }     
//--------Não utrapassar a venda da direita--------------------          
        if (Coord_P_y==19 && (Coord_P_x>=1039 && Coord_P_x<=1176)){       
       Coord_P_y=19-1;
       }        
        
        if (Coord_P_y==520 && (Coord_P_x>=1039 && Coord_P_x<=1176)){       
       Coord_P_y=520+1;
       }        
        if (Coord_P_x==1039 && (Coord_P_y>=19 && Coord_P_y<=520)){ 
       Coord_P_x=1039-1;
       }               
//----------Não utrapassar a venda de baixo--------------------------       
        if (Coord_P_x==332  && Coord_P_y>443){ 
       Coord_P_x=332-1;
       }        
        if (Coord_P_x==793  && Coord_P_y>443){ 
       Coord_P_x=793+1;
       }     
        if (Coord_P_y==443 && (Coord_P_x>332 && Coord_P_x<793)){ 
       Coord_P_y=443-1;
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
        Coord_M_y = -(3/2); // Se o usuario for para cima, a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\personagem_cima.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = (3/2); // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\personagem_baixo.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = -(3/2); // Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\personagem_esquerda.gif"); 
        imagempersonagem = imagem_pasta.getImage();
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = (3/2); // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\personagem_direita.gif"); 
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
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\cima.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = 0; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\baixo.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = 0;// Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\esquerda.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 0; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemLeonardoErick\\direito.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
     if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
     enter = 0; // Se aperta enter ele recebe 1       
    }  
    }        
}

