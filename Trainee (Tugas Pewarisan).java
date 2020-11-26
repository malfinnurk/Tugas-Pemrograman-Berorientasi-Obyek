package pbo3_inheritance;

/**
 *
 * @author MBSCo
 */
public class Trainee extends member {
        private int lamaTraining;
    
    public Trainee(String nama, int umur,  int lamaTraining){
        super(nama, umur);
        this.lamaTraining = lamaTraining;
    }
    
    @Override  
    public void  display (){
        super.display();
        System.out.println("lama training (Bulan) : " + this.lamaTraining);
    }
}