import java.util.*;

public class 505a
{
  public static void main(String [] args)
  {
  Scanner input = new Scanner(System.in);

  System.out.print("Enter the number of people going to be entered");
  int n = input.nextInt();
  System.out.println();

    ArrayList<String> names = new ArrayList<String>();
    ArrayList<Integer> books = new ArrayList<Integer>();
    ArrayList<Integer> points = new ArrayList<Integer>();
    
  for(int lcv = 0;lcv<n;lcv++)
    {
      System.out.print("Enter the first name of the person: ");
      String name1 = input.next();
      System.out.println();
      
      System.out.print("Enter the last name of the person: ");
      String name2 = input.next();
      System.out.println();
      
      System.out.print("Enter the # of books read: ");
      int b = input.nextInt();
      System.out.println();

      names.add(name1 + " " + name2);
      books.add(b);
      
    }
      for(int lcv = 0;lcv<n;lcv++)
      {
        int p = calc(books.get(lcv));
        points.add(p);
      }

     for(int lcv = 0;lcv<n;lcv++)
       {
         System.out.println(names.get(lcv) + " " + books.get(lcv) + " " + points.get(lcv));
       }
    printwinner(names,books,points);
  }
  public static int calc(int bb)
  {
    
    
    if (bb<=3)
    {
      return bb*10;
    }
    if (bb<=6)
    {
      return 30 + (bb-3)*15;  
    }
    return 30+45+(bb-6)*20;

    
    }
}

public static void printwinner(ArrayList<String> names, ArrayList<Integer> books, ArrayList<Integer> points);
  {
    int win = points.get(0);
    int spot = 0;
    for(int lcv = 0;lcv<points.size();lcv++)
      {
        int p = points.get(lcv);
        if(p>win)
        {
          win = p;
          spot = lcv;
        }
      }
    System.out.println("The winner is " + names.get(spot) + " and the number of books they readed is " + books.get(spot));

  }