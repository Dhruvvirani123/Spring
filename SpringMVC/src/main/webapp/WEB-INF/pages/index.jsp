<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h1>Dhruv Virani</h1>
	<h2>
		<a href="about">About</a>
	</h2>
	<h2>
		<a href="register">Register</a>
	</h2>
	<h2>
		<a href="home">Home</a>
	</h2>
	
	<h2>${name }</h2>
	<h2>${list }</h2>
	<c:forEach items="${list } var="s">
	<h1>${s }</h1>
	</c:forEach>
</body>
</html>