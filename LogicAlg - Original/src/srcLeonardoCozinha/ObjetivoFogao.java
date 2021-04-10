
package srcLeonardoCozinha;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class ObjetivoFogao extends JFrame{
    
    private JLabel conteudo,quantfrita, fogao;
    private JTextField quantidadecarnefrita;
    private JButton fritar, naofritar, ok;    
    private int resultado=0;
    
    public ObjetivoFogao(){
        
        setTitle("Fritar carne"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(500,280);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        fogao = new JLabel(); 
        this.add(fogao);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        fogao.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Frite 5 pedaços de carnes");//Informações que serão colocados na janela
        fogao.add(conteudo);//Adicionando o conteudo na janela        

        fritar = new JButton("Fritar Carne");
        fogao.add(fritar);
        naofritar = new JButton("Queimou, jogue no lixo");
        fogao.add(naofritar);
        conteudo = new JLabel("                             ");//Informações que serão colocados na janela
        fogao.add(conteudo);//Adicionando o conteudo na janela  
        quantfrita = new JLabel("Resultado");
        fogao.add(quantfrita);
        quantidadecarnefrita = new JTextField(10);  
        fogao.add(quantidadecarnefrita);  
        
        conteudo = new JLabel("<html>Neste exercício vamos ver a Estrutura de Repetição FOR.  <br>\n" +
        "<br>\n" +
        "main (){<br>\n" +
        "int mexer=1; // Variável do tipo Inteiro <br>\n" +
        "for(Condição Inicial; Condição Final; Incrementação){<br>\n" +
        "printf(\"Quantidade de carnes frita: %d\\n\",mexer); <br>	\n" +
        "}<br>\n" +
        "}<br><html>");//Informações que serão colocados na janela
        fogao.add(conteudo);//Adicionando o conteudo na janela           
        conteudo = new JLabel("                                        ");//Informações que serão colocados na janela
        fogao.add(conteudo);//Adicionando o conteudo na janela       
        
        
        ok = new JButton("OK");
        fogao.add(ok);    
    
        EscolhaBotao executar = new EscolhaBotao();
        fritar.addActionListener(executar);
        naofritar.addActionListener(executar);
        ok.addActionListener(executar);    
    }
    
    private class EscolhaBotao implements ActionListener {
        
        String s="";
       @Override
    public void actionPerformed( ActionEvent e ){

        DecimalFormat carneFogao = new DecimalFormat("0");
           
        while (e.getSource()==fritar){
        resultado+=1;
        s=carneFogao.format(resultado);
        break;
        }        
        while (e.getSource()==naofritar){
        resultado-=1;
        if(resultado<0){
        resultado=0;    
        }
        s=carneFogao.format(resultado);
        break;
        }        
        if (resultado==5 && e.getSource()==ok){
        new ReceitaPronta();
        dispose();
        }else
        if (resultado!=5 && e.getSource()==ok){
        new RespostaErrada();
        
        }     
        quantidadecarnefrita.setText(s);
        }
    }
    }
