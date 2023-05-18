package com.spring.reference;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class Main {
	public static void main(String[] args) {
		ApplicationContext context = new ClassPathXmlApplicationContext("com/spring/reference/referenceconfig.xml");
		Person p1 = (Person) context.getBean("p1");
		System.out.println(p1);
	}
}