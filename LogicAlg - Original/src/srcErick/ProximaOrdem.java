
package srcErick;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class ProximaOrdem extends JFrame{
    
    private JLabel exerciciorealizado;
    private JButton ok;  

    public ProximaOrdem() {

        setTitle("Próxima Venda");//Criar o Titulo
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método permite fechar apenas esta janela aberta, não encerra o codigo
        setSize(500,90);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        exerciciorealizado = new JLabel();
        this.add(exerciciorealizado);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.        
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        exerciciorealizado.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        JLabel  conteudo = new JLabel("Acesse a próxima venda :)"); //Informações que serão colocados na janela
        exerciciorealizado.add(conteudo);//Adicionando o conteudo na janela
 
        ok = new JButton("OK");
        exerciciorealizado.add(ok);
         
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

