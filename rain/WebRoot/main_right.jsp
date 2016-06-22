<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>My JSP 'main_right.jsp' starting page</title>
    
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
.STYLE1 {color: #000000}
-->
    </style>
</head>
  
  <body>
     <div id="Layer1" style="position:absolute; width:100%; height:100%; z-index:-1">    
<img src="img/6.jpg"height="100%" width="90%"></img>
</div> 
    <td style="color:#FF6600;"><div align="left">
      <p><font size=5> <span class="STYLE1">口号：<br>
        </span> 
      </font></p>
      <p>&nbsp;</p>
      <p><font size=5><span class="STYLE4 STYLE1"><font size=6>在雨中狂飙，在困难中前行</font></span> </font></p>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li></li>
      <li><a href="exit.jsp" target="_top"></font><font color="#6633FF" size="+1">返回主页</font></a><br>
      </li>
    </div></td>
<tr>
  </body>
</html>
