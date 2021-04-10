
package srcCasa04;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class ObjetivoMesa extends JFrame{
    
    private JLabel conteudo,quanttempero, mesa;
    private JTextField quantidadecarnetemperada;
    private JButton temperar, naotemperar, ok;  
    private int resultado=0;
    
    public ObjetivoMesa(){
        
        setTitle("Temperar Carne"); // Este método setTitle vai permiti que seja criado um titulo para a tela.
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);// Este método é para a janela não fechar.
        setSize(520,310);// Este método vai criar o tamalho da janela, neste caso x=coluna e y=linha, nesta ordem
        mesa = new JLabel(); 
        this.add(mesa);
        setLocationRelativeTo(null);//Este método vai fazer com que a tela fique no centro da tela do pc.     
        setVisible(true);// Este método faz com que a tela apareça.
        setResizable(false);// Este método vai fazer com que o usuario não consiga alterar o tamanho da tela.
        mesa.setLayout( new FlowLayout());// Este comando serve para organizar os dados inseridos na janela
        conteudo = new JLabel("Tempere 7 pedaços de carne.");//Informações que serão colocados na janela
        mesa.add(conteudo);//Adicionando o conteudo na janela  
        
//        conteudo = new JLabel("Lave as mãos 3 vezes.");//Informações que serão colocados na janela
//        Pia.add(conteudo);//Adicionando o conteudo na janela 
       
        temperar = new JButton("Temperar");
        mesa.add(temperar);
        naotemperar = new JButton("Não Temperar");
        mesa.add(naotemperar);
        conteudo = new JLabel("                         ");//Informações que serão colocados na janela
        mesa.add(conteudo);//Adicionando o conteudo na janela  
        quanttempero = new JLabel("Resultado");
        mesa.add(quanttempero);
        quantidadecarnetemperada = new JTextField(10);  
        mesa.add(quantidadecarnetemperada); 
        
        
        conteudo = new JLabel("<html><br>Neste exercício vamos ver a Estrutura de Repetição While.  <br>\n" +
        "<br>\n" +
        "main (){<br>\n" +
        "int carnes=1;    // Variável do tipo Inteiro <br>\n" +
        "while (Condição){   // Enquanto carnes for menor ou igual a 7, faça a instrução abaixo<br>\n" +
        "printf(\"Quantidade de carnes temperada: %d\\n\",carnes);<br>\n" +
        "carnes=carnes+1;<br>\n" +
        "}<br>\n" +
        "}<br>\n<html>");//Informações que serão colocados na janela    
        mesa.add(conteudo);//Adicionando o conteudo na janela  
        conteudo = new JLabel("           ");//Informações que serão colocados na janela
        mesa.add(conteudo);//Adicionando o conteudo na janela         
        ok = new JButton("OK");
        mesa.add(ok);    
      
        EscolhaBotao executar = new EscolhaBotao();
        temperar.addActionListener(executar);
        naotemperar.addActionListener(executar);
        ok.addActionListener(executar);    
    }
    
    private class EscolhaBotao implements ActionListener {
        String s="";
       @Override
    public void actionPerformed( ActionEvent e ){

        DecimalFormat temperoMesa = new DecimalFormat("0");
           
        while (e.getSource()==temperar){
        resultado+=1;
        s=temperoMesa.format(resultado);
        break;
        }        
        while (e.getSource()==naotemperar){
        resultado-=1;
        if(resultado<0){
        resultado=0;    
        }
        s=temperoMesa.format(resultado);
        break;
        }        
        if (resultado==7 && e.getSource()==ok){
        dispose();
        }else
        if (resultado!=7 && e.getSource()==ok){
        new RespostaErrada();      
        
        }            
        quantidadecarnetemperada.setText(s);
        }
    }
    }
