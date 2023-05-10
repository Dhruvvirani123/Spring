package com.spring;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class UserMain {

	public static void main(String[] args) {
		ApplicationContext context = new ClassPathXmlApplicationContext("config.xml"); 
		User u1 = (User) context.getBean("u1");
		
		System.out.println(u1);
	}
}
// plain old Java objects (POJOs)