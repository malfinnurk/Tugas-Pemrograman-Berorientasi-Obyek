package pbo3_inheritance;

/**
 *
 * @author MBSCo
 */
public class member {
    protected String nama;
    protected int umur;
 
    public member(String nama,int umur){
        this.nama = nama;
        this.umur = umur;
    }
    
    public void display(){
        System.out.println("Nama : " + this.nama);
        System.out.println("Umur : " + this.umur);
    }
}