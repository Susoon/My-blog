import java.util.*;
public class Example {
public static void main (String[] args) {
final List<String> fruits = List.of("banana", "avocado", "apple", "kiwifruit");
fruits .stream().filter (it -> it.startsWith("a" ))
.sortedBy (it -> it )
.map (it -> it.toUpperCase())
.forEach (it -> System.out.println(it ))
;
}
}
 