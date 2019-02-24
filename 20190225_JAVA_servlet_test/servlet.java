package com.servlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class Servet extends HttpServlet {

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("RunDoGet");
		//取用户名
		PrintWriter writer = resp.getWriter();
		
		String name = req.getParameter("user");		
		writer.println(name);
		//取密码
		String pswd = req.getParameter("password");
		writer.println(pswd);
		
		//connect mysql
		
		try {
			DriverManager.registerDriver(new com.mysql.cj.jdbc.Driver());
			//connect
			Connection connection = DriverManager.getConnection("jdbc:mysql://139.9.2.241:3306/testdb", "testdb",
					"Difficult_password1234");
			String sql= "select * from student where user =?";
			PreparedStatement pst = connection.prepareStatement(sql);
			System.out.println(pst);
			pst.setString(1,name );
			ResultSet rs = pst.executeQuery();
		
			//先判断有没有取回
			if(rs.next()) {
				String returnpswd = rs.getString("password");
				if(returnpswd.equals(pswd)) {
					System.out.println("successed");
					writer.println("successed");
				}else {
					System.out.println("faild");
					writer.println("faild");
				}
			}
			
		
			
			System.out.println(rs);
			
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		
		

		writer.close();		
	}

	@Override
	protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		// TODO Auto-generated method stub
		super.doPost(req, resp);
	}
	
}
