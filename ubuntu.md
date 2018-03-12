## Seting Up A New Ubuntu

### VWTool

1. detract vmware-tools-upgrader-64
2. cd to the directory
3. `sudo ./vmware-install.pl`


### Softwares
1. change download server

2. install Flash and Microsoft Fonts

```
sudo apt-get update
sudo apt-get install ubuntu-restricted-extras
```
3. delete Empathy and install Pidgin

```
sudo apt-get remove empathy
sudo apt-get install pidgin
sudo apt-get install pidgin-plugin-pack
```

[](https://linux.cn/article-3128-1.html)

### GPU drive


### Sublime

```
wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -

echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

sudo apt-get update
sudo apt-get install sublime-text

```


```
"color_scheme": "Packages/Boxy Theme/schemes/Boxy Yesterday.tmTheme",
"theme": "Boxy Yesterday.sublime-theme"
```

### Chrome

```
wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo dpkg -i google-chrome-stable_current_amd64.deb
```

### Pip

`sudo apt-get install python3-pip3`


1. mkdir `~/.pip`

2. `vi ~/.pip/pip.conf` file

```
[global]
trusted-host =  mirrors.aliyun.com
index-url = http://mirrors.aliyun.com/pypi/simple
```

apt-get install python-mysqldb

3. `pip3 install --upgrade pip`

4. `sudo apt-get install libboost-python-dev`

### Uninstall Apport
`sudo apt-get purge apport`


### ATOM
```
sudo add-apt-repository ppa:webupd8team/atom
sudo apt-get update
sudo apt-get install atom 
```

### shared directory
mount -t cifs -o username=fushuyue,password=Huatai123,iocharset=utf8 //10.248.62.119/data /home/quant_it/share/data/
mount -t cifs -o username=fushuyue,password=Huatai123,iocharset=utf8 //10.248.62.119/work /home/quant_it/share/myfile/
mount -t cifs -o username=fushuyue,password=Huatai123,iocharset=utf8 //10.248.62.119/g   /home/quant_it/share/large_storage/


mount -t cifs -o username=fushuyue,password=Huatai123,iocharset=utf8 //10.248.60.4/实习生共享 /home/quant_it/share/x/

mount -t cifs -o username=administrator,password=Huatai123,iocharset=utf8 //10.248.62.201/fusy /home/quant_it/share/hk/

cp backtest_tick_2017-09_v5_1.h5 /home/quant_it/share/x/fushuyue/lstm/backtest_tick_2017-09_v5_1.h5
cp backtest_tick_2017-10_v5_1.h5 /home/quant_it/share/x/fushuyue/lstm/backtest_tick_2017-10_v5_1.h5

cp /media/quant_it/Elements/tick_data/tickdata_201710.h5 /home/quant_it/share/x/fushuyue/lstm/tickdata_201710.h5
cp backtest_tick_2017-11_v5_1.h5 /home/quant_it/share/x/fushuyue/lstm/backtest_tick_2017-11_v5_1.h5
cp /media/quant_it/Elements/tick_data/tickdata_201711.h5 /home/quant_it/share/x/fushuyue/lstm/tickdata_201711.h5
cp backtest_tick_2017-12_v5_1.h5 /home/quant_it/share/x/fushuyue/lstm/backtest_tick_2017-12_v5_1.h5
cp /media/quant_it/Elements/tick_data/tickdata_201712.h5 /home/quant_it/share/x/fushuyue/lstm/tickdata_201712.h5

cp fairseq_2015_2015-02.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-02.npy
cp fairseq_2015_2015-03.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-03.npy
cp fairseq_2015_2015-04.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-04.npy
cp fairseq_2015_2015-05.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-05.npy
cp fairseq_2015_2015-06.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-06.npy
cp fairseq_2015_2015-07.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-07.npy
cp fairseq_2015_2015-08.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-08.npy
cp fairseq_2015_2015-09.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-09.npy


cp fairseq_2015_2015-10.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-10.npy
cp fairseq_2015_2015-11.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-11.npy
cp fairseq_2015_2015-12.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_2015-12.npy

cp fairseq_2015_09.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_09.npy

cp fairseq_2015_08.npy /home/quant_it/share/x/fushuyue/lstm/fairseq_2015_08.npy




cp tickdata_201607.h5 /home/quant_it/share/hk/tickdata_201607.h5
cp tickdata_201608.h5 /home/quant_it/share/hk/tickdata_201608.h5
cp tickdata_201609.h5 /home/quant_it/share/hk/tickdata_201609.h5
cp tickdata_201610.h5 /home/quant_it/share/hk/tickdata_201610.h5
cp tickdata_201611.h5 /home/quant_it/share/hk/tickdata_201611.h5
cp tickdata_201612.h5 /home/quant_it/share/hk/tickdata_201612.h5
cp tickdata_201701.h5 /home/quant_it/share/hk/tickdata_201701.h5
cp tickdata_201702.h5 /home/quant_it/share/hk/tickdata_201702.h5
cp tickdata_201703.h5 /home/quant_it/share/hk/tickdata_201703.h5
cp tickdata_201704.h5 /home/quant_it/share/hk/tickdata_201704.h5
cp tickdata_201705.h5 /home/quant_it/share/hk/tickdata_201705.h5
cp tickdata_201706.h5 /home/quant_it/share/hk/tickdata_201706.h5
cp tickdata_201707.h5 /home/quant_it/share/hk/tickdata_201707.h5
cp tickdata_201708.h5 /home/quant_it/share/hk/tickdata_201708.h5
cp tickdata_201709.h5 /home/quant_it/share/hk/tickdata_201709.h5
cp tickdata_201710.h5 /home/quant_it/share/hk/tickdata_201710.h5
cp tickdata_201711.h5 /home/quant_it/share/hk/tickdata_201711.h5
cp tickdata_201712.h5 /home/quant_it/share/hk/tickdata_201712.h5



