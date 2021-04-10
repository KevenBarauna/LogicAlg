package srcKeven;

//FUNDOO
import java.awt.FlowLayout;
import java.awt.Image;
import java.awt.event.KeyEvent;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import srcFila.FilaLogicAlg;



public class Fundo extends JFrame{

private int x;//CORDENADA 
private int y;//CORDENADA 
private int dx;//CORDENADA 
private int dy;//CORDENADA 
private Image imagem;//IAMGEM DO FUNDO
private int enter=0, ordem=0;
private JButton ok;  
private JLabel conteudo, telaconteudo;
private CriarJanela janela;
private FilaLogicAlg fila;
private int casaum=0, casadois=0, casatres=0, casaquatro=0;


public Fundo() {

ImageIcon referencia = new ImageIcon("src\\ImagensKeven\\fase.png"); // CRIANDO A IMAGEM DO FUNDO PEGANDO A IAMGEM DA - src\\Imagens\\fase.png
imagem = referencia.getImage();// "IMAGEM" VAI RECEBER A IMAGEM QUE ESTA NA PASTA

this.x=0; // O FUNDO VAI COMEÇAR NA POSIÇÃO X = 0
this.y=0;// O FUNDO VAI COMEÇAR NA POSIÇÃO Y = 0
x=getX();

  

}

public void mexer(){//PARA SE MOVIMENTAR

        fila = new FilaLogicAlg();
        
    x +=dx;// A POSIÇÃO X DO PERSONAGEM VAI RECEBER X + DX ( DX É DEFINIDO PELO keyPressed )
    y +=dy;// A POSIÇÃO Y DO PERSONAGEM VAI RECEBER Y + Dy ( DY É DEFINIDO PELO keyPressed )
    
    if(x>-7){//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO INICIO DA FASE
    x=-7;//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO INICIO DA FASE
    }//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO INICIO DA FASE
    
    if(x<-5459){//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO FINAL DA FASE
    x=-5459;//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO FINAL DA FASE
    }//PARA QUE A IMAGEM DO FUNDO NÃO SE MOVIMENTE QUANDO O USUARIO CHEGAR NO FINAL DA FASE  

    if(x <= 0-1093 && x>= 0-1150 && enter ==1){// casa 01 
    new CasaUm().show();
    casaum+=1;
    ordem=1;
    enter=0;
    }

    if(x <= 0-2464 && x>= 0-2555 && enter ==1){// casa 02 
    new CasaDois().show(); 
    casadois+=1;
    ordem=2;
    enter=0;
    }

    if(x <= 0-3588 && x>= 0-3648 && enter ==1){// casa 03 
    new CasaTres().show();
    casatres+=1;
    ordem=3;
    enter=0;
    }

    if(x <= 0-4637 && x>= 0-4708 && enter ==1){// casa 04 
    new CasaQuatro().show(); 
    casaquatro+=1;
    ordem=4;
    enter=0;
    }


    //----------------------Saber Quantas vezes o usuario repetiu o exercicio
    

    if(x <= 0-4934 && x>= 0-5083 && enter ==1){// casa 04 
  //  janela(); 
    enter=0;
    
    
        conteudo  = new JLabel(); 
        telaconteudo = new JLabel(); 
        janela = new CriarJanela();
        
        ok = new JButton("OK"); 



        janela.setTitle("Resultado Final"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        janela.add(telaconteudo);
        telaconteudo.setLayout( new FlowLayout());

        
        
        conteudo = new JLabel("Casa 1 foi acessada "+casaum+" vezes.");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela  

        if(casaum<1){
        conteudo = new JLabel("Mesmo que tenha conhecimento sobre o assunto, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }
        if(casaum==1){
        conteudo = new JLabel("Gostou, aguardamos sua presenta nas proximas atualizações :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }        
        if(casaum>1){
        conteudo = new JLabel(":) Pelo visto você gostou desta casa, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }        
        
        
        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela            
        
        conteudo = new JLabel("Casa 2 foi acessada "+casadois+" vezes.");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela  
        if(casadois<1){
        conteudo = new JLabel("Mesmo que tenha conhecimento sobre o assunto, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }
        if(casadois==1){
        conteudo = new JLabel("Gostou, aguardamos sua presenta nas proximas atualizações :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }        
        if(casadois>1){
        conteudo = new JLabel(":) Pelo visto você gostou desta casa, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }          
        
        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela       
        
        conteudo = new JLabel("Casa 3 foi acessada "+casatres+" vezes.");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela  
        if(casatres<1){
        conteudo = new JLabel("Mesmo que tenha conhecimento sobre o assunto, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }
        if(casatres==1){
        conteudo = new JLabel("Gostou, aguardamos sua presenta nas proximas atualizações :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }        
        if(casatres>1){
        conteudo = new JLabel(":) Pelo visto você gostou desta casa, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }          

        
        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela  
        
        conteudo = new JLabel("Casa 4 foi acessada "+casaquatro+" vezes.");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela  
        if(casaquatro<1){
        conteudo = new JLabel("Mesmo que tenha conhecimento sobre o assunto, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }
        if(casaquatro==1){
        conteudo = new JLabel("Gostou, aguardamos sua presenta nas proximas atualizações :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }        
        if(casaquatro>1){
        conteudo = new JLabel(":) Pelo visto você gostou desta casa, é sempre bom praticar :)");//Informações que serão colocados na janela
        telaconteudo.add(conteudo);//Adicionando o conteudo na janela 
        }  

        
    }  


}
  
    
    
    

public int getX() {//PARA PEGAR A POSIÇÃO X DO FUNDO
    return x;
}

public int getY() {//PARA PEGAR A POSIÇÃO Y DO FUNDO
    return y;
}

public Image getImagem() {//PARA PEGAR A IMAGEM DO FUNDO
    return imagem;
}

public void keyPressed(KeyEvent tecla){ //PARA RECEBER DADOS DA TECLA DO USUARIO - AO APERTAR

    int aperte_enter = tecla.getKeyCode();

    int codigo = tecla.getKeyCode(); //CODIGO É O NOME DA VARIAVEL DA TECLA QUE O USUARIO DIGITAR

    if(codigo == KeyEvent.VK_LEFT){//SE FOR PRA ESQUERDA

    dx= +1;
    }

    if(codigo == KeyEvent.VK_RIGHT){//SE FOR PRA DIREITA
    dx= -1;
    }

    if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
    enter = 1; // Se aperta enter ele recebe 1       
    } 

}

public void keyReleased(KeyEvent tecla){//PARA RECEBER DADOS DA TECLA DO PERSONAGEM - AO SOLTAR

    int aperte_enter = tecla.getKeyCode();

    int codigo = tecla.getKeyCode();//CODIGO É O NOME DA VARIAVEL DA TECLA QUE O USUARIO DIGITAR

    if(codigo == KeyEvent.VK_LEFT){//SE FOR PRA ESQUERDA
    dx= 0;

    }

    if(codigo == KeyEvent.VK_RIGHT){//SE FOR PRA DIREITA
    dx= 0;
    }

    if (aperte_enter == KeyEvent.VK_ENTER){//Criado para que a caixa com as opções que ficam no tapete apareçam
    enter = 0; // Se aperta enter ele recebe 1       
    }  

    }


}
