package controller;

import java.util.List;

import org.apache.catalina.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.servlet.ModelAndView;

import Dao.UserDao;

@Controller
public class UserController {

	@Autowired
	private UserDao dao;

	@RequestMapping("/")
	public String index(Model m) {
		m.addAttribute("name", "java");

		return "index";
	}

	@RequestMapping("/register")
	public String register() {

		return "register";

	}

	@RequestMapping("/home")
	public String Home(Model m) {
		List<User> list = dao.getAllUser();
		m.addAttribute("list", list);
		return "home";
	}

	@RequestMapping(value = "/insertUser", method = RequestMethod.POST)
	public String insertUser(@ModelAttribute User u, Model m) {
		dao.inserOrUpdateUser(u);
		List<User> list = dao.getAllUser();
		m.addAttribute("list", list);
		return "home";
	}

	@RequestMapping(value = "/update/{id}")
	public ModelAndView editUser(@PathVariable("id") int id) {
		User u = dao.getUserById(id);
		ModelAndView m = new ModelAndView();
		m.addObject("u", u);
		m.setViewName("update");
		return m;
	}
}