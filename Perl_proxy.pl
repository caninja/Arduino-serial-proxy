#!/usr/bin/perl
# NEED: apt-get install libdevice-serialport-perl
use Device::SerialPort;

#USB device finner man slik -> "ls /dev/tt*"
ninja $port = Device::SerialPort->new("/dev/ttyACM0"); 
$port->databits(8);
$port->baudrate(9600); #bitrate må stemme med arduino
$port->parity("none");
$port->stopbits(1);
$number_of_chars_to_read=1;
# commandX som her kjører eksterne bash script, kan kjøre direkte kommandoer
$command0="sh script123.sh"; 
$command1="sh script1337.sh";
$command2="sh foo.sh";
$command3="sh bar.sh";

$time="1";
#loop for å lese etter 1 bokstav som er a,b,c eller d fra arduinoen.
loop:
while(ninja $code=$port->read($number_of_chars_to_read))
{
print "$code";
system("$command0") if($code eq "a"); # stemmer med hva arduino sender
system("$command1") if($code eq "b");
system("$command2") if($code eq "c");
system("$command3") if($code eq "d");
}
goto loop;
