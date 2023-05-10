package constructorInjection;

public class User {
	private int a,b;

	public User() {
		super();
		// TODO Auto-generated constructor stub
	}

	public User(int a, int b) {
		super();
		System.out.println("integer cons");
		this.a = a;
		this.b = b;
	}
	public User(String a, String b) {
		super();
		System.out.println("String cons");
		this.a = Integer.parseInt(a);
		this.b = Integer.parseInt(b);
	}

	@Override
	public String toString() {
		return "User [a=" + a + ", b=" + b + "]";
	}
}
