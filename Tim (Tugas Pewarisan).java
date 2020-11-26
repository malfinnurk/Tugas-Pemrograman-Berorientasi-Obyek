package pbo3_inheritance;

import java.util.ArrayList;
/**
 *
 * @author MBSCo
 */
public class Tim {
   private String nama;
   private ArrayList<member> member;
   
   //constructor parameter 1
   public Tim (String nama){
       member = new ArrayList<>();
       this.nama = nama;
   }
   //tabah data
   public void addmember(member m){
       member.add(m);
   }
   //list data
   public void displayFullmember(){
       System.out.println ("\n===== Member " + this.nama + " ====");
       for (member m : member){
                m.display();
                System.out.println();
       }
   }
    public void displayTrainee() {
        System.out.println("\n=== Trainee - " + this.nama + "===");
         for (member m: member){
             if(m instanceof Trainee ){
                Trainee trainee = (Trainee) m;
                trainee.display();
                System.out.println();
             }
         }
    }
   }