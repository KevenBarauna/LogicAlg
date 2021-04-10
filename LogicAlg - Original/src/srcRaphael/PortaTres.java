
package srcRaphael;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class PortaTres extends JFrame{
    
    private JLabel decisao, conteudo;
    private JButton ok;  

    public PortaTres() {

        
        setTitle("Estrutura de Decisão"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(420,120);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        decisao = new JLabel(); 
        this.add(decisao);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        decisao.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("                             ");//Informações que serão colocados na janela
        decisao.add(conteudo);//Adicionando o conteudo na janela          
        conteudo = new JLabel("Parabéns você acertou, 1,0 – 5,6 – 1,01 são números Reais==Float :)");
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
        new ConclusaoPortas().show();
        dispose();
        }          

        }
    }
    
  
}