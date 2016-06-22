/*
Navicat MySQL Data Transfer

Source Server         : gzcc
Source Server Version : 50162
Source Host           : localhost:3306
Source Database       : student

Target Server Type    : MYSQL
Target Server Version : 50162
File Encoding         : 65001

Date: 2016-06-21 18:36:47
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `message`
-- ----------------------------
DROP TABLE IF EXISTS `message`;
CREATE TABLE `message` (
  `number` char(50) NOT NULL,
  `name` char(50) NOT NULL,
  `birthday` char(255) NOT NULL,
  `email` char(100) NOT NULL,
  PRIMARY KEY (`number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of message
-- ----------------------------
INSERT INTO `message` VALUES ('1', '李四', '1995620', '王玉生育@qq.com');
INSERT INTO `message` VALUES ('2', '黎明', '19930720', '12563@qq.com');

-- ----------------------------
-- Table structure for `user`
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user` (
  `logname` char(255) NOT NULL,
  `password` char(255) DEFAULT NULL,
  `email` char(255) DEFAULT NULL,
  PRIMARY KEY (`logname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES ('11', '11', '11');
INSERT INTO `user` VALUES ('112', '112', '112');
INSERT INTO `user` VALUES ('aa', 'aa', '231');
INSERT INTO `user` VALUES ('qq', 'qq', 'qq');
INSERT INTO `user` VALUES ('梁仕标', '123456789', '1342776370@qq.com');
