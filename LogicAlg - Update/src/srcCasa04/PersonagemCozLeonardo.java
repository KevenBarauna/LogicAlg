package srcCasa04;

import java.awt.Image;// Como vamos trabalhar com imagens, será necessario importa a classe que trabalha com esta função.
import java.awt.event.KeyEvent; //Importa classe responsavel de obter dados do teclado.
import javax.swing.ImageIcon;// Impostado para conseguir pegar as imagens.
import javax.swing.JFrame;

public class PersonagemCozLeonardo extends JFrame{
    private int Coord_P_x,Coord_P_y; // Coordenadas do Personagem= Coord_P, coluna=x, linha=y
    private int Coord_M_x,Coord_M_y; // Coordenadas para movimentar o personagem= Coord_M, coluna=x, linha=y
    private Image imagempersonagem; // Criar a imagem do personagem da classe Image
    private int enter=0;
    private int ordem=0;
    
    public PersonagemCozLeonardo() { // Terá que criar um cnstrutor para que a imagem apareça e o local onde ela vai ficar na tela. 
        //Foi criada uma pasta com as imagem que vai ser colocadas no jogo.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\direito.png");// Para pegar a imagem que esta na pasta, será criado um objeto do tipo o ImageIcon.
        imagempersonagem = imagem_pasta.getImage();// A imagempersonagem vai receber a imagem que esta na pasta. 
        this.Coord_P_x=600;//Local do personagem na tela: "coluna".
        this.Coord_P_y=300;//Local do personagem na tela: "linha".
    }
    
    public void andar(){ //Criar um metodo para que o personagegm ande na tela.
       Coord_P_x += Coord_M_x; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.
       Coord_P_y += Coord_M_y; //A Coordenada do personagem vai somar com a Coordenada de movimentos na tela.   
       
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
       if (Coord_P_y>=583){ // Para não ultrapassar a parede de baixo.
       Coord_P_y=583-1;
       }       
    
//--------------Não utrapassar a PIA--------------------------------------------------------------------------------------------- 
        if ((Coord_P_y>=93 && Coord_P_y<=100)&& (Coord_P_x>16 && Coord_P_x<200)){ // Para passar da parte de cima da Pia. coluna=x, linha=y
       Coord_P_y=93-1;
       }        
       
        if ((Coord_P_y>=450 && Coord_P_y<=463) && (Coord_P_x>15 && Coord_P_x<200)){ // Para passar da parte de baixo da Pia.
       Coord_P_y=463+1;
       }         
        if (Coord_P_x<=203 && Coord_P_x>=190 && (Coord_P_y>93 && Coord_P_y<390)){ // Para passar da parte direita da Pia.
       Coord_P_x=203+1;
       }         
 //----------Não utrapassar a Fogão--------------------------       

        if (Coord_P_x==412 && (Coord_P_y>13 && Coord_P_y<180) ){ // Para passar da parte esquerda  do Fogão. 
       Coord_P_x=412-1;
       }        
        if (Coord_P_x==796 && (Coord_P_y>13 && Coord_P_y<180) ){ // Para passar da parte direita do Fogão. 
       Coord_P_x=796+1;
       }    
        if (Coord_P_y==180 && (Coord_P_x>412 && Coord_P_x<1000)){ // Para nao passar da parte de baixo  da Fogão.
       Coord_P_y=180+1;
       }     
//--------Não utrapassar a Geladeira--------------------          
        if (Coord_P_y==133 && (Coord_P_x>966 && Coord_P_x<1176)){ // Para passar da parte de cima da Geladeira.       
       Coord_P_y=133-1;
       }        
        
        if (Coord_P_y==454 && (Coord_P_x>966 && Coord_P_x<1176)){ // Para passar da parte de baixo da Geladeira.       
       Coord_P_y=454+1;
       }        
        if (Coord_P_x==966 && (Coord_P_y>50 && Coord_P_y<454)){ // Para passar da parte esquerda  da Geladeira.
       Coord_P_x=966-1;
       }               
//----------Não utrapassar a Mesa--------------------------       
        if (Coord_P_x==320  && (Coord_P_y>395 && Coord_P_y<597)){ // Para passar da parte esquerda  do Mesa. coluna=x, linha=y
       Coord_P_x=320-1;
       }        
        if (Coord_P_x<=894  && (Coord_P_y>395 && Coord_P_y<597)){ // Para passar da parte direita do Mesa.
       Coord_P_x=894+1;
       }     
        if (Coord_P_y>=377 && (Coord_P_x>190 && Coord_P_x<894)){ // Para passar da parte de cima da Mesa.
       Coord_P_y=377-1;
       }

//-------------Tapete Pia-----------------coluna=x, linha=y--------------------------------------------------------------------------------
        if ((Coord_P_y>=273) && (Coord_P_y<=350)&&(Coord_P_x<=225)&&(enter==1)&&(ordem==0)){ // Tapete do Pia. 
        new ObjetivoPia().show();
        enter = 0;
        ordem=1;// Verificar uma forma de ganhar um apenas se acerta o comando
        } 
        
        if ((Coord_P_y>=273) && (Coord_P_y<=350)&&(Coord_P_x<=225)&&(enter==1)&&(ordem==1)){ // Tapete do Pia. 
        new TapeteErradoGeladeira().show();//Manda ir para PIA
        enter = 0;
        }  

        if ((Coord_P_y>=273) && (Coord_P_y<=350)&&(Coord_P_x<=225)&&(enter==1)&&(ordem==2)){ // Tapete do Pia. 
        new TapeteErradoMesa().show();//Manda ir para PIA
        enter = 0;
        }   
        
        if ((Coord_P_y>=273) && (Coord_P_y<=350)&&(Coord_P_x<=225)&&(enter==1)&&(ordem==3)){ // Tapete do Pia. 
        new TapeteErradoFogao().show();//Manda ir para PIA
        enter = 0;
        }            
//-------------Tapete Geladeira-----------------coluna=x, linha=y

        if ((Coord_P_y>=292) && (Coord_P_y<=366)&&(Coord_P_x>=959)&&(enter==1)&&(ordem==0)){ // Tapete do Geladeira. 
        new TapeteErradoPia().show();//Manda ir para PIA
        enter = 0;
        }   


        if ((Coord_P_y>=292) && (Coord_P_y<=366)&&(Coord_P_x>=959)&&(enter==1)&&(ordem==1)){ // Tapete do Geladeira. 
        new ObjetivoGeladeira().show();
        enter = 0;
        ordem=2;        
        }   
        
        if ((Coord_P_y>=292) && (Coord_P_y<=366)&&(Coord_P_x>=959)&&(enter==1)&&(ordem==2)){ // Tapete do Geladeira. 
        new TapeteErradoMesa().show();
        enter = 0;      
        }   
        
         if ((Coord_P_y>=292) && (Coord_P_y<=366)&&(Coord_P_x>=959)&&(enter==1)&&(ordem==3)){ // Tapete do Geladeira. 
        new TapeteErradoFogao().show();
        enter = 0;    
        }        
        
        
        
 //-------------Tapete Mesa-----------------coluna=x, linha=y
        if ((Coord_P_x>=579) && (Coord_P_x<=713)&&(Coord_P_y>=375)&&(enter==1)&&(ordem==0)){ // Tapete do Mesa. 
        new TapeteErradoPia().show();//Manda ir para PIA
        enter = 0;
        } 
        
        if ((Coord_P_x>=579) && (Coord_P_x<=713)&&(Coord_P_y>=375)&&(enter==1)&&(ordem==1)){ // Tapete do Mesa. 
        new TapeteErradoGeladeira().show();//Manda ir para Geladeira
        enter = 0;
        }    

        if ((Coord_P_x>=579) && (Coord_P_x<=713)&&(Coord_P_y>=375)&&(enter==1)&&(ordem==2)){ // Tapete do Mesa. 
        new ObjetivoMesa().show();
        enter = 0;
        ordem=3;         
        }
        
        if ((Coord_P_x>=579) && (Coord_P_x<=713)&&(Coord_P_y>=375)&&(enter==1)&&(ordem==3)){ // Tapete do Mesa. 
        new TapeteErradoFogao().show();//Manda ir para PIA
        enter = 0;
        }         
        
  
//-------------Tapete Fogão-----------------coluna=x, linha=y

        if ((Coord_P_x>=576) && (Coord_P_x<=653)&&(Coord_P_y<=204)&&(enter==1)&&(ordem==0)){ // Tapete do Fogão. 
        new TapeteErradoPia().show();//Manda ir para PIA
        enter = 0;
        }
 
        if ((Coord_P_x>=576) && (Coord_P_x<=653)&&(Coord_P_y<=204)&&(enter==1)&&(ordem==1)){ // Tapete do Fogão. 
        new TapeteErradoGeladeira().show();//Manda ir para Geladeira
        enter = 0;
        }  
        
        if ((Coord_P_x>=576) && (Coord_P_x<=653)&&(Coord_P_y<=204)&&(enter==1)&&(ordem==2)){ // Tapete do Fogão. 
        new TapeteErradoMesa().show();//Manda ir para Geladeira
        enter = 0;
        }
        
        if ((Coord_P_x>=576) && (Coord_P_x<=653)&&(Coord_P_y<=204)&&(enter==1)&&(ordem==3)){ // Tapete do Fogão. 
        new ObjetivoFogao().show();
        enter = 0;
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
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\personagem_cima.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = (3/2); // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\personagem_baixo.gif"); 
        imagempersonagem = imagem_pasta.getImage();        
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = -(3/2); // Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\personagem_esquerda.gif"); 
        imagempersonagem = imagem_pasta.getImage();
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = (3/2); // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\personagem_direita.gif"); 
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
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\cima.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }
    if (botao_escolhido == KeyEvent.VK_DOWN){//Se for igual a seta para baixo.
        Coord_M_y = 0; // Se o usuario for para baixo, a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\baixo.png"); 
        imagempersonagem = imagem_pasta.getImage();         
    }    
    if (botao_escolhido == KeyEvent.VK_LEFT){//Se for igual a seta para esquerda.
        Coord_M_x = 0;// Se o usuario for para esquerda a posição que ele esta vai diminuir.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\esquerda.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
    if (botao_escolhido == KeyEvent.VK_RIGHT){//Se for igual a seta para diraita
        Coord_M_x = 0; // Se o usuario for para direita a posição que ele esta vai aumentar.
        ImageIcon imagem_pasta = new ImageIcon("src\\imagemCasa04\\direito.png"); 
        imagempersonagem = imagem_pasta.getImage();        
    }
     if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
     enter = 0; // Se aperta enter ele recebe 1       
    }  
    }        
}

