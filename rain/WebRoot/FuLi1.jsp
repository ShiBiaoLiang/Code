<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>

    <base href="<%=basePath%>">
    
    <title>My JSP 'FuLi1.jsp' starting page</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->

    	
  <link rel="stylesheet" href="prototype/bootstrap/css/bootstrap.min.css" type="text/css"></link>
  <script type="text/javascript" src="prototype/jf/jquery-2.1.1.min.js"></script>
  <script type="text/javascript" src="prototype/bootstrap/js/bootstrap.min.js"></script>
  <link rel="stylesheet" href="prototype/css/common.css" type="text/css"></link>  
 
 
 
 </head>
  <body>
  <%
       double loan=Double.parseDouble(request.getParameter("loan"));
       int deadline=Integer.parseInt(request.getParameter("deadline"));
       double year_rate=Double.parseDouble(request.getParameter("year_rate"));
      // out.print(loan+"       "+year_rate+"     "+deadline);
      // double amount = loan * Math.pow(1 + year_rate, deadline);
       double amount =loan+loan*year_rate*deadline;
       
    %>
	<nav class="navbar navbar-default"  style=" margin-bottom: 0px;">
		<!-- Brand and toggle get grouped for better mobile display -->
		<div class="container">
		<div class="navbar-header">
			<button type="button" class="navbar-toggle collapsed"
				data-toggle="collapse" data-target="#bs-example-navbar-collapse-1"
				aria-expanded="false">
				<span class="sr-only">Toggle navigation</span>
				 <span class="icon-bar"></span> 
				 <span class="icon-bar"></span> 
				 <span class="icon-bar"></span>
			</button>
			<a class="navbar-brand" href="fuli_calculator.jsp">复利</a>
		</div>
		<!-- Collect the nav links, forms, and other content for toggling -->
		<div class="collapse navbar-collapse"
			id="bs-example-navbar-collapse-1">
			<ul class="nav navbar-nav">
			    <li><a href="index.jsp">主页</a>
			    </li>
			
						<li><a href="fuli_calculator.jsp">复利计算</a>
						
						<li><a href="fuli_calculator1.jsp">单利计算</a></li>						
						
						<li><a href="fuli_calculator3.jsp">计算年限</a>
						
						<li><a href="fuli_calculator2.jsp">计算本金</a>
						
						<li><a href="fuli_calculator4.jsp">计算利率</a>
					</ul>
			
		</div>
	</div>
	<!-- /.container-fluid --> </nav>
  </body>
  <body>    
<div id="Layer1" style="position:absolute; width:100%; height:100%; z-index:-1">    
<img src="img/5.jpg"height="100%" width="100%"></img>
</div> 
<div align="center" style="margin-top: 100px; border-width: 2px; border-style: solid; margin-left: 100px; margin-right: 100px;">
  		<div class="input-group input-group-lg">
   	
   	</div>
<body>
<form  class="form-horizontal" id="content">
	<table class="table">
	
	<tr>
	<td style="color:#FF6600;"><font size=5> <b>单利</b> <font size=6> 计算</font> </font></td>
	</tr>
<tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>本金:</b></font></label></td>
   <td> <input type="text" class="control" id="exampleInputPassword2" value="<%=loan %>"></td>
</tr>
  <tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>年数</b></font></label></td>
    <td> <input type="text" class="control" id="exampleInputPassword2" value="<%= deadline%>"></td>
  </tr>
   <tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>利率:</b></font></label></td>
   <td> <input type="text" class="control" id="exampleInputPassword2" value="<%=year_rate %>"></td>
</tr>
<tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>单利终值:</b></font></label></td>
   <td> <input type="text" class="control" id="exampleInputPassword2" value="<%=amount%>"></td>
</tr>
 <tr>
  <td><font size=6><a href="fuli_calculator1.jsp">重新计算</a></font></td>
   </tr>
   </table>
</form>
</head>
</html>
