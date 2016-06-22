<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>My JSP 'main_left.jsp' starting page</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
    <style type="text/css">
<!--
.STYLE1 {
	color: #FFFF00;
	font-size: 36px;
}
.STYLE2 {
	color: #66FF00;
	font-size: 36px;
}
.STYLE3 {
	color: #FF3300;
	font-size: 36px;
}
-->
    </style>
</head>
  
  <body>
    <span class="STYLE2">小组成员</span>：<br>  
    <div align="left">
      <p><span class="STYLE3">组长：</span></p>
      <p>梁仕标</p>
      <p><br>
        <span class="STYLE1">组员：</span></p>
      <p>王大华<br>
        冯梓凡<br>
      容杰 </p>
      </div>
  </body>
</html>
