
package srcCasa04;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class ObjetivoPia extends JFrame{
    
    private JLabel conteudo,quantlavagem, pia;
    private JTextField quantidadelavagem;
    private JButton lavar, diminuir, ok;   
    private int resultado=0;
    
    public ObjetivoPia(){
        
        setTitle("Lave as mãos 3 vezes"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(450,400);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        pia = new JLabel(); 
        this.add(pia);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        pia.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Lavem as mãos antes de preparar um alimento.");//Informações que serão colocados na janela
        pia.add(conteudo);//Adicionando o conteudo na janela        
        conteudo = new JLabel("Lave as mãos 3 vezes.");//Informações que serão colocados na janela
        pia.add(conteudo);//Adicionando o conteudo na janela 

        pia.setLayout( new FlowLayout());
        lavar = new JButton("Lavar");
        pia.add(lavar);
        diminuir = new JButton("Desfazer Lavagem");
        pia.add(diminuir);
        quantlavagem = new JLabel("Resultado");
        pia.add(quantlavagem);
        quantidadelavagem = new JTextField(2);
        pia.add(quantidadelavagem);       

        conteudo = new JLabel("<html><br>Neste exercício vamos ensinar 3 estruturas de repetição. <br>\n" +
        "<br>\n" +        
        "Do // Do==fazer<br>\n" +
        "{<br>\n" +
        "Instruções; <br>\n" +
        "}while (condição); //While==Enquanto<br>\n" +
        "<br>\n" +
        "while (condição)//While==Enquanto<br>\n" +
        "{<br>\n" +
        "Instruções; <br>\n" +
        "}<br>\n" +
        "<br>\n" +
        "for(1ª Condição; 2ª Condição; Incrementação)//For==Para<br>\n" +
        "{<br>\n" +
        "Instruções; <br>\n" +
        "}<br></html>");//Informações que serão colocados na janela
        pia.add(conteudo);//Adicionando o conteudo na janela         
        conteudo = new JLabel("                     ");//Informações que serão colocados na janela
        pia.add(conteudo);//Adicionando o conteudo na janela        
        ok = new JButton("OK");
        pia.add(ok); 
   
        EscolhaBotao executar = new EscolhaBotao();
        lavar.addActionListener(executar);
        diminuir.addActionListener(executar);
        ok.addActionListener(executar);    
    }

    public JTextField getQuantidadelavagem() {
        return quantidadelavagem;
    }

    private class EscolhaBotao implements ActionListener {
        String s="";
       @Override
    public void actionPerformed( ActionEvent e ){

        DecimalFormat higienePia = new DecimalFormat("0");
           
        while (e.getSource()==lavar){
        resultado+=1;
        s=higienePia.format(resultado);
        break;
        }        
        while (e.getSource()==diminuir){
        resultado-=1;
        if(resultado<0){
        resultado=0;    
        }
        s=higienePia.format(resultado);
        break;
        }        
        if (resultado==3 && e.getSource()==ok){

        dispose();
        } else
        if (resultado!=3 && e.getSource()==ok){
        new RespostaErrada();        
        
        }             
        quantidadelavagem.setText(s);
        }
    }
    }