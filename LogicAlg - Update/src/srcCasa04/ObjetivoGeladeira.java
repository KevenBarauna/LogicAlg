
package srcCasa04;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class ObjetivoGeladeira extends JFrame{
    
    private JLabel conteudo,quantcarne, geladeira;
    private JTextField quantidadecarne;
    private JButton pegar, guardar, ok; 
    private int resultado=0;
    
    public ObjetivoGeladeira(){
        
        setTitle("Pegue a Carne"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(400,310);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        geladeira = new JLabel(); 
        this.add(geladeira);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        geladeira.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Pegue 8 pedaços de carne.");//Informações que serão colocados na janela
        geladeira.add(conteudo);//Adicionando o conteudo na janela        

       
        pegar = new JButton("Pegar Carne");
        geladeira.add(pegar);
        guardar = new JButton("Guarda Carne");
        geladeira.add(guardar);
        quantcarne = new JLabel("          ");//Informações que serão colocados na janela
        geladeira.add(quantcarne);//Adicionando o conteudo na janela         
        quantcarne = new JLabel("Resultado");
        geladeira.add(quantcarne);
        quantidadecarne = new JTextField(5);  
        geladeira.add(quantidadecarne);     
//                quantcarne = new JLabel("                                      ");//Informações que serão colocados na janela
//        geladeira.add(quantcarne);//Adicionando o conteudo na janela 
        
        
        quantcarne = new JLabel("<html><br>Neste exercício vamos ver a Estrutura de Repetição Do/While.<br>\n" +
        "<br>\n" +
        "main (){<br>\n" +
        "	int carnes=1;    // Variável do tipo Inteiro <br>\n" +
        "	do    //Faça a instrução abaixo<br>\n" +
        "	{<br>\n" +
        "	printf(\"Quantidade de carnes: %d\\n\",carnes); <br>\n" +
        "	carnes=carnes+1; <br>\n" +
        "	}while (Condição);    // Enquanto carnes for menor ou igual a 8<br>\n" +
        "	}<br><html>");
        geladeira.add(quantcarne);
        quantcarne = new JLabel("          ");//Informações que serão colocados na janela
        geladeira.add(quantcarne);//Adicionando o conteudo na janela         
        
        
        ok = new JButton("OK");
        geladeira.add(ok);          
        EscolhaBotao executar = new EscolhaBotao();
        pegar.addActionListener(executar);
        guardar.addActionListener(executar);
        ok.addActionListener(executar);    
    }
    
    private class EscolhaBotao implements ActionListener {
        String s="";
       @Override
    public void actionPerformed( ActionEvent e ){

        DecimalFormat carnesGeladeira = new DecimalFormat("0");
           
        while (e.getSource()==pegar){
        resultado+=1;
        s=carnesGeladeira.format(resultado);
        break;
        }        
        while (e.getSource()==guardar){
        resultado-=1;
        if(resultado<0){
        resultado=0;    
        }
        s=carnesGeladeira.format(resultado);
        break;
        }        
        if (resultado==8 && e.getSource()==ok){
        dispose();
        }else
        if (resultado!=8 && e.getSource()==ok){
        new RespostaErrada();    
        
        }    
        quantidadecarne.setText(s);
        }
    }
    }