# -*- coding:utf-8 -*-
from os import system

class UsePsExec:

    def __init__(self, user, password, ip):

        self._user = user
        self._password = password
        self._ip = ip

    def m_psexec(self):

        string = "C:\\Users\\anderson.cesar\\Documents\\consumer_exploitdb\\find-exploitdb\\PsExec64.exe \\\\{} -u {}@local.domain -p {} ipconfig > info.txt"
        string_mod = string.format(self._ip, self._user, self._password)

        system(string_mod)

psexec = UsePsExec("login", "password", "ip")
psexec.m_psexec()
