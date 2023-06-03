package Dao;

import java.util.List;

import javax.transaction.Transactional;

import org.apache.catalina.User;
import org.springframework.orm.hibernate5.HibernateTemplate;

public class UserDao {
	private HibernateTemplate hibernateTemplate;

	public HibernateTemplate getHibernateTemplate() {
		return hibernateTemplate;
	}
	public void setHibernateTemplate(HibernateTemplate hibernateTemplate) {
		this.hibernateTemplate = hibernateTemplate;
	}
	@Transactional
	public void inserOrUpdateUser(User u) {
		this.hibernateTemplate.saveOrUpdate(u);
	}
	
	@Transactional
	public void deleteUer(User u) {
		this.hibernateTemplate.delete(u);
	}
	
	@Transactional
	public User getUserById(int id) {
		return this.hibernateTemplate.get(User.class, id);
	}
	public List<User> getAllUser(){
		return this.hibernateTemplate.loadAll(User.class);	
	}
}