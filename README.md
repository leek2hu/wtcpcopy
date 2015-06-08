#[WTCPCopy](https://github.com/leek2hu/wtcpcopy) - Windows Migration of TCPCopy

TCPCopy is a TCP stream replay tool to support real testing of Internet server applications. 

Please refer to open source project **tcpcopy** [https://github.com/session-replay-tools/tcpcopy](https://github.com/session-replay-tools/tcpcopy) for details

##Description
Tcpcopy is a nice tool for scenarios of pressure test. Unfortunately it only works on linux platform.

WTcpcopy is a windows migration based on tcpcopy, it aims to run on windows.

Please note that the entire solution of tcpcopy includes a tcpcopy client application and a intercept application. This migration only covers the tcpcopy client application.



##Quick start

Two quick start options are available for *tcpcopy*:

* [Download the latest tcpcopy release](https://github.com/leek2hu/wtcpcopy/releases).
* Clone the repo: `git clone git://github.com/leek2hu/wtcpcopy.git`.

#Precondition
1. It need to install mingw enviorment.
2. It need to install winpcap in advance if winpcap related features are selected for capturing /sending packets.

##Getting tcpcopy installed on the online server
1. `cd tcpcopy`
2. Set winpcap path if pacap related features will be selelcted. $winpcap_home is the directory where winpcap is installed.  
	`export C_INCLUDE_PATH=$winpcap_home/Include/`  
	`export LIBRARY_PATH=$winpcap_home/Lib`  
3. `./configure --mingw --with-cc=gcc`
	- choose appropriate configure options if needed
4. `make`
5. `make install`


###Configure Options for tcpcopy
    --offline                   replay TCP streams from the pcap file
    --pcap-capture              capture packets at the data link
    --pcap-send                 send packets at the data link layer instead of the IP layer
    --with-pfring=PATH          set path to PF_RING library sources		
	--mingw                     run on windows system, and use mingw to build the application.
	--windows 		            run on windows system, and will use IDE e.g. code::blocks or visual studio to build the application.
    --set-protocol-module=PATH  set tcpcopy to work for an external protocol module
    --single                    if intercept and tcpcopy are both configured with "--single" option, 
                                only one tcpcopy works together with intercept, 
                                and better performance is achieved.
    --with-debug                compile tcpcopy with debug support (saved in a log file)


   
##Running TCPCopy
Assume *wtcpcopy* is configured with "./configure --mingw --with-cc=gcc".
 
###1) On the online source server (administartor privilege is required):
      
      wtcpcopy.exe -x localServerIP:localServerPort-targetServerIP:targetServerPort -s <intercept server,> 
      [-c <ip range,>]
      
      For example(assume 61.135.233.160 is the IP address of the target server):

        wtcpcopy.exe -x 61.135.233.159:80-61.135.233.160:8080 -s 61.135.233.161 -c 62.135.200.x
        
        wtcpcopy would capture port '80' packets on current server, change client IP address 
        to one of 62.135.200.x series, send these packets to the target port '8080' of the 
        target server '61.135.233.160', and connect 61.135.233.161 for asking intercept to 
        pass response packets to it.
        
        Although "-c" parameter is optional, it is set here in order to simplify route 
        commands.

##Note
1. It is tested on windows 2007 only
2. Please execute "./wtcpcopy.exe -h" for more details.

##Release History


##Bugs and feature requests


## Copyright and license

Copyright 2015 under [the BSD license](LICENSE).


