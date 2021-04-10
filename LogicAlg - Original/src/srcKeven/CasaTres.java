package srcKeven;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import srcLeonardoLabirinto.JanelaLabLeonardo;


public class CasaTres extends JFrame {

private JButton desicao;

public CasaTres() {
    JMenuBar barramenu = new JMenuBar();
    JMenu menu = new JMenu("Menu");

    JMenuItem desenvolvedores = new  JMenuItem("Desenvolvedores");
    desenvolvedores.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent ae) {
    JOptionPane.showMessageDialog(null,"LogicAlg - Projeto desenvolvido por Leonardo dos Santos Esteves - Keven Pacheco Baraúna - Raphael Carvalho Monteiro - Erick Vinicius Pinto dos Santos", "Iinformações", JOptionPane.INFORMATION_MESSAGE);
    }});        

    JMenuItem sair = new  JMenuItem("Sair do Programa");
    sair.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent ae) {
    System.exit(0);
    }});    
    menu.add(desenvolvedores);
    menu.add(sair);
    barramenu.add(menu);
    setJMenuBar(barramenu);     

    Icon Pegar_Imagem = new ImageIcon("src\\ImagensKeven\\ESTRUTURA DE DECISAO.png");
    desicao = new JButton(Pegar_Imagem);
    add(desicao);
    setTitle("Instruções");
    setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
    setSize(1285,775);
    setLocationRelativeTo(null);
    setVisible(true);
    setResizable(false);
    CasaTres.EscolhaBotao executar = new CasaTres.EscolhaBotao();
    desicao.addActionListener(executar);   

}


private class EscolhaBotao implements ActionListener {
    int resultado=0;
    String s="";
    @Override
    public void actionPerformed( ActionEvent e ){

    if (e.getSource()==desicao){
    new JanelaLabLeonardo();        
    dispose();
    }          
    }
    }
}
