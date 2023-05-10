package collection;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class main {
	public static void main(String[] args) {
		ApplicationContext con = new ClassPathXmlApplicationContext("collection/collection.xml");
		User u = (User)con.getBean("u");
		System.out.println(u);
	}
}