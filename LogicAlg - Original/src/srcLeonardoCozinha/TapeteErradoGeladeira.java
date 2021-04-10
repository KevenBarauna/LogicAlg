
package srcLeonardoCozinha;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class TapeteErradoGeladeira extends JFrame{
    
    private JLabel tapete_errado;
    private JButton ok;  

    public TapeteErradoGeladeira() {

        setTitle("Tapete Errado");//Criar o Titulo
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método permite fechar apenas esta janela aberta, não encerra o codigo
        setSize(500,90);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        tapete_errado = new JLabel();
        this.add(tapete_errado);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.        
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        tapete_errado.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
    
        JLabel  conteudo = new JLabel("Pegue a carne na geladeira."); //Informações que serão colocados na janela
        tapete_errado.add(conteudo);//Adicionando o conteudo na janela
 
        ok = new JButton("OK");
        tapete_errado.add(ok);
         
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

