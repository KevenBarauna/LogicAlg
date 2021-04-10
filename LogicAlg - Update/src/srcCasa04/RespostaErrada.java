
package srcCasa04;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class RespostaErrada extends JFrame{
    
    private JLabel resposta;
    private JButton ok;  

    public RespostaErrada() {

        setTitle("Resposta Errada");//Criar o Titulo
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método permite fechar apenas esta janela aberta, não encerra o codigo
        setSize(200,100);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        resposta = new JLabel();
        this.add(resposta);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.        
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        resposta.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        JLabel  conteudo = new JLabel("Resposta Errada :("); //Informações que serão colocados na janela
        resposta.add(conteudo);//Adicionando o conteudo na janela
 
        ok = new JButton("Tente novamente :)");
        resposta.add(ok);
         
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

