GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_gatherer_fire2
	scripted
	bonfire.xml
	init_kabak
	shouse1_kabak
	noandrei
	pt_d7q04_wastedmale1
	pers_wasted_male
	d7q04_wastedmale.xml
	pt_d7q04_wastedmale2
	init_andrei
	pt_d7q04_andrei
	NPC_Andrei
	d7q04_andrei.xml
	pt_d7q04_nude
	pers_nudegirl
	d7q04_nudegirl.xml
	pt_d7q04_enemy1
	pers_morlok
	d7q04_e_morlok.xml
	add
	pt_d7q04_enemy2
	pers_butcher
	d7q04_e_butcher.xml
	pt_d7q04_enemy3
	pt_d7q04_enemy4
	pt_d7q04_enemy5
	pt_d7q04_enemy6
	fail
	completed
	d7q04
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	size
	get

Import:
	GetMainOutdoorScene (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_9 Op = 0xe0 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string, string)
0x4: Stack[-4] = Stack[-6]
0x5: Stack[-3] = "pt_gatherer_fire2"
0x6: Stack[-2] = "scripted"
0x7: Stack[-1] = "bonfire.xml"
0x8: Call2 0xfd

0x9: Pop(5)
0xa: @ CreateObjectVector(Stack[-0])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 7
0xe: Call2 0xcd

0xf: Pop(1)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(object, object, object, object)
0x13: @ Trace(Stack[-5])
0x14: Pop(0)
0x15: Push("init_kabak")
0x16: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x18: Push("shouse1_kabak")
0x19: @ GetSceneByName(Stack[-3], Stack[-1])
0x1a: Pop(1)
0x1b: Push("noandrei")
0x1c: @ Trigger(Stack[-3], Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-4] = Stack[-7]
0x20: Stack[-3] = "pt_d7q04_wastedmale1"
0x21: Stack[-2] = "pers_wasted_male"
0x22: Stack[-1] = "d7q04_wastedmale.xml"
0x23: Call2 0xeb

0x24: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-4] = Stack[-7]
0x28: Stack[-3] = "pt_d7q04_wastedmale2"
0x29: Stack[-2] = "pers_wasted_male"
0x2a: Stack[-1] = "d7q04_wastedmale.xml"
0x2b: Call2 0xeb

0x2c: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Pop(5)
0x2e: Stack[-2] = 0
0x2f: Push("init_andrei")
0x30: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x32: @ GetMainOutdoorScene(Stack[-1])
0x33: Pop(0)
0x34: PushEmpty(object, object, string, string, string)
0x35: Stack[-4] = Stack[-6]
0x36: Stack[-3] = "pt_d7q04_andrei"
0x37: Stack[-2] = "NPC_Andrei"
0x38: Stack[-1] = "d7q04_andrei.xml"
0x39: Call2 0xeb

0x3a: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3b: Pop(5)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-4] = Stack[-6]
0x3e: Stack[-3] = "pt_d7q04_nude"
0x3f: Stack[-2] = "pers_nudegirl"
0x40: Stack[-1] = "d7q04_nudegirl.xml"
0x41: Call2 0xeb

0x42: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x43: Pop(5)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-4] = Stack[-6]
0x46: Stack[-3] = "pt_d7q04_enemy1"
0x47: Stack[-2] = "pers_morlok"
0x48: Stack[-1] = "d7q04_e_morlok.xml"
0x49: Call2 0xeb

0x4a: Pop(4)
0x4b: @@ add(Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-4] = Stack[-6]
0x4f: Stack[-3] = "pt_d7q04_enemy2"
0x50: Stack[-2] = "pers_butcher"
0x51: Stack[-1] = "d7q04_e_butcher.xml"
0x52: Call2 0xeb

0x53: Pop(4)
0x54: @@ add(Stack[-1])
0x55: Pop(1)
0x56: PushEmpty(object, object, string, string, string)
0x57: Stack[-4] = Stack[-6]
0x58: Stack[-3] = "pt_d7q04_enemy3"
0x59: Stack[-2] = "pers_morlok"
0x5a: Stack[-1] = "d7q04_e_morlok.xml"
0x5b: Call2 0xeb

0x5c: Pop(4)
0x5d: @@ add(Stack[-1])
0x5e: Pop(1)
0x5f: PushEmpty(object, object, string, string, string)
0x60: Stack[-4] = Stack[-6]
0x61: Stack[-3] = "pt_d7q04_enemy4"
0x62: Stack[-2] = "pers_butcher"
0x63: Stack[-1] = "d7q04_e_butcher.xml"
0x64: Call2 0xeb

0x65: Pop(4)
0x66: @@ add(Stack[-1])
0x67: Pop(1)
0x68: PushEmpty(object, object, string, string, string)
0x69: Stack[-4] = Stack[-6]
0x6a: Stack[-3] = "pt_d7q04_enemy5"
0x6b: Stack[-2] = "pers_morlok"
0x6c: Stack[-1] = "d7q04_e_morlok.xml"
0x6d: Call2 0xeb

0x6e: Pop(4)
0x6f: @@ add(Stack[-1])
0x70: Pop(1)
0x71: PushEmpty(object, object, string, string, string)
0x72: Stack[-4] = Stack[-6]
0x73: Stack[-3] = "pt_d7q04_enemy6"
0x74: Stack[-2] = "pers_butcher"
0x75: Stack[-1] = "d7q04_e_butcher.xml"
0x76: Call2 0xeb

0x77: Pop(4)
0x78: @@ add(Stack[-1])
0x79: Pop(1)
0x7a: Stack[-1] = 0
0x7b: GOTO 0x89

0x7c: Push("fail")
0x7d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7f: PushEmpty()
0x80: Call2 0x95

0x81: Pop(0)
0x82: GOTO 0x89

0x83: Push("completed")
0x84: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x86: PushEmpty()
0x87: Call2 0x9d

0x88: Pop(0)
0x89: Return(); Pop(4)

0x8a: PushEmpty(int, int)
0x8b: Push("d7q04")
0x8c: @ GetVariable(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: Push((int) 1000)
0x8f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: PushEmpty()
0x92: Call2 0x95

0x93: Pop(0)
0x94: Return(); Pop(2)

0x95: Push("d7q04")
0x96: Push((int) -1)
0x97: @ SetVariable(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: PushEmpty()
0x9a: Call2 0xa5

0x9b: Pop(0)
0x9c: Return(); Pop(0)

0x9d: Push("d7q04")
0x9e: Push((int) 1000)
0x9f: @ SetVariable(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: PushEmpty()
0xa2: Call2 0xa5

0xa3: Pop(0)
0xa4: Return(); Pop(0)

0xa5: PushEmpty(object, object)
0xa6: EventDisable(26)
0xa7: PushEmpty(object, string)
0xa8: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Stack[-1] = "cleanup"
0xaa: Call2 0x10f

0xab: Pop(2)
0xac: Push( Stack[2 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: Push("cleanup")
0xaf: @ Trigger(Stack[-2], Stack[-1])
0xb0: Pop(1)
0xb1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb3: Push("cleanup")
0xb4: @ Trigger(Stack[-1], Stack[-1])
0xb5: Pop(1)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: Push("cleanup")
0xb9: @ Trigger(Stack[-3], Stack[-1])
0xba: Pop(1)
0xbb: Push( Stack[4 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbd: Push("cleanup")
0xbe: @ Trigger(Stack[-4], Stack[-1])
0xbf: Pop(1)
0xc0: Push("shouse1_kabak")
0xc1: @ GetSceneByName(Stack[-2], Stack[-1])
0xc2: Pop(1)
0xc3: Push("andrei")
0xc4: @ Trigger(Stack[-2], Stack[-1])
0xc5: Pop(1)
0xc6: PushEmpty(object)
0xc7: Call2 0xe5

0xc8: Pop(0)
0xc9: @ RemoveActor(Stack[-1])
0xca: Pop(1)
0xcb: Return(); Pop(2)

0xcc: Stack[-1] = 0
0xcd: PushEmpty(float, float)
0xce: @ GetGameTime(Stack[-1])
0xcf: Pop(0)
0xd0: Push((int) 24)
0xd1: Pop(1); Push(Stack[-4] * Stack[-1]);
0xd2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xa5

0xd6: Pop(0)
0xd7: GOTO 0xdf

0xd8: Push((int) 0)
0xd9: Push((int) 24)
0xda: Pop(1); Push(Stack[-5] * Stack[-1]);
0xdb: @ SetTimeEvent(Stack[-2], Stack[-1])
0xdc: Pop(2)
0xdd: @ Hold()
0xde: Pop(0)
0xdf: Return(); Pop(2)

0xe0: PushEmpty()
0xe1: PushEmpty()
0xe2: Call2 0x8a

0xe3: Pop(0)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(object, object)
0xe6: @ self(Stack[-1])
0xe7: Pop(0)
0xe8: Stack[-3] = Stack[-1]
0xe9: Return(); Pop(2)

0xea: Stack[-1] = 0
0xeb: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xec: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[-4] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf0: Push("Locator ")
0xf1: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf2: Push(" doesn't exist")
0xf3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf4: @ Trace(Stack[-1])
0xf5: Pop(1)
0xf6: Stack[-1] = 0
0xf7: GOTO 0xfa

0xf8: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf9: Pop(0)
0xfa: Stack[-13] = Stack[-1]
0xfb: Return(); Pop(8)

0xfc: Stack[-1] = 0
0xfd: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xfe: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xff: Pop(0)
0x100: Pop(0); Push((bool) Stack[-4] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x102: Push("Locator ")
0x103: Pop(1); Push(Stack[-1] + Stack[-12]);
0x104: Push(" doesn't exist")
0x105: Pop(2); Push(Stack[-2] + Stack[-1]);
0x106: @ Trace(Stack[-1])
0x107: Pop(1)
0x108: Stack[-1] = 0
0x109: GOTO 0x10c

0x10a: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x10b: Pop(0)
0x10c: Stack[-13] = Stack[-1]
0x10d: Return(); Pop(8)

0x10e: Stack[-1] = 0
0x10f: PushEmpty(int, int, object, int, int, object)
0x110: Push(Stack[-8])
0x111: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x112: @@ size(Stack[-3])
0x113: Pop(0)
0x114: Stack[-2] = (int) 0
0x115: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x117: @@ get(Stack[-1], Stack[-2])
0x118: Pop(0)
0x119: Push(Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11b: @ Trigger(Stack[-1], Stack[-7])
0x11c: Pop(0)
0x11d: Stack[-1] = 0
0x11e: Push((int) 1)
0x11f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x120: GOTO 0x115

0x121: Return(); Pop(6)

