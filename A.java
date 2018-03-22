import java.net.*;
import java.io.*;
public class A
{
    public static void main(String[]args)
     {
      try
{
      InetAddress me=InetAddress.getLocalHost();
       String add= me.getHostAddress();
       System.out.println("locallhost address" +add);
       String name=me.getHostName();
       System.out.println("name" +name);
      }
  catch(UnknownHostException e)
{
     System.out.println("not visible" +e);
 }
  }
}

