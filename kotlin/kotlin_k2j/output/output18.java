import java.util.*;
public class Example {
public static Integer getStringLength (Object obj ) {
if(obj instanceof String ){
// 'obj' is automatically cast to 'String' in this branch
return obj.length ;
}
// 'obj' is still of type 'Any' outside of the type-checked branch
return null;
}
public static void main (String[] args) {
public static Object printLength (Object obj ) {
System.out.println("'$obj' string length is ${getStringLength(obj) ?: ... err, not a string} " );
}
printLength("Incomprehensibilities" );
printLength(1000 );
printLength(List.of(anyy()));
}
}
 