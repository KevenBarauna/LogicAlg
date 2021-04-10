
package srcCasaNova01;

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
        "&& E (\"logical AND\") a && b<br>\n" +
        "retorna true se a e b forem ambos true. Senão retorna false. Se a for false, b não é avaliada. <br>\n" +
        "<br>\n" +                
        "||	OU (\"logical OR\") a || b <br>\n" +
        "retorna true se a ou b for true. Senão retorna false. Se a for true, b não é avaliada.<br>\n" +
        "<br>\n" +
        "!	NÃO (\"logical NOT\") !a <br>\n" +
        "retorna true se a for false. Senão retorna false<br>\n" );
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
        new BotaoDicas().show();
        dispose();
        }          

        }
    }
    
  
}