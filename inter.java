import java.util.*;
import java.net.*;
public class inter
{
 public static void main(String[]args)throws SocketException
  {
 Enumeration<NetworkInterfaces>Interfaces=NetworkInterface.getNetworkInterfaces;
 while(Interfaces.hasmoreElements)
  {
   NetworkInterface ni=Interfaces.nextElement();
   System.out.println(ni);
    }
 }
}
