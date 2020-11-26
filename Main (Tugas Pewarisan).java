package pbo3_inheritance;

/**
 *
 * @author MBSCo
 */
public class main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Tim clavicula = new Tim("clavicula");
        
        //deklarasi member 
        member orang_1 = new member("Alfin", 19);
        member orang_2 = new member ("Afida", 20);
        member orang_3 = new member ("Kevin" , 21);
        
        //deklarasi trainee
        member orang_4 = new Trainer ("Farid",17, 7);
        member orang_5 = new Trainer ("Wulan",23, 6);
        member orang_6 = new Trainer ("Vika",24, 11);
        
        //menambahkan data 
        clavicula.addmember(orang_1);
        clavicula.addmember(orang_2);
        clavicula.addmember(orang_3);
        clavicula.addmember(orang_4);
        clavicula.addmember(orang_5);
        clavicula.addmember(orang_6);
        
        //output
        clavicula.displayFullmember();
        clavicula.displayTrainee();
    }
    
}