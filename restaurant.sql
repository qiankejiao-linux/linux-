/*
Navicat MySQL Data Transfer

Source Server         : myDB
Source Server Version : 50051
Source Host           : localhost:3306
Source Database       : mysql

Target Server Type    : MYSQL
Target Server Version : 50051
File Encoding         : 65001

Date: 2020-06-08 11:23:41
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `restaurant`
-- ----------------------------
DROP TABLE IF EXISTS `restaurant`;
CREATE TABLE `restaurant` (
  `restaurant_id` varchar(255) NOT NULL default '',
  `restaurant_name` varchar(255) default NULL,
  PRIMARY KEY  (`restaurant_id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of restaurant
-- ----------------------------
