/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package com.mycompany.librarysystem_jz;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import javax.swing.DefaultListModel;
import javax.swing.JOptionPane;

/**
 *
 * @author JohnAbrahmAZapico
 */
public class book_jz extends javax.swing.JFrame {

    /**
     * Creates new form book_jz
     */
    public book_jz() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        bl = new javax.swing.JList<>();
        jDesktopPane1 = new javax.swing.JDesktopPane();
        jLabel1 = new javax.swing.JLabel();
        btxt = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        fnametxt = new javax.swing.JTextField();
        dptxt = new javax.swing.JTextField();
        cntxt = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        sbtn = new javax.swing.JButton();
        lnametxt = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        cbtn = new javax.swing.JButton();
        update = new javax.swing.JButton();
        jMenuBar1 = new javax.swing.JMenuBar();
        bbutton = new javax.swing.JMenu();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowOpened(java.awt.event.WindowEvent evt) {
                formWindowOpened(evt);
            }
        });

        bl.addListSelectionListener(new javax.swing.event.ListSelectionListener() {
            public void valueChanged(javax.swing.event.ListSelectionEvent evt) {
                blValueChanged(evt);
            }
        });
        jScrollPane1.setViewportView(bl);

        jLabel1.setText("BOOK LIST ");

        jDesktopPane1.setLayer(jLabel1, javax.swing.JLayeredPane.DEFAULT_LAYER);

        javax.swing.GroupLayout jDesktopPane1Layout = new javax.swing.GroupLayout(jDesktopPane1);
        jDesktopPane1.setLayout(jDesktopPane1Layout);
        jDesktopPane1Layout.setHorizontalGroup(
            jDesktopPane1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jDesktopPane1Layout.createSequentialGroup()
                .addContainerGap(20, Short.MAX_VALUE)
                .addComponent(jLabel1)
                .addGap(16, 16, 16))
        );
        jDesktopPane1Layout.setVerticalGroup(
            jDesktopPane1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jDesktopPane1Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel1)
                .addContainerGap())
        );

        jLabel2.setText("Enter book title here: ");

        jLabel3.setText("Author");

        dptxt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                dptxtActionPerformed(evt);
            }
        });

        cntxt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cntxtActionPerformed(evt);
            }
        });

        jLabel4.setText("Date of Publication: ");

        jLabel5.setText("Call Number: ");

        sbtn.setFont(new java.awt.Font("BankGothic Md BT", 0, 12)); // NOI18N
        sbtn.setText("save");
        sbtn.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        sbtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                sbtnActionPerformed(evt);
            }
        });

        jLabel6.setText("First Name: ");

        jLabel7.setText("Last Name: ");

        cbtn.setFont(new java.awt.Font("BankGothic Md BT", 1, 12)); // NOI18N
        cbtn.setText("Clear");
        cbtn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cbtnActionPerformed(evt);
            }
        });

        update.setFont(new java.awt.Font("Yu Gothic Light", 1, 12)); // NOI18N
        update.setText("update");
        update.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                updateActionPerformed(evt);
            }
        });

        bbutton.setText("back ");
        bbutton.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bbuttonMouseClicked(evt);
            }
        });
        jMenuBar1.add(bbutton);

        setJMenuBar(jMenuBar1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(47, 47, 47)
                        .addComponent(jLabel6)
                        .addGap(74, 74, 74)
                        .addComponent(jLabel7))
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel4)
                            .addComponent(dptxt, javax.swing.GroupLayout.PREFERRED_SIZE, 132, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel5)
                            .addComponent(cntxt, javax.swing.GroupLayout.PREFERRED_SIZE, 132, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(48, 48, 48)
                        .addComponent(sbtn, javax.swing.GroupLayout.PREFERRED_SIZE, 64, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(update)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cbtn, javax.swing.GroupLayout.PREFERRED_SIZE, 107, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(16, 16, 16)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel2)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(btxt, javax.swing.GroupLayout.PREFERRED_SIZE, 132, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(jLabel3))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(fnametxt, javax.swing.GroupLayout.PREFERRED_SIZE, 134, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(lnametxt, javax.swing.GroupLayout.PREFERRED_SIZE, 108, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 28, Short.MAX_VALUE)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 201, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap(21, Short.MAX_VALUE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jDesktopPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(76, 76, 76))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(17, 17, 17)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(btxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel3)))
                    .addComponent(jDesktopPane1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jScrollPane1)
                        .addGap(48, 48, 48))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel7, javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(jLabel6))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(fnametxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(lnametxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jLabel4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(dptxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jLabel5)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(cntxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 45, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(sbtn, javax.swing.GroupLayout.PREFERRED_SIZE, 51, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(update, javax.swing.GroupLayout.PREFERRED_SIZE, 53, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(cbtn, javax.swing.GroupLayout.PREFERRED_SIZE, 53, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(23, 23, 23))))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void bbuttonMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bbuttonMouseClicked

        // so thisis to set the dashboard to visible 
       dashboard_jz db = new dashboard_jz();
       this.setVisible(false);
       db.setVisible(true);
    }//GEN-LAST:event_bbuttonMouseClicked
    private void clearForm(){
        btxt.setText("");
        lnametxt.setText("");
        fnametxt.setText("");
        dptxt.setText("");
        cntxt.setText("");
    }
    private void FreezeForm(){
        //  THIS IS TO FREEZE THE FORM SO THAT IT WON;T BE EDITED
        btxt.setEditable(false);
        lnametxt.setEditable(false);
        fnametxt.setEditable(false);
        dptxt.setEditable(false);
        cntxt.setEditable(false);
    }
    private void edit(){
        btxt.setEditable(true);
        lnametxt.setEditable(true);
        fnametxt.setEditable(true);
        dptxt.setEditable(true);
        cntxt.setEditable(true);
    }
    private void sbtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_sbtnActionPerformed
           String jz_btitle = btxt.getText();
           String jz_authorlast= lnametxt.getText();
           String jz_authorFirst= fnametxt.getText();
           String jz_publish = dptxt.getText();
           String jz_callnum = cntxt.getText();
           
           try{
               FileWriter save  = new FileWriter("book.txt",  true );
               save.write(jz_btitle+ ";"+jz_authorlast+";"+jz_authorFirst+";"+jz_publish+";"+jz_callnum +"\n");
               save.close();
               clearForm();
               jz_updateList();
               
           }catch (IOException e){
               e.printStackTrace();
           }
           JOptionPane.showMessageDialog(null, "book record have been saved");
           
        // TODO add your handling code here:
    }//GEN-LAST:event_sbtnActionPerformed

    private void cbtnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cbtnActionPerformed
        clearForm();
    }//GEN-LAST:event_cbtnActionPerformed

    private void blValueChanged(javax.swing.event.ListSelectionEvent evt) {//GEN-FIRST:event_blValueChanged
        String book = bl.getSelectedValue();
        JOptionPane.showMessageDialog(null, ""+ book);
        String [] bookDetails = book.split(";");
        btxt.setText(bookDetails [0] );
        fnametxt.setText(bookDetails [1] );
        lnametxt.setText(bookDetails [2] );
        dptxt.setText(bookDetails [3] );
        cntxt.setText(bookDetails [4] );
        
        sbtn.setEnabled(false);
        
    }//GEN-LAST:event_blValueChanged

    private void formWindowOpened(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowOpened
        // TODO add your handling code here:
        JOptionPane.showMessageDialog(null,"Add Book");
        jz_updateList();
    }//GEN-LAST:event_formWindowOpened

    private void updateActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_updateActionPerformed
        // TODO add your handling code here:
        edit();
            // ARRAY LISST FOR TH DATA INPUT 
        ArrayList<String> datainput = new ArrayList();
        // THE DATA IN THE TEXT FIELD ARE RETIVED HERE AND IS STORED TO ANOTHER VARAIBLE TO ADD IT INTO THE ARRAY
         String jz_bname = btxt.getText();
         String jz_Fname = fnametxt.getText();
         String jz_Lname = lnametxt.getText();
         String jz_dpdate = dptxt.getText();
         String jz_cn = cntxt.getText();
         String BookValue = jz_bname+"; "+jz_Fname+"; "+jz_Lname+"; "+jz_dpdate+"; "+jz_cn;
        try{
            // fILE READEAR IS INSTANTIATED TO READ THE FILE
            // AND THE BUFFDER READER BELOW IS USED TO READ THE FILE LINE BY LINE THAT WAS STORED IN THE ARRAYLIST
            FileReader jz_fr =new FileReader("book.txt");
            BufferedReader jz_br = new BufferedReader(jz_fr);
            String line;
            while((line=jz_br.readLine())!=null){
                datainput.add(line);
            }
            int jz_dataIndex = bl.getSelectedIndex();
            if(jz_dataIndex != -1){
                datainput.set(jz_dataIndex,BookValue);
            }
            
        }catch(IOException e){
            e.printStackTrace();
        }
        replace();
        try(FileWriter jz_saveUpdate = new FileWriter("book.txt"); ){
            
            for(String dataItem : datainput){
                jz_saveUpdate.write(dataItem + "\n");
            }
            jz_saveUpdate.close();
        }catch(IOException e){
            e.printStackTrace();
        }
         jz_updateList();
        bl.clearSelection ();
       
        
       
        
        
    }//GEN-LAST:event_updateActionPerformed

    private void dptxtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_dptxtActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_dptxtActionPerformed

    private void cntxtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cntxtActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_cntxtActionPerformed
    
    private void replace(){
        try{
        FileWriter replace =new FileWriter("book.txt");
        replace.write("");
        replace.close();
        }catch(IOException e){
            e.printStackTrace();
        }
    }
    private void ClearActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ClearActionPerformed
       clearForm();
    }//GEN-LAST:event_ClearActionPerformed

  
    private void jz_updateList(){
        JOptionPane.showMessageDialog(null,"Add Book");
        DefaultListModel<String> list = new DefaultListModel<>();
        list.clear();
        
        
        try{
            FileReader fr =new FileReader("book.txt");
            BufferedReader br = new BufferedReader(fr);
            String line;
            while((line=br.readLine())!=null){
                list.addElement(line);
            }
            bl.setModel(list);
            
        }catch(IOException e){
            e.printStackTrace();
        }
        
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(book_jz.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(book_jz.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(book_jz.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(book_jz.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new book_jz().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenu bbutton;
    private javax.swing.JList<String> bl;
    private javax.swing.JTextField btxt;
    private javax.swing.JButton cbtn;
    private javax.swing.JTextField cntxt;
    private javax.swing.JTextField dptxt;
    private javax.swing.JTextField fnametxt;
    private javax.swing.JDesktopPane jDesktopPane1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField lnametxt;
    private javax.swing.JButton sbtn;
    private javax.swing.JButton update;
    // End of variables declaration//GEN-END:variables
}
