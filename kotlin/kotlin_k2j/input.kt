import java.util.*;
class Main{
public static void list() {
List<String> fruits = List.of("banana“, "avocado",
"apple", "kiwifruit");
fruits.stream().filter(it -> it.startsWith("a"))
.sorted().map(it -> it.toUpperCase())
.forEach(it -> System.out.println(it));
}
public static void main(String args[]) {
Set<String> items = Set.of("apple", "banana",
"kiwifruit");
for (String item: items) {
System.out.println(item);
}
list();
}
}
