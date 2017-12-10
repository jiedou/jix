#!/usr/bin
set -e
cd  /etc/yum.repos.d  
mv  CentOS-Base.repo  CentOS-Base.repo.bk  
wget  http://mirrors.163.com/.help/CentOS6-Base-163.repo  
wget  http://mirrors.sohu.com/help/CentOS-Base-sohu.repo  
mv  CentOS6-Base-163.repo  CentOS-Base.repo  
echo "#append by manual"
echo "nameserver 114.114.114.114" >>  /etc/resolv.conf
echo "nameserver 8.8.8.8" >>  /etc/resolv.conf
yum-config-manager  --disable  addons  
yum-config-manager  --save  --setopt=addons.skip_if_unavailable=true  
yum  clean  all  -y  
yum  update  -y  &&  yum  upgrade  -y  

