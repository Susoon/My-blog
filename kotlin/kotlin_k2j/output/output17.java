import java.util.*;
public class Example {
public static Integer parseInt (String str ) {
return str.toIntOrNull();
}
public static String printProduct (String arg1 , String arg2 ) {
final String x = parseInt(arg1 );
final String y = parseInt(arg2 );
// ...
if(x == null){
System.out.println("Wrong number format in arg1: '$arg1'" );
return }
if(y == null){
System.out.println("Wrong number format in arg2: '$arg2'" );
return }
// x and y are automatically cast to non-nullable after null check
System.out.println(x * y );
}
public static void main (String[] args) {
printProduct("6" , "7" );
printProduct("a" , "7" );
printProduct("99" , "b" );
}
}
 