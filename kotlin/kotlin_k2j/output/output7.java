import java.util.*;
public class Example {
public static void main (String[] args) {
final int a = 1 ;
// immediate assignment
final int b = 2 ;
// 'Int' type is inferred
final int c ;
// Type required when no initializer is provided
c = 3 ;
// deferred assignment
System.out.println("a = $a, b = $b, c = $c" );
}
}
 