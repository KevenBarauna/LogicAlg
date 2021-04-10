
package srcLeonardoLabirinto;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class DecissaoEouF extends JFrame{
    
    private JLabel decisao, conteudo;
    private JButton ok;  

    public DecissaoEouF() {

        setTitle("Estrutura de Decisão"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(500,220);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        decisao = new JLabel(); 
        this.add(decisao);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        decisao.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("<html><br>Se você escolher o caminho F, então você<br>\n" +
        "chegou ao seu destino PARABÉNS :)<br>\n" +
        "<br>\n" +
        "if(escolha=='F'){<br>\n" +
        "printf (''PARABÉNS :)'');<br>\n" +
        "}else<br>\n" +
        "if(escolha!='E'){<br>\n" +                      
        "printf(\"Caminho Errado\");<br>\n" +
        "}<br>\n<html>"); 
        decisao.add(conteudo);//Adicionando o conteudo na janela 
        conteudo = new JLabel("             ");//Informações que serão colocados na janela
        decisao.add(conteudo);//Adicionando o conteudo na janela  
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