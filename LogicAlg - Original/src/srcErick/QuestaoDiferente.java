
package srcErick;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import srcLeonardoCozinha.RespostaErrada;

public class QuestaoDiferente extends JFrame{
    
    private JLabel conteudo,questaodiferente;
    private JTextField resposta;
    private JButton diferente, igual, ok;   
    private String resultado;

    public QuestaoDiferente(){
        
        setTitle("!="); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(400,340);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        questaodiferente = new JLabel(); 
        this.add(questaodiferente);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        questaodiferente.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("O preço da batata é ");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela  
        resposta = new JTextField(2);
        questaodiferente.add(resposta);         
        conteudo = new JLabel("da cenoura.");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela  
        conteudo = new JLabel("Qual botão eu devo usar neste caso para completar a questão");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela 
        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela  
        questaodiferente.setLayout( new FlowLayout());
        diferente = new JButton("!=  Diferente");
        questaodiferente.add(diferente);
        conteudo = new JLabel("                                        ");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela          
        igual = new JButton("==  Igual");
        questaodiferente.add(igual);
        conteudo = new JLabel("                                        ");//Informações que serão colocados na janela
        questaodiferente.add(conteudo);//Adicionando o conteudo na janela      
        conteudo = new JLabel("<html><br>\n" +
        "Exemplo em C<br>\n" +
        "<br>\n" +                
        "main(){<br>\n" +
        "int Opcao1=0,  Opcao2=2;<br>\n" +
        "if (Opcao1!=Opcao2){<br>\n" +
        "printf(\"As duas variáveis são diferentes\"); <br>	\n" +
        "}else<br>\n" +
        "printf(\"As duas variáveis são iguais\");<br>\n" +
        "}<br><html>");//Informações que serão colocados na janela

        questaodiferente.add(conteudo);//Adicionando o conteudo na janela              
              
        ok = new JButton("OK");
        questaodiferente.add(ok); 
   
        EscolhaBotao executar = new EscolhaBotao();
        diferente.addActionListener(executar);
        igual.addActionListener(executar);
        ok.addActionListener(executar);    
    }

    public JTextField getQuantidadelavagem() {
        return resposta;
    }

    private class EscolhaBotao implements ActionListener {
        String s;
       @Override
    public void actionPerformed( ActionEvent e ){
  
        if  (e.getSource()==diferente){
        resultado="  !=  ";
        s=resultado;

        }        
        if (e.getSource()==igual){
        resultado="  ==  ";
        s=resultado;

        }        
        if (resultado=="  !=  " && e.getSource()==ok){

        dispose();
        } else        
        if (resultado!="  !=  " && e.getSource()==ok){ 
        new RespostaErrada().show();

        }          
        resposta.setText(s);
        }
    }
    }