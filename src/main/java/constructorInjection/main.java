package constructorInjection;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class main {
	public static void main(String[] args) {
		ApplicationContext con = new ClassPathXmlApplicationContext("constructorinjection/constructorinjection.xml");
		User u1 = (User) con.getBean("u");
		System.out.println(u1);
	}
}