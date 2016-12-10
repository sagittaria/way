package castle;

public class Room {
    private String description;
    private Room northExit;
    private Room southExit;
    private Room eastExit;
    private Room westExit;

    public Room(String description) 
    {
        this.description = description;
    }

    public void setExits(Room north, Room east, Room south, Room west) 
    {
        if(north != null)
            northExit = north;
        if(east != null)
            eastExit = east;
        if(south != null)
            southExit = south;
        if(west != null)
            westExit = west;
    }

    @Override
    public String toString()
    {
        return description;
    }
    
    public String getExitDesc(){
    	StringBuffer sb=new StringBuffer();
    	if(northExit!=null){
    		sb.append("north");
    	}
    	if(eastExit!=null){
    		sb.append("east");
    	}
    	if(westExit!=null){
    		sb.append("west");
    	}
    	if(southExit!=null){
    		sb.append("south");
    	}
    	return sb.toString();
    }
}
