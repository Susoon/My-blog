import java.util.*;
public class Example {
public static void main (String[] args) {
final List<String> items = List.of("apple", "banana", "kiwifruit");
for (String index : items.indices ){
System.out.println("item at $index is ${items[index]}" );
}
}
}
 