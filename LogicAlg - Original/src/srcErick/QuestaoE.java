
package srcErick;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import srcLeonardoCozinha.RespostaErrada;

public class QuestaoE extends JFrame{
    
    private JLabel conteudo,questaoe;
    private JTextField resposta;
    private JButton ee, ou, ok;   
    private String resultado;
    
    public QuestaoE(){
        
        setTitle("&&"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(450,360);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        questaoe = new JLabel(); 
        this.add(questaoe);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        questaoe.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Leve duas frutas, leve o morango");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela  
        resposta = new JTextField(2);
        questaoe.add(resposta);         
        conteudo = new JLabel("a laranja.");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela  
        conteudo = new JLabel("Qual botão eu devo usar neste caso para completar a questão?");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela 

        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela     

        questaoe.setLayout( new FlowLayout());
        ee = new JButton("&& = E");
        questaoe.add(ee);
        conteudo = new JLabel("                                                               ");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela         
        ou = new JButton("|| = OU");
        questaoe.add(ou);
        conteudo = new JLabel("                                            ");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela   
        conteudo = new JLabel("<html><br>\n" +
        "Exemplo em C<br>\n" +
        "<br>\n" +
        "main(){<br>\n" +
        "int Opcao1=0,  Opcao2=2;<br>\n" +
        "if (Opcao1==0 && Opcao2==2){<br>\n" +
        "printf(\"Condição Verdadeira\"); <br>	\n" +
        "}else<br>\n" +
        "printf(\"Condição Falsa\");<br>\n" +
        "}<br><html>");//Informações que serão colocados na janela

        questaoe.add(conteudo);//Adicionando o conteudo na janela              
        
        conteudo = new JLabel("                                ");//Informações que serão colocados na janela
        questaoe.add(conteudo);//Adicionando o conteudo na janela            
        
        ok = new JButton("OK");
        questaoe.add(ok); 
   
        EscolhaBotao executar = new EscolhaBotao();
        ee.addActionListener(executar);
        ou.addActionListener(executar);
        ok.addActionListener(executar);    
    }

    public JTextField getQuantidadelavagem() {
        return resposta;
    }

    private class EscolhaBotao implements ActionListener {
        String s;
       @Override
    public void actionPerformed( ActionEvent e ){
     
        if  (e.getSource()==ee){
        resultado="  &&  ";
        s=resultado;
        
        }        
        if (e.getSource()==ou){
        resultado="  ||  ";
        s=resultado;

        }        
        if (resultado=="  &&  " && e.getSource()==ok){

        dispose();
        } else
        if (resultado!="  &&  " && e.getSource()==ok){
        new RespostaErrada().show();
        }         
        resposta.setText(s);
        }
    }
    }