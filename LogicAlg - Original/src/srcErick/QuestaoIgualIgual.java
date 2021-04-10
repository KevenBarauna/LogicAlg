
package srcErick;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import srcLeonardoCozinha.RespostaErrada;

public class QuestaoIgualIgual extends JFrame{
    
    private JLabel conteudo, questaoigual;
    private JTextField resposta;
    private JButton igual, diferente, ok;   
    private String resultado;
    
    public QuestaoIgualIgual(){
        
        setTitle("=="); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(420,340);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        questaoigual = new JLabel(); 
        this.add(questaoigual);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        questaoigual.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("O preço dessa banana é ");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela  
        resposta = new JTextField(2);
        questaoigual.add(resposta);         
        conteudo = new JLabel("ao preço da manga.");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela  
        conteudo = new JLabel("Qual botão eu devo usar neste caso para completar a questão?");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela 

        questaoigual.setLayout( new FlowLayout());
        igual = new JButton("== Igual");
        questaoigual.add(igual);
        conteudo = new JLabel("                                                   ");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela 
        diferente = new JButton("!= Diferente");
        questaoigual.add(diferente);
        
        conteudo = new JLabel("                                         ");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela 
     
        conteudo = new JLabel("<html><br>\n" +
        "Exemplo em C<br>\n" +        
        "<br>\n" +
        "main(){<br>\n" +
        "int Opcao1=1,  Opcao2=1;<br>\n" +
        "if (Opcao1==Opcao2){<br>\n" +
        "printf(\"As variáveis são iguais\"); <br>	\n" +
        "}else<br>\n" +
        "printf(\"As variáveis são diferentes\");<br>\n" +
        "}<br><html>");//Informações que serão colocados na janela

        questaoigual.add(conteudo);//Adicionando o conteudo na janela              
         conteudo = new JLabel("              ");//Informações que serão colocados na janela
        questaoigual.add(conteudo);//Adicionando o conteudo na janela        

        ok = new JButton("OK");
        questaoigual.add(ok); 
   
        EscolhaBotao executar = new EscolhaBotao();
        igual.addActionListener(executar);
        diferente.addActionListener(executar);
        ok.addActionListener(executar);     
    }

    public JTextField getQuantidadelavagem() {
        return resposta;
    }

    private class EscolhaBotao implements ActionListener {
        String s;
       @Override
    public void actionPerformed( ActionEvent e ){

        if  (e.getSource()==igual){
        resultado="  ==  ";
        s=resultado;

        }        
        if (e.getSource()==diferente){
        resultado="  !=  ";
        s=resultado;

        }        
        if (resultado=="  ==  " && e.getSource()==ok){

        dispose();
        } else
        if (resultado!="  ==  " && e.getSource()==ok){
        new RespostaErrada().show();
        }           
        resposta.setText(s);
        }
    }
    }

