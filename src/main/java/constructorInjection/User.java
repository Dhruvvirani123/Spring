package constructorInjection;

public class User {
	private int a,b;

	public User(int a, int b) {
		super();
		this.a = a;
		this.b = b;
	}

	public User() {
		super();
		// TODO Auto-generated constructor stub
	}

	@Override
	public String toString() {
		return "User [a=" + a + ", b=" + b + "]";
	}

	
}
