<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="tags" %>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>

    <base href="<%=basePath%>">
    
    <title>My JSP 'fuli_calculator.jsp' starting page</title>
    
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
			<a class="navbar-brand" href="daikuan.jsp">贷款计算</a>
		</div>
		<!-- Collect the nav links, forms, and other content for toggling -->
		<div class="collapse navbar-collapse"
			id="bs-example-navbar-collapse-1">
			<ul class="nav navbar-nav">
			    <li><a href="index.jsp">主页</a>
			    </li>
				
				
			</ul>
		</div>
		<!-- /.navbar-collapse -->
	</div>
	<!-- /.container-fluid --> </nav>
  </body>
  <body>    
<div id="Layer1" style="position:absolute; width:100%; height:100%; z-index:-1">    
<!--  <img src="img/background_2.jpeg"height="100%" width="100%"></img>-->
</div> 
</div>
<div id="Layer1" style="position:absolute; width:100%; height:100%; z-index:-1">    
<img src="img/2.jpg"height="100%" width="100%"></img>
</div> 
<div align="center" style="margin-top: 100px; border-width: 2px; border-style: solid; margin-left: 100px; margin-right: 100px;">
  		<div class="input-group input-group-lg">
   	
   	</div>
<div id="jiemian">
<form action="" class="form-horizontal" id="content">
	<table class="table">
	
<tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>需要贷款金额:</label></td>
   <td> <input type="text" class="control" id="exampleInputPassword2" name="loan"><font size=5>元
   </font></td>
</tr>
  <tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>贷款期限</b></font></label></td>
    <td> <input type="text" class="control" id="exampleInputPassword2" name="deadline"><font size=5>月
   </font></td>
  </tr>
   <tr>
   <td> <label for="inputtext3 control-label"><font size=5> <b>年利率:</b></font></label></td>
   <td> <input type="text" class="control" id="exampleInputPassword2" name="year_rate"></td>
</tr>
<tr><td><label for="inputtext3 control-label"><font size=5> <b>还款方式</b></font></label></td>
<td><select class="form-control" name="choice">
  <option value="a"> 等额本息还款</option>
  <option value="b"> 等额本金还款</option>
</select></td>
</tr>
 <tr>
  <td><button type="submit" class="btn btn-default btn-primary">开始计算</button></td>
  <td> <button type="reset" class="btn btn-default btn-primary">重新计算</button></td>
   </tr>
   </table>
</form>

</div>
<%
	String loan=request.getParameter("loan");
	String deadline=request.getParameter("deadline");
	String year_rate=request.getParameter("year_rate");
	String choice=request.getParameter("choice");
	if(loan==null||deadline==null||year_rate==null||choice==null)
{
	loan="";
	deadline="";
	year_rate="";
	choice="";
}


if(loan.length()>0&&deadline.length()>0&&year_rate.length()>0){

	if(choice.equals("a"))
	{
   %> 
	<tags:benxi deadline_="<%= deadline %>" year_rate_="<%= year_rate %>" loan_="<%= loan %>">
	</tags:benxi>
	<%=query%>
   <%
   }
   else if(choice.equals("b"))
   {%> 
   <tags:benjin deadline_="<%= deadline %>" year_rate_="<%= year_rate %>" loan_="<%= loan %>">
   </tags:benjin>
	<%=queryresult %>
   <%} 
   else out.print("请重新选择");
   }
    %>
     
</body>
</html>
