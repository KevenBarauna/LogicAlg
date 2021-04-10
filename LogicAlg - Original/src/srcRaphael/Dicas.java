
package srcRaphael;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Dicas extends JFrame{
    
    private JLabel decisao, conteudo;
    private JButton ok;  

    public Dicas() {

        
        setTitle("Dicas sobre Variáveis"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(500,400);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        decisao = new JLabel(); 
        this.add(decisao);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        decisao.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        
        conteudo = new JLabel("<html><br>\n" +
        "Variáveis: É o espaço de armazenamento que contêm dados, estes dados podem<br>\n" +
        "ser modificados assumindo qualquer outro valor. <br>\n" +
        "<br>\n" +                
        "Tipos:<br>\n" +
        "<br>\n" +
        "CHAR == Representa uma sequência de um ou mais caracteres como Letras,<br>\n" +
        "números e Símbolos: a, b c, d, e, f , #, *, &, 1, 2. *Os números não podem ser<br>\n" +
        "usados para cálculos;<br>\n" +
        "<br>\n" +       
        "INT == Representa números inteiros positivos ou negativos. Ex.: 1, -2, 3, -4;<br>\n" +     
        "<br>\n" +     
        "FLOAT == Representa números decimais. Ex.: 1,5 -  2,01 - 3,4 – 1,001;<br>\n" +   
        "<br>\n" +   
        "Double == Também representa números decimais, mas o double é usado para <br>\n" +   
        "ter uma maior precisão nos dados. Ex.: 1,50616465 -  PI= 3.14159265359;<br>\n" +   
        "<br>\n" +   
        "Boolean == Representa dois valores 0 = Falso/False e 1 = Verdadeiro/True<br>"+
        "<br><html>");
        decisao.add(conteudo);//Adicionando o conteudo na janela           

        
        ok = new JButton("OK");
        decisao.add(ok);    
    
        EscolhaBotao executar = new EscolhaBotao();

        ok.addActionListener(executar);    
    }
    

    private class EscolhaBotao implements ActionListener {
        int resultado=0;

        @Override
    public void actionPerformed( ActionEvent e ){

        if (e.getSource()==ok){
        dispose();
        }          

        }
    }
    
  
}