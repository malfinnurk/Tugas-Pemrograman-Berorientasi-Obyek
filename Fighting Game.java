public class karaktergame {
    private String name;
    private int life_point;
    private int attackhitpoint;
    private int attackkickpoint;
    
    //constructor
    public karaktergame(String name, int hit, int kick){
        this.life_point =100;
        this.name= name;
        this.attackhitpoint= hit;
        this.attackkickpoint= kick;
    }
    
    //function 
    
    public String getname(){
     return name;
}
    public int getlife_point(){
        return life_point;
    }
    
    public void hit(karaktergame karA){
        karA.life_point = karA.life_point - this.attackhitpoint;
    }

    public void kick(karaktergame karA){
        karA.life_point =karA.life_point - this.attackkickpoint;
    }

}



public class maingame {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        karaktergame Raiden = new karaktergame ("Raiden",10,20);
        karaktergame Subzero = new karaktergame ("Sub Zero", 5,25);
        
        System.out.println("***HEALT AWAL***");
        System.out.println("Healt Raiden: " + Raiden.getlife_point());
        System.out.println("Healt Sub Zero" + Subzero.getlife_point());
        System.out.println("\n");
        
        //pertandingan dimulai
        System.out.println("==== READY ====");
                
        
        //raiden melakukan tendangan ke subzero 
        Raiden.kick(Subzero);
        
        System.out.println("Raiden melakukan tendangan ke Subzero");
        System.out.println("Healt Raiden : " + Raiden.getlife_point());
        System.out.println("Healt Subzero : " + Subzero.getlife_point());
        System.out.println("\n");
        
        //subzero melakukan tendangan ke raiden 
        Subzero.kick(Raiden);
        
        System.out.println("Subzero melakukan tendangan ke Raiden");
        System.out.println("Healt Raiden: " + Raiden.getlife_point());
        System.out.println("Healt Subzero:  " + Subzero.getlife_point());
        System.out.println("\n");
        
        //subzero melakukan pukulan 3x ke raiden 
         for(int i=0;i<3;i++){