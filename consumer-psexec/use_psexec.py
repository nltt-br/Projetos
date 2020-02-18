# -*- coding:utf-8 -*-
from os import system

class UsePsExec:

    def __init__(self, user, password, ip):

        self._user = user
        self._password = password
        self._ip = ip

    def m_psexec(self):

<<<<<<< HEAD
        string = "dir\\PsExec64.exe \\\\{} -u domain\\{} -p {} ipconfig > info.txt"
=======
        string = "dir\\PsExec64.exe \\\\{} -u {} -p {} ipconfig"
>>>>>>> afe861848430870b7205b283cf63bd351f021915
        string_mod = string.format(self._ip, self._user, self._password)

        system(string_mod)

<<<<<<< HEAD
psexec = UsePsExec("user", "password", "ip")
=======
psexec = UsePsExec("#", "#", "#")
>>>>>>> afe861848430870b7205b283cf63bd351f021915
psexec.m_psexec()
