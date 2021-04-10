
package srcErick;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import srcLeonardoCozinha.RespostaErrada;

public class QuestaoMaiorMenor extends JFrame{
    
    private JLabel conteudo, questaomaiormenor;
    private JTextField resposta;
    private JButton maior, menor, ok;   
    private String resultado;
    
    
    public QuestaoMaiorMenor(){
        
        setTitle("<>"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(400,340);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        questaomaiormenor = new JLabel(); 
        this.add(questaomaiormenor);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        questaomaiormenor.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Este melão é ");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela  
        resposta = new JTextField(2);
        questaomaiormenor.add(resposta);         
        conteudo = new JLabel("que o melancia.");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela  
        conteudo = new JLabel("Qual botão eu devo usar neste caso para completar a questão?");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela 
        conteudo = new JLabel("<html><br><html>");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela  
        
        questaomaiormenor.setLayout( new FlowLayout());
        maior = new JButton(">  Maior");
        questaomaiormenor.add(maior); 
        conteudo = new JLabel("                                                         ");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela          
        menor = new JButton("<  Menor");
        questaomaiormenor.add(menor);
        
        conteudo = new JLabel("                                    ");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela      
        conteudo = new JLabel("<html><br>\n" +
        "Exemplo em C<br>\n" +
        "<br>\n" +                
        "main(){<br>\n" +
        "int Opcao1=0,  Opcao2=2;<br>\n" +
        "if (Opcao1>Opcao2){<br>\n" +
        "printf(\"Opção 1 é maior que Opção 2\"); <br>	\n" +
        "}else<br>\n" +
        "printf(\"Opção 1 é menor que Opção 2\");<br>\n" +
        "}<br><html>");//Informações que serão colocados na janela

        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela              
        
        conteudo = new JLabel("       ");//Informações que serão colocados na janela
        questaomaiormenor.add(conteudo);//Adicionando o conteudo na janela         
        
        ok = new JButton("OK");
        questaomaiormenor.add(ok); 
   
        EscolhaBotao executar = new EscolhaBotao();
        maior.addActionListener(executar);
        menor.addActionListener(executar);
        ok.addActionListener(executar);    
    }

    public JTextField getQuantidadelavagem() {
        return resposta;
    }

    private class EscolhaBotao implements ActionListener {
        String s;
       @Override
    public void actionPerformed( ActionEvent e ){


           
        if  (e.getSource()==maior){
        resultado="  >  ";
        s=resultado;

        }        
        if (e.getSource()==menor){
        resultado="  <  ";
        s=resultado;

        }        
        if (resultado=="  <  " && e.getSource()==ok){
        new FeiraConcluida().show();    
        dispose();
        }else
        if (resultado!="  <  " && e.getSource()==ok){
        new RespostaErrada().show();
        }             
        resposta.setText(s);
        }
    }
    }