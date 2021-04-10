//CONFIGURAÇÃO DA JANELA QUE IRA ABRIR QUANDO EXECUTAR O PROGRAMA
package srcKeven;//NOME DO PACOTE ONDE ESTA A CLASSE

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

public class ConfJanela extends JFrame {//CLASSE EXTENDIDA DO Jframe UM ????? PARA CRIAR CENARIOS

public ConfJanela(){//CONSTRUTOR DA CLASSE

    JMenuBar barramenu = new JMenuBar();
    JMenu menu = new JMenu("Menu");
    JMenuItem sobre = new  JMenuItem("Sobre");
    sobre.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent ae) {
    JOptionPane.showMessageDialog(null,"LogicAlg - Esta etapa do projeto foi desenvolvida por Keven Pacheco Baraúna", "Informações", JOptionPane.INFORMATION_MESSAGE);
    }
    });
    JMenuItem desenvolvedores = new  JMenuItem("Desenvolvedores");
    desenvolvedores.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent ae) {
    JOptionPane.showMessageDialog(null,"LogicAlg - Projeto desenvolvido por Leonardo dos Santos Esteves - Keven Pacheco Baraúna - Raphael Carvalho Monteiro - Erick Vinicius Pinto dos Santos", "Iinformações", JOptionPane.INFORMATION_MESSAGE);
    }
    });        

    JMenuItem sair = new  JMenuItem("Sair do Programa");
    sair.addActionListener(new ActionListener() {
    @Override
    public void actionPerformed(ActionEvent ae) {
    System.exit(0);
    }
    });    
    menu.add(sobre);
    menu.add(desenvolvedores);
    menu.add(sair);
    barramenu.add(menu);
    setJMenuBar(barramenu);   
    
    
    
    add(new Fase());//CRIANDO UMA NOVA FASE - A PARTIR DE "src.Fase.java"

    //CRIANDO UMA NOVA JANELA

    setTitle("Mapa Principal");// TITULO DA JANELA
    setSize(1285, 775);//TAMANHO DA JANELA
    setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);//FECHAR PROGRAMA QUANDO APERTAR NO "X"
    setLocationRelativeTo(null);//A JANELA ABRIR NO CENTRO NA TELA
    setResizable(false);//NÃO ALTERAR O TAMANHO DA JANELA 
    setVisible(true);//APARECER A TELA    
    }   
}
